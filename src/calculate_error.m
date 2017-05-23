
%% inputs: 
%   lookahead: 


%  outputs:
%   Root Mean Squared Error
%   Mean Absolute Error
%   Maximum

function [rmse, mae, maximum ] = calculate_error (lookahead, window, values, prediction) 
    error = prediction - values;
    rmse = zeros(length(values)-window+1,1);
    mae = zeros(length(values)-window+1,1);
    maximum = zeros(length(values)-window+1,1);
    
    for pos = 1:length(values)-window+1
        range = pos:pos+lookahead-1;
        maximum(pos) = max(abs( error(range) ));
        rmse(pos) = sqrt(sum(error(range).^2)/lookahead);
        mae(pos) = sum(abs( prediction(range) - values(range) ))/lookahead;
    end
end