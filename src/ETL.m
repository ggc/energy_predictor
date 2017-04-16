[E_pred, E_cur] = discretize_signals();
E_ewma = EWMA();
% E_ewma = Optima2D();
% E_ewma = ETHZ();
% E_ewma = WCMA();
% E_ewma = WCMA_PDR();
% E_ewma = EWMA();
E_cur_trans = E_cur';

n_values = size(E_cur,1)*size(E_cur,2);
plot(1:n_values, E_ewma(:), 1:n_values, E_cur_trans(:))