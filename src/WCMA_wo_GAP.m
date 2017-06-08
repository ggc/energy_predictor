function pred = WCMA_wo_GAP()
    % Radiations sample (From AEMET) [�C]
%     Tamb_file = importdata('../data_formatted/Tamb_matrix.txt', '\t', 1);
%     Tamb = Tamb_file.data; %Tamb_t(time, day)
%     D = size(Tamb,1);
%     T = size(Tamb,2);
    Ppv = discretize_signals();

    D = 14;
    T = 24;
    
    %% Constants
    % Weghting constant
    a = 0.8;
    K = 2;

    
    %% Algorithm ecuations
    % position seen as an array
    pos = @(d,t) (t-1)*D + d;
    
    %% Processing values
    % Initialize first predicted day with real values
    
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
    
    pred = E;
%     
%     disp(E);
%     E_trans = E';
%     Tamb_trans = Ppv';
%     error = E_trans - Tamb_trans;
%     plot(1:T*D, E_trans(:), 1:T*D, Tamb_trans(:));
%     plot(1:T*D, error(:));
end