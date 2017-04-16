% Radiations sample (From AEMET) [ºC]
Tamb = importdata('Tamb_matrix.txt', '\t', 1);
% for i = [4, 7]
%     disp(Tamb.textdata{i, 1})
%     disp(Tamb.data(i, :))
%     disp(' ')
% end

%% Constants
% Not used
% a = 1; % area 1m2
% pr = 0.75; %% default ratio
% solarradavg = 7.7/30/4 * 1000; % 3.1 feb (7.2)7.7(8.1) jul
% r = 0.05; %% adjust
Ppv_stc = 165; % Nominal PV power [W]
Gt = 1000; % Irradiation amount [W/m^2]
y = 0.00043; % Temperature coefficient [%/ºC]
NOCT = 45.5; % Nominal Operating Cell Temperature [ºC]
Npvp = 2; % Parallel cells
Npvs = 2; % Series cells

% Weghting constant
a = 0.15;

%% Algorithm ecuations
% Cell temperature [ºC]
Tj = @(Ta) Ta + (Gt/800) * NOCT - 20;

% #CHECK Photovoltaic power [W]
Ppv = @(Ta) (( Ppv_stc * (Gt/1000) * (1 - y*(Tj(Ta) - 25)) ) * Npvs * Npvp);

%% Processing values
% Initialize first predicted day with real values
Eewma = zeros(31,4);
for i = 1:4
        Eewma(1,i) = Ppv(Tamb.data(1,i));
        disp(Tamb.textdata(i, 1))
        disp(Eewma(1,i));
end

% Fill predicted values with Algorithm output
for d = 1:size(Tamb.data,1)
    for t = [1:4]
        Eewma(d+1,t) = a*Ppv(Tamb.data(d,t)) + (1-a)*Eewma(d,t);
    end
end

% fprintf('%s W per cell\n', num2str(Ppv(Tamb.data(1,4)),'%.2f'));



