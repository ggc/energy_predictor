dats=importfile;
%comprobamos que la media de velocidades del viento es superior a 3m/s para asegurarnos que 'tiene sentido' nuestro conjunto de datos.
 mean (dats(:,1)) 
%tambien lo podemos ver graficamente
% plot (dats(:,1))
% title('velocidad  viento')
% refline(0,3)

t=(1:336)';
u=dats(1:336,1);
windSpeed=timeseries(u,t);

%simulamos
%pe_asm_generator_2

model = 'pe_asm_generator_2';
load_system(model)
sim(model)
simOut = sim(model);

%discretizamos real_power
%opcion a de discretizar
D=real_power(1:ceil(length(real_power)/336):length(real_power),1);
dataname=D(1:floor(0.75*length(D))); %cogemos 75%  datos para a etapa de training
datanameT=D(floor(0.75*length(D))+1:length(D)); % 25% para test

%forma 1 de ver  estacionariedad
plot(dataname)
refline(0,mean(dataname))%pinta linea con media de los datos
%¿Hay variabilidad nos datos?,¿Existe tendencia en la serie?

%forma 2 de ver  estacionariedad
%[transdat,lambda] = boxcox(D) %non ten todos os termos positivos, neste caso non podemos.
autocorr(dataname) %si la grafica no decrece rápido la serie es no estacionaria.
parcorr(dataname) 
%en caso que parezca estacionaria mirariamos parcorr para estimar p y q de la serie  y hacemos doarima con d=0.

Ddataname=diff(dataname);% diferenciamos la serie.
autocorr(Ddataname) %si la grafica no decrece rápido la serie es no estacionaria.
parcorr(Ddataname)
% supongamos que alcanzamos la serie estacionaria.
%de los gráficos anteriores estimamos entre que valores andan los parametros p e q del modelo ARIMA. 

train=dataname;
test=datanameT;
%colocamos los siguientes datos en el archivo doarima
d=1; % d=número de diferencias que han sido necesarias para tener la  serie estacionaria.
pvec=0:10; % deducimos del grafico de autocorrelaciones simples y parciales que estará entre estos valores.
qvec=0:10; % idem pvec
%buscamos p y q que crean el mejor modelo dentro de los margenes que
%habíamos estimado
[model, p,d, q] = doarima(train, pvec, qvec);
model

%visualizamos y comparamos el mejor modelo

% Training set prediction
%------------------------
predtrain = compare(train, model);

figure;
plot(train, 'color', 'b');
hold on; plot(predtrain, 'color', 'r');
legend('Training set', 'Prediction over training');
str=sprintf('Training set real measurements and prediction for ARMA(%d,%d) process', p, q);
title(str);

disp('Error over training set (deg x 10)');
%[trainrmse, mae, maximum ] = calculate_error (lookahead, window, train, predtrain) 


% facemos a parte de test co 25% dos datos restantes 
% Test set prediction
%------------------------
predtest = compare(test, model);

figure;
plot(test, 'color', 'b');
hold on; plot(predtest, 'color', 'r');
legend('Test set', 'Prediction over test');
str=sprintf('Test set for real measurements and prediction for ARMA(%d,%d) process', p, q);
title(str);

disp('Error over test set (deg x 10)');
%[testrmse, mae, maximum ] = calculate_error (lookahead, window, test, predtest)





