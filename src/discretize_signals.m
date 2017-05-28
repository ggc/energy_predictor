function E_cur = discretize_signals() 
    load('../workspace/vars/Ppv_cur_01-15.04.17.mat');
%     load('../workspace/vars/Ppv_cur_16-30.03.17.mat');

    samples_per_day = 10000;
    D = 15;
    T = 24;

    E_cur = zeros(D, T);

    for days = 1:D-1
        day_ini = (days-1)*samples_per_day;
        E_cur(days, :) = Ppv_cur.signals.values(day_ini+1:ceil(samples_per_day/T):day_ini+samples_per_day);
    end
    
    %   C=real_power(1:ceil(length(real_power)/336):length(real_power),1);
    %   It seems like this do the same.

    assignin('base','E_cur', E_cur);
end