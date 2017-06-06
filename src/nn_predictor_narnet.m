function [ E_nn ] = nn_predictor_narnet()
    %% Definitions
    E_cur = evalin('base','E_cur');
    net = evalin('base','net');
%     load('../workspace/vars/nn_2.4.narnet.mat');
    D = size(E_cur,1);
    T = size(E_cur,2);
    K = 4;

    %% Build inputs and targets
    inputs = cell(1,D*T);
    
    for d = 1:D
        for t = 1:T
            for k1 = 1:K
                inputs{1,(d-1)*T+t}(k1) = E_cur( max(1,d-k1),t );
            end

            for k2 = 1+K:2*K
                inputs{1,(d-1)*T+t}(k2) = E_cur( d,max(1,t-k2-K) );
            end

            for k3 = 1+2*K:3*K-1
                inputs{1,(d-1)*T+t}(k3) = E_cur(d,max(1,t-k3-2*K)) - E_cur(d,max(1,t-k3-2*K-1));
            end
            inputs{1,(d-1)*T+t}(k3+1) = E_cur(d,t);
        end
    end

    x = inputs;
    
    outputs = net(x);
    y = cell(1,length(outputs));
    
    for o = 1:length(outputs)
        y{1,o} = outputs{1,o}(1);
    end
    
    E_nn = E_cur';
    E_nn = E_nn(:);
    
    figure;
    plot(1:length(outputs),cell2mat(y),1:length(outputs),E_nn);
    
    error = cell2mat(y) - E_nn';
    figure;
    plot(error);
    
    ret;
end

