function [E_pred, E_cur] = discretize_signals() 
    load('../workspace/vars/Ppv_pred.mat');
    load('../workspace/vars/Ppv_cur.mat');
%     Ppv_pred = evalin('base', 'Ppv_pred');
%     Ppv_pred = importdata('../workspace/vars/Ppv_pred.m');
%     Ppv_cur = evalin('base', 'Ppv_cur');

    samples_per_day = 10000;
    D = 14;
    T = 24;

    E_pred = zeros(D, T);
    E_cur = zeros(D, T);

    for days = 1:D
        day_ini = days*samples_per_day;
        E_pred(days, :) = Ppv_pred.signals.values(day_ini:ceil(samples_per_day/T):day_ini+samples_per_day);
        E_cur(days, :) = Ppv_cur.signals.values(day_ini:ceil(samples_per_day/T):day_ini+samples_per_day);
    end
end