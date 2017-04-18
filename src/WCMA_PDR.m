function Pred = WCMA_PDR()
    % Radiations sample (From AEMET) [�C]
%     Tamb_file = importdata('../data_formatted/Tamb_matrix.txt', '\t', 1);
%     Tamb = Tamb_file.data; %Tamb_t(time, day)
%     D = size(Tamb,1);
%     T = size(Tamb,2);
    Ppv = evalin('base','E_cur');
%     file = importdata('../data_formatted/tested_sample.txt','\t',1);
%     E = file.data;
    D = size(Ppv,1);
    T = size(Ppv,2);
    
    %% Constants
    % Weghting constant
    a = 0.99;
    s = 0.75;
    y = 0.25;
    K = 3;
    W = 3;

    
    %% Algorithm ecuations
    % position seen as an array
    to1d = @(d,t) (t-1)*D + d;
    to2d = @(pos) [mod(pos-1,D)+1, fix((pos-1)/D)+1];
    
    %% Processing values
    % Initialize first predicted day with real values
    % P: The closer, the higher. Column
    function ret = P()
        ret = 1 - (K-(1:K)+1)/K;
    end

    % E: Weighted power
    E = zeros(D,T);
    E(1,:) = Ppv(1,:);
    function [] = Es()
        for d = 2:D
            for t = 1:T
                if(t==1)
                    E(d,t) = a*Ppv(d-1,T) + (1-a)*(sum(Ppv(1:d-1,t))/(d-1));
                else
                    E(d,t) = a*Ppv(d,t-1) + (1-a)*(sum(Ppv(1:d-1,t))/(d-1));
                end
            end
        end
    end

    Es();
    
%     disp(E);
%     E_trans = E';
%     Tamb_trans = Ppv';
%     error = E_trans - Tamb_trans;
%     plot(1:T*D, E_trans(:), 1:T*D, Tamb_trans(:));
%     plot(1:T*D, error(:));

    % V: Row
    function ret = V(pos)
        ret = zeros(1,K);
        for k = 1:K
            ret(1,k) = Vk(pos, k);
        end
    end
    function ret = Vk(pos,k)
        if(pos < 1)
            pos = pos + D;
        end
        x = to2d(pos);
        d = x(1);
        t = x(2);
        if(t-k+1 < 1)
            k = 1;
        end
            sum_e = sum(E(1:d-1,t-k+1));
%             disp(['sum_e']);
%             disp([sum_e]);
            ret = E(d,t-k+1)*( (d-1)/sum_e );
    end

    % GAP
    function ret = GAP(pos)
        v = V(pos);
        p = P();
        sum_p = sum(p);
%         disp('v');
%         disp(v);
%         disp('p');
%         disp(p);
%         disp('sum p');
%         disp(sum_p);
        ret = v * (p / sum_p)';
    end

%     % Egap
    function ret = Egap(pos)
        x = to2d(pos);
        d = x(1);
        t = x(2);
        t_ini = 1;
        sum_e = 0;
        while(t_ini < d)
            sum_e = sum_e + E(t_ini, t);
            t_ini = t_ini + 1;
        end
%         disp('Sum of previous days');
%         disp(sum_e);
        
        if((t-1)<1)
            t=t+1;
        end
        a1 = a*E(d,t-1);
        a2 = (1-a)*GAP(pos-D);
        a3 = double(sum_e/D);
        ret = a1 + a2 * a3;
    end
    
    % Build matrix
    Pred = zeros(D,T);
    Pred(1,:) = Ppv(1,:);
    for hour = 1:T
        for day = 2:D
            pos = to1d(day,hour);
%             disp(['d=',num2str(day),'t=',num2str(hour)]);
            aux = Egap(pos);
            Pred(day,hour) = aux;
        end
    end
    
    
    
    
    % PE(d,i) = s*PE(d-1,i) + (1-s)*PredError(d,x)
    % |PE| == T
    error = Pred - Ppv;
    PE = zeros(D, T);
    for hour = 1:T
        for day = 2:D
            % change error with sum and div like on E
            disp(['current error: ', num2str(error(day,hour))]);
            pos = to1d(day,hour);
%             todo
            if(pos-K+1 < 1) 
                k = 1;
            else
                k = K;
            end
            PE(day,hour) = s*PE( pos-1 ) + (1-s) * sum(error((pos-k+1):pos)) / (day-1);
            disp(['PE:', num2str(PE(day,hour))]);
        end
    end
    plot(1:T*D, PE(:));
    % PDR
    PDR = zeros(D, T);
    for day = 1:D
        for hour = 1:T
            dividend = 0;
            for wi = 0:W-1
                dividend = dividend + (PE(day,mod(hour-wi,24)+1)+PE(day,mod(hour+wi,24)+1))*y^(W-1);
            end
            divisor = 0;
            for wi = 0:W-1
               divisor = divisor + y^(wi+1); 
            end
            PDR(day,hour) = dividend / divisor;
        end
    end
    
%     plot(1:D*T, PDR(:));

    E_pdr = zeros(D,T);
    E_pdr(1,:) = Ppv(1,:);
    for day = 2:D
        for hour = 1:T
            if(hour==1)
                E_pdr(day,hour) = a*Ppv(day-1,T) + (1-a)*(sum(Ppv(1:day-1,hour))/(day-1));
            else
                disp([day, hour, GAP(to1d(day,hour))]);
                E_pdr(day,hour) = a*Ppv(day,hour-1) + (1-a)*GAP(to1d(day,hour))*(sum(Ppv(1:day-1,hour))/(day-1)) + PDR(day,mod(hour,24)+1);
            end
        end
    end
%     plot(1:D*T, E_pdr(:), 1:D*T, Ppv(:));
    
    error = E_pdr - Ppv;
%% Plot results
%     Pred_trans = Pred';
%     Ppv_trans = Ppv';
%
%     predvscurGraph = figure;
%     plot(1:336, Pred_trans(:), 1:336, Ppv_trans(:));
% 
%     errorGraph = figure;
    plot(1:D*T, error(:));
    
end