%% Irradiation
ir_file = importdata('../data_formatted/ir.txt');
ir_file = jsondecode(ir_file{1});

fields = fieldnames(ir_file);
m = zeros(numel(fields),24);

for i = 1:numel(fields)
    m(i,:) = struct2array(ir_file.(fields{i}));
    ir_file.(fields{i});
end

ir_file = (1-m)*1000;

T = size(ir_file,1);
D = size(ir_file,2);

ir_file(1:5,:) = 0;
ir_file(6,:) = ir_file(6,:)/2;
ir_file(21:T,:) = 0;
ir_file(22,:) = ir_file(22,:)/2;
Ir.signals.dimensions = 1;
Ir.signals.values = ir_file(:);
Ir.time = (1:D*T)' * (D+1)/(D*T);

%% Temperature

temp_file = importdata('../data_formatted/temp.txt');
temp_file = jsondecode(temp_file{1});

fields = fieldnames(temp_file);
m = zeros(numel(fields),24);

for i = 1:numel(fields)
    m(i,:) = struct2array(temp_file.(fields{i}));
    temp_file.(fields{i});
end


Temp.signals.dimensions = 1;
Temp.signals.values = m(:);
Temp.time = (1:D*T)' * (D+1)/(D*T);

