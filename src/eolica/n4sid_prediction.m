function prediction = n4sid_prediction()
    
    %% Loading values

    input = importfile('wind_2017-04-16.txt');
    

    n = size(input,1);
    % Power output
    t=(1:336)';
    u=input(1:336,1);
    assignin('base','t', t);
    assignin('base','u', u);

    windSpeed=timeseries(u,t);
    model = 'pe_asm_generator_2';
    load_system(model)
    simOut = sim(model);
    y=real_power(1:ceil(length(real_power)/336):length(real_power),1);
    
    % Real input
    u1 = input(:,1);
    u2 = input(:,2);
    input = iddata(y,[u1,u2],1);
    %% Running N4SID
    load('../../workspace/n4sid_eolica.mat');
%     n4sid_model = N4SID();
    
    %% Compare outputs
    
    [prediction,fitt,~]=compare(input,n4sid_eolica,24);
    
    
    
    plot(1:n, prediction.OutputData, 1:n, input.OutputData,'--k');
    title('N4SID vs Real');
    xlabel('Hours from start');
    ylabel('KW');
    
    error = prediction.OutputData - input.OutputData;
    figure;
    plot(1:n, error);
    title('N4SID error');
    xlabel('Hours from start');
    ylabel('KW');

end