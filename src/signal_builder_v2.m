function signal_builder_v2
    %% Irradiation
    ir_file = importdata('../data_formatted/ir_2017-03-16.txt');
    ir_file = jsondecode(ir_file{1});

    fields = fieldnames(ir_file);
    D = numel(fields);
    T = numel( fieldnames( ir_file.(fields{1}) ) );
    m = zeros(24,numel(fields)); % Because we need cols-days, rows-hours!!!
    seasonFactor = 0.7; % Relative to season, being 0 in winter and 1 in summer

    x = 0:23;
    y = gaussmf(x,[2.5 15]);
    y = y*(0.8+(0.2*seasonFactor)); 
    
    for i = 1:numel(fields)
        m(:,i) = (1-struct2array(ir_file.(fields{i}))) * 900;
        for j = 1:24
            m(j,i) = m(j,i) * y(j);
        end
    end

    Ir.signals.dimensions = 1;
    Ir.signals.values = m(:);
    Ir.time = 0:14/(D*T):D-1-14/(D*T);

    %% Temperature

    temp_file = importdata('../data_formatted/temp_2017-03-16.txt');
    temp_file = jsondecode(temp_file{1});

    fields = fieldnames(temp_file);

    for i = 1:numel(fields)
        m(:,i) = struct2array(temp_file.(fields{i}));
        temp_file.(fields{i});
    end


    Temp.signals.dimensions = 1;
    Temp.signals.values = m(:);
    Temp.time = Ir.time;

    assignin('base','Ir', Ir);
    assignin('base','Temp', Temp);
end