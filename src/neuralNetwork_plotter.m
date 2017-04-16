function [] = neuralNetwork_plotter()
    Y = evalin('base', 'y');
    X = evalin('base', 'x');
    
    totalysize = size(Y,2)*size(Y{1},1);
    E_nn = zeros(size(Y,2), size(Y{1},1)); % 11 x 24
    for d = 1:size(Y,2)
        E_nn(d,:) = Y{d};
    end
    
    totalxsize = size(X,2)*size(X{1},1);
    E = zeros(size(X,2), size(X{1},1)); % 11 x 24
    for d = 1:size(X,2)
        E(d,:) = X{d};
    end
    disp(totalxsize-totalysize);
%     disp(totalxsize);
%     plot(1+4:totalxsize+4,E_nn(:), 1:totalysize,E(:));
    error = E_nn-E;
    plot(1+4:totalxsize+4,E_nn(:), 1:totalysize,E(:));

end