function E_ewma = EWMA()
    % Radiations sample (From AEMET) [�C]
%     file = importdata('../data_formatted/Tamb_matrix.txt', '\t', 1);
%     E = file.data;
    % Test sample
    
%     file = importdata('../data_formatted/tested_sample.txt','\t',1);
%     E = file.data;
    
    % Energy values from PV Matlab Model
    E = evalin('base','E_cur');


    D = size(E,1);
    T = size(E,2);

    %% Constants
    % Weghting constant
    a = 0.5;

    %% Algorithm ecuations


    %% Processing values
    % Initialize first predicted day with real values
    E_ewma = zeros(D,T);
    E_ewma(1,:) = E(1,:);
    % Fill predicted values with Algorithm output
    for d = 1:D-1
        for t = 1:T
            E_ewma(d+1,t) = a*E(d,t) + (1-a)*E_ewma(d,t);
        end
    end

    E_ewma_trans = E_ewma';
    E_trans = E';
    error = E_ewma_trans - E_trans;
%     figure
%     plot(1:D*T, error(:));
%     figure
    plot(1:T*D,E_ewma_trans(:), 1:D*T, E_trans(:));

end
