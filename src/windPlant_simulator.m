

dats=signal_builder_wind_v2;
t=(1:336)'; % 14 days with 24 hours
u=dats(1:336,1);
windSpeed=timeseries(u,t);

model = 'pe_asm_generator_2';
load_system(model);

output_power = sim(model);

