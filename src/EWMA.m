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
    a = .75;

    %% Algorithm ecuations
    % position seen as an array
    to1d = @(d,t) (t-1)*D + d;
    to2d = @(pos) [mod(pos-1,D)+1, fix((pos-1)/D)+1];

    %% Processing values
    % Initialize first predicted day with real values
    E_ewma = zeros(D,T);

    for d = 1:D-1
        for t = 1:T
            E_ewma(d+1, t) = a*E(d,t) + (1-a)*E_ewma(d,t);
        end
    end
    
    E_ewma_trans = E_ewma';
    E_trans = E';
    error = E_ewma_trans - E_trans;
    figure
    plot(1:D*T, error(:));
    title('Error');
    xlabel('Hous from start');
    ylabel('W');
    figure
%   T*D/2
    plot(1:T*D,E_ewma_trans(:), 1:(D*T), E_trans(:),'--k');
    title('EWMA vs Real');
    xlabel('Hours from start');
    ylabel('W');

end
