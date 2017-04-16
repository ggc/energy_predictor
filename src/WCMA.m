function E_wcma = WCMA()
    % Radiations sample (From AEMET) [ºC]
%     Tamb_file = importdata('../data_formatted/Tamb_matrix.txt', '\t', 1);
%     Tamb = Tamb_file.data; %Tamb_t(time, day)
%     D = size(Tamb,1);
%     T = size(Tamb,2);
    
%     file = importdata('../data_formatted/tested_sample.txt','\t',1);
%     E = file.data;
    E = evalin('base','E_cur');
    D = size(E,1);
    T = size(E,2);
    
    %% Constants
    % Weghting constant
    a = 0.35;
    K = 3;

    
    %% Algorithm ecuations
    % position seen as an array
    to1d = @(d,t) (t-1)*D + d;
    to2d = @(pos) [mod(pos-1,D)+1, fix((pos-1)/D)+1];
    
    %% Processing values
    
    % P: The closer, the higher. Column
    function ret = P()
        ret = 1 - (K-(1:K)+1)/K;
    end

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
%             if(sum_e<100)
%                 disp(['sum_e and pos']);
%                 disp([sum_e, pos]);
%             end
            if (sum_e > 0)
                ret = E(d,t-k+1)*( (d-1)/sum_e );
            else
                ret = 1;
            end
    end

    % GAP
    function ret = GAP(pos)
        v = V(pos);
        p = P();
        sum_p = sum(p);
%         if(pos==147)
%         disp('v');
%         disp(v);
%         disp('p');
%         disp(p);
%         disp('sum p');
%         disp(sum_p);
%         end
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
        
%         disp(['GAP at ', num2str(pos), ': ', num2str(a2)]);
        a3 = double(sum_e/D);
        ret = a1 + a2 * a3;
    end
    
    % Build matrix
    E_wcma = zeros(D,T);
    E_wcma(1,:) = E(1,:);
    for day = 2:D
        for hour = 1:T
            pos = to1d(day,hour);
%             disp(['d=',num2str(day),'t=',num2str(hour)]);
            aux = Egap(pos);
            if(aux > 1000)
                disp('weird values...');
                disp(num2str(aux));
                disp(to2d(pos));
            end
            E_wcma(day,hour) = aux;
        end
    end
    
    
    %% Plot results
    
    E_wcma_trans = E_wcma';
    E_trans = E';
    error = E_wcma_trans - E_trans;
    std_deviation(1:D*T) = std(error(:));
    figure
    plot(1:T*D,E_wcma_trans(:), 1:D*T, E_trans(:));
    figure
    plot(1:D*T, error(:), 1:D*T, std_deviation(:));
end