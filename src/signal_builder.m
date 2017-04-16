% temp_file = importdata('../data_formatted/temperature_matrix.json')';
temp_file = importdata('../data_formatted/temperature_pred_matrix.json')';
Temp.signals.dimensions = 1;
Temp.signals. values = temp_file(:);
Temp.time = (1:336)' * 15/336;


% ir_file = (1-importdata('../data_formatted/irradiation_matrix.json')') * 1000;
ir_file = (1-importdata('../data_formatted/irradiation_pred_matrix.json')') * 1000;
ir_file(1:5,:) = 0;
ir_file(6,:) = ir_file(6,:)/2;
ir_file(21:24,:) = 0;
ir_file(22,:) = ir_file(22,:)/2;
Ir.signals.dimensions = 1;
Ir.signals.values = ir_file(:);
Ir.time = (1:336)' * 15/336;
