function model_plotter(E_cur, E_pred)
    [D T] = size(E_cur);
    %% Plotting results
    E_pred_trans = E_pred';
    E_trans = E_cur';
    error = E_pred_trans - E_trans;
    
    figure('Position', [200,150,1024,768]);
    
    subplot(2,1,1);
    plot(1:T*D, E_pred_trans(:), 1:(D*T), E_trans(:));
    legend('Real', 'Predicted');
    title('Prediction vs Real');
    xlabel('T [hours]');
    ylabel('Power [kW]');
    axis([0 inf -10 100]);
    
    subplot(2,1,2);
    plot(1:D*T, error(:), '-+k');
    title('Error');
    xlabel('T [hours]');
    ylabel('%');
    axis([0 inf -100 100]);
end