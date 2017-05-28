function [ predtrain, predtest ] = arma_estimation(lookahead, train, test)

%Finding the best model
%------------------------
%pvec = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19];
%qvec = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19];
pvec = 0:5;
qvec = 0:5;
[model, p,d, q] = doarima(train, pvec, qvec);

disp('Calculating training and test, and associated errors... Please wait');

% Training set prediction
%------------------------
window=lookahead;
predtrain = compare(train, model, lookahead);

figure;
plot(train, 'color', 'b');
hold on; plot(predtrain, 'color', 'r');
legend('Training set', 'Prediction over training');
str=sprintf('Training set real measurements and prediction for ARMA(%d,%d) process', p, q);
title(str);

disp('Error over training set (deg x 10)');
[trainrmse, mae, maximum ] = calculate_error (lookahead, window, train, predtrain) 


% Test set prediction
%------------------------
predtest = compare(test, model, lookahead);

figure;
plot(test, 'color', 'b');
hold on; plot(predtest, 'color', 'r');
legend('Test set', 'Prediction over test');
str=sprintf('Test set for real measurements and prediction for ARMA(%d,%d) process', p, q);
title(str);

disp('Error over test set (deg x 10)');
[testrmse, mae, maximum ] = calculate_error (lookahead, window, test, predtest)

