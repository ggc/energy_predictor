function ret = signal_builder_wind_v2
    %% Wind speed

    windSpeed = importdata('../data_formatted/windspeed_2017-04-01.txt');
    windSpeed = jsondecode(windSpeed{1});
    fields = fieldnames(windSpeed);
    
    D = numel(fields);
    T = numel( fieldnames( windSpeed.(fields{1}) ) );
    m = zeros(24,numel(fields)); % Because we need cols-days, rows-hours!!!


    for i = 1:numel(fields)
        m(:,i) = struct2array(windSpeed.(fields{i}));
        windSpeed.(fields{i});
    end


    WindSpeed.signals.dimensions = 1;
    WindSpeed.signals.values = m(:);
    WindSpeed.time = 0:14/(D*T):D-1-14/(D*T);

    
    %% Wind bearing
    windBearing = importdata('../data_formatted/windbearing_2017-04-01.txt');
    windBearing = jsondecode(windBearing{1});


    fields = fieldnames(windBearing);
    for i = 1:numel(fields)
        m(:,i) = struct2array(windBearing.(fields{i}));
        windBearing.(fields{i});
    end

    WindBearing.signals.dimensions = 1;
    WindBearing.signals.values = m(:);
    WindBearing.time = 0:14/(D*T):D-1-14/(D*T);

    
    % Return statement
    
    ret(:,1) = WindSpeed.signals.values(:);
    ret(:,2) = WindBearing.signals.values(:);
    
    assignin('base','windSpeed', WindSpeed);
    assignin('base','windBearing', WindBearing);
end