
D = size(E_cur,1);
T = size(E_cur,2);
K = 4;
data = tonndata(E_cur,true,false);

trainFcn = 'trainbr';  % Bayesian Regularization backpropagation.

% Create a Nonlinear Autoregressive Network
feedbackDelays = 1:4;
hiddenLayerSize = [4,4];
net = narnet(feedbackDelays,hiddenLayerSize,'open',trainFcn);

% Choose Feedback Pre/Post-Processing Functions
% Settings for feedback input are automatically applied to feedback output
% For a list of all processing functions type: help nnprocess
% net.input.processFcns = {'removeconstantrows','mapminmax'};

% Prepare the Data for Training and Simulation
% The function PREPARETS prepares timeseries data for a particular network,
% shifting time by the minimum amount to fill input states and layer
% states. Using PREPARETS allows you to keep your original time series data
% unchanged, while easily customizing it for networks with differing
% numbers of delays, with open loop or closed loop feedback modes.
% [x,xi,ai,t] = preparets(net,{},{},data);

% Setup Division of Data for Training, Validation, Testing
% For a list of all data division functions type: help nndivide
net.divideFcn = 'divideblock';  % Divide data randomly
net.divideMode = 'time';  % Divide up every sample
net.divideParam.trainRatio = 80/100;
net.divideParam.valRatio = 10/100;
net.divideParam.testRatio = 10/100;

% Choose a Performance Function
% For a list of all performance functions type: help nnperformance
net.performFcn = 'mse';  % Mean Squared Error

% Choose Plot Functions
% For a list of all plot functions type: help nnplot
net.plotFcns = {'plotperform','plottrainstate', 'ploterrhist', ...
    'plotregression', 'plotresponse', 'ploterrcorr', 'plotinerrcorr'};

% Prepare inputs/targets: Inputs
for d = 1:D
    for t = 1:T
        for k1 = 1:K
            inputs{1,(d-1)*T+t}(k1) = E_cur( max(1,d-k1),t );
            y{1,(d-1)*T+t}(k1) = E_cur(d,t);
        end
        
        for k2 = 1+K:2*K
            inputs{1,(d-1)*T+t}(k2) = E_cur( d,max(1,t-k2-K) );
            y{1,(d-1)*T+t}(k2) = E_cur(d,t);
        end
        
        for k3 = 1+2*K:3*K-1
            inputs{1,(d-1)*T+t}(k3) = E_cur(d,max(1,t-k3-2*K)) - E_cur(d,max(1,t-k3-2*K-1));
            y{1,(d-1)*T+t}(k3) = E_cur(d,t);
        end
        inputs{1,(d-1)*T+t}(k3+1) = E_cur(d,t);
        y{1,(d-1)*T+t}(k3+1) = E_cur(d,t);
    end
end

x = inputs(1:(D-4)*T);
y = y(T+1:(D-3)*T);
% aux = E_cur(2:D-3,:);
% aux = aux';
% for sample = 1:(D-4) * T
%     y{1,sample} = aux(sample);
% end


% net = configure(net, x, y);

% Train the Network
[net,tr] = train(net,x,y);

% Test the Network
outputs = net(x);
e = gsubtract(y,outputs);
performance = perform(net,y,outputs)

% Recalculate Training, Validation and Test Performance
trainTargets = gmultiply(y,tr.trainMask);
valTargets = gmultiply(y,tr.valMask);
testTargets = gmultiply(y,tr.testMask);
trainPerformance = perform(net,trainTargets,outputs)
valPerformance = perform(net,valTargets,outputs)
testPerformance = perform(net,testTargets,outputs)

% View the Network
% view(net)

% Plots
% Uncomment these lines to enable plots.
figure, plotperform(tr)
%figure, plottrainstate(tr)
figure, ploterrhist(e)
figure, plotregression(outputs,x)
%figure, plotresponse(t,y)
figure, ploterrcorr(e)
%figure, plotinerrcorr(x,e)

% Closed Loop Network
% Use this network to do multi-step prediction.
% The function CLOSELOOP replaces the feedback input with a direct
% connection from the outout layer.
% netc = closeloop(net);
% netc.name = [net.name ' - Closed Loop'];
% view(netc)
% % [xc,xic,aic,tc] = preparets(netc,{},{},data);
% xc = x;
% yc = netc(xc);
% closedLoopPerformance = perform(net,y,yc);
