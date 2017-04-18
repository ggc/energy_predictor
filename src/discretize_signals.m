function E_cur = discretize_signals() 
    load('../workspace/vars/Ppv_cur_01-15.04.17.mat');
%     Ppv_cur = evalin('base', 'Ppv_cur');

    samples_per_day = 10000;
    D = 15;
    T = 24;

%     E_pred = zeros(D, T);
    E_cur = zeros(D, T);

    for days = 1:D-1
        day_ini = (days-1)*samples_per_day;
%         E_pred(days, :) = Ppv_pred.signals.values(day_ini:ceil(samples_per_day/T):day_ini+samples_per_day);
        E_cur(days, :) = Ppv_cur.signals.values(day_ini+1:ceil(samples_per_day/T):day_ini+samples_per_day);
    end
    assignin('base','E_cur', E_cur);
end