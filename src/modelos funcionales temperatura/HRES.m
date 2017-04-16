%% Constants
Ppv_stc = 165;
Gt = 1000; %% Irradiation amount
y = 0.043;
NOCT = 45.5;
Tj = @(Tamb) Tamb + (800/1000) * NOCT - 20;

Npvs = 2;
Npvp = 2;
Tamb = input('Enviroment temperature?');

Ppv = ( Ppv_stc * (Gt/1000) * (1 - y*(Tj(Tamb) - 25)) ) * Npvs * Npvp;