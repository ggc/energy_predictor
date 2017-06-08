function prediction = n4sid_prediction()
    
    %% Loading values
%     ir = importdata('../data_formatted/ir_2017-04-16.txt');
%     ir = jsondecode(ir{1});
% 
%     fields = fieldnames(ir);
% 
%     for i = 1:numel(fields)
%         u(:,i) = struct2array(ir.(fields{i}));
%         ir.(fields{i});
%     end
%     
%     u = (1-u)*1000;
    E_cur = discretize_signals();
%     Ir = evalin('base', 'Ir');
%     u = Ir.signals.values(:);
    u = E_cur;

    load('../workspace/vars/Ppv_cur_16-30.04.17_REAL.mat');
    n = 360;
    % Power output
    y = Ppv_cur.signals.values(1:ceil(length(Ppv_cur.signals.values)/n):length(Ppv_cur.signals.values));  
    % Real input
    u = u(:);
    input = iddata(y,u,1);
    %% Running N4SID
    load('../workspace/n4sid_solar.mat');
%     n4sid_solar = N4SID();
    
    %% Compare outputs
    
    [prediction,fitt,~]=compare(input,n4sid_solar,24);
    
    model_plotter(E_cur(:), prediction.OutputData)

end