[X,T] = valve_dataset;
net = narxnet(1:2,1:2,10);
[Xs,Xi,Ai,Ts] = preparets(net,X,{},T);
net = train(net,Xs,Ts,Xi,Ai);
view(net);
Y = net(Xs,Xi,Ai);
plotresponse(Ts,Y);