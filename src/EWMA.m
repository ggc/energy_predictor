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
    a = 0.75;

    %% Algorithm ecuations
    % position seen as an array
    to1d = @(d,t) (t-1)*D + d;
    to2d = @(pos) [mod(pos-1,D)+1, fix((pos-1)/D)+1];

    %% Processing values
    % Initialize first predicted day with real values
    E_ewma = zeros(D,T);
    E_ewma(1,:) = E(1,:);

    for pos = 1:(D*T)-1
        E_ewma(pos+1) = a*E(pos) + (1-a)*E_ewma(pos);
    end
    E_ewma_trans = E_ewma';
    E_trans = E';
    error = E_ewma_trans - E_trans;
    figure
    plot(1:D*T, error(:));
    figure
    plot(1:T*D,E_ewma_trans(:), 1:D*T, E_trans(:));

end
