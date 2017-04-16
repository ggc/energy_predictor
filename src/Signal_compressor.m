
Energy = evalin('base','Ppv_pred');
for days = 1:14
    day_ini = days*10000;
    TheRealpred(days, :) = Energy.signals.values(day_ini:417:day_ini+10000);
end