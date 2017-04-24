function E_ethz = ETHZ() 
    % Temperature sample (From AEMET) [�C]
    % For debugging
%     Tamb_file = importdata('Tamb_matrix.txt', '\t', 1);
%     Tamb_file = importdata('raw_data/temperature_matrix.json');
%     Tamb = Tamb_file.data;
%     Tamb = Tamb_file;
%     D = size(Tamb,1);
%     T = size(Tamb,2);
    E = evalin('base','E_cur');

%     file = importdata('../data_formatted/tested_sample.txt','\t',1);
%     E = file.data;
    D = size(E,1);
    T = size(E,2);
    L = 24;
    

    %% Constants
    % Weghting constant
    a = 0.75; b = 0.25; c = 0.85;

    %% Algorithm ecuations
    % position seen as an array
    pos = @(d,t) (t-1)*D + d;
    
    % Measured power
    function ret = Es(pos)
        if pos < 1
            ret = Es(pos+D);
        else
            ret = E(pos);
%             ret = Energy.signals.values(pos);
        end
    end

    % Long term measured power (S sample size)
    function ret = En( pos, N )
        if N == 0
            ret = 0;
            return;
        end
        if pos < 1
            ret = Es(pos+D);
        else
            ret = a*En( pos-D, N-1 ) + (1-a)*Es(pos-D);
        end
    end

    % Short term average power
    function ret = R( pos )
        if pos < 1
            ret = 0;
        else
            ret = b*R( pos-D ) + (1-b)*Es( pos-D );
        end
    end


    %% Processing values
    % Predicted power
    E_ethz = zeros(D, T); 
    % Fill predicted values with Algorithm output
    for d = 1:D
        for t = 1:T
            p = pos(d,t);
            r = R( p );
            e = En(p, L);
            E_ethz(d,t) = min( (1-c)*e+c*r, e );
        end
    end
    
    
    %% Plot results
    
    E_ethz_trans = E_ethz';
    E_trans = E';
    error = E_ethz_trans - E_trans;
%     std_deviation(1:D*T) = std(error(:));
    figure('name', 'curvspredFig');
    plot(1:T*D,E_ethz_trans(:), 1:D*T, E_trans(:));
    figure('name', 'errorFig');
    plot(1:D*T, error(:));
end