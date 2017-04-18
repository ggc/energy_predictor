%% Irradiation
ir_file = importdata('../data_formatted/ir_16-30.03.txt');
ir_file = jsondecode(ir_file{1});

fields = fieldnames(ir_file);
D = numel(fields);
T = numel( fieldnames( ir_file.(fields{1}) ) );
m = zeros(24,numel(fields)); % Because we need cols-days, rows-hours!!!

for i = 1:numel(fields)
    m(:,i) = struct2array(ir_file.(fields{i}));
    ir_file.(fields{i});
end

ir_file = (1-m)*1000;

ir_file(1:5,:) = 0;
ir_file(6,:) = ir_file(6,:)/2;
ir_file(21:T,:) = 0;
ir_file(22,:) = ir_file(22,:)/2;
Ir.signals.dimensions = 1;
Ir.signals.values = ir_file(:);
Ir.time = 0:14/(D*T):D-1-14/(D*T);

%% Temperature

temp_file = importdata('../data_formatted/temp_16-30.03.txt');
temp_file = jsondecode(temp_file{1});

fields = fieldnames(temp_file);

for i = 1:numel(fields)
    m(:,i) = struct2array(temp_file.(fields{i}));
    temp_file.(fields{i});
end


Temp.signals.dimensions = 1;
Temp.signals.values = m(:);
Temp.time = Ir.time;
