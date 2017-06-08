function nn_inputs_builder()
    E_cur = discretize_signals();
    [D, T] = size(E_cur);
    K = 4;
    %% Build inputs and targets
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

    assignin('base', 'inputs', inputs);
end