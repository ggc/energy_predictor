function [ E_nn ] = nn_predictor()

%     net     Network
%     P	     Network inputs
%     T	     Network targets (default = zeros)
%     Pi	     Initial input delay conditions (default = zeros)
%     Ai	     Initial layer delay conditions (default = zeros)
%     and returns the following after applying the adapt function net.adaptFcn with the adaption parameters net.adaptParam:
% 
%     net	     Updated network
%     Y	     Network outputs
%     E	     Network errors
%     Pf	     Final input delay conditions
%     Af	     Final layer delay conditions
%     tr	     Training record (epoch and perf)
    Es = evalin('base','E_cur');
    net = evalin('base','net');
    D = size(Es,1);
    T = size(Es,2);
    E_nn = zeros(T,D);
    error = zeros(T,D);

    % - Build prediction of a full day (d)
        E_nn(:,1) = net(Es(1,:)');

    % nn works with 24h horizon (fires at the end of the day)
    for d = 2:D
    % - Build prediction of a full day (d)
    % - Train past day (d) with current (d+1)
        disp(['Day ',num2str(d-1)]);
        for it = 1:100
            [net, E_nn(:,d-1), error(:,d-1), Pf, Af, tr] = adapt(net,Es(d-1,:)',Es(d,:)');
        end
    end

    Es_t = Es';
    plot(1+T:(D*T)+T, E_nn(:), 1:D*T, Es_t(:));
    figure;
    plot(1:D*T, error(:));
end

