function model = N4SID() 
%     ir = importdata('../data_formatted/ir_2017-04-01.txt');
%     ir = jsondecode(ir{1});
% 
%     fields = fieldnames(ir);
% 
%     D = numel(fields);
%     T = numel( fieldnames( ir.(fields{1}) ) );
%     dats = zeros(24,numel(fields)); % Because we need cols-days, rows-hours!!!
%     x = 0:23;
%     y = gaussmf(x,[2.5 15]);
%     
%     for i = 1:numel(fields)
%         dats(:,i) = (1-struct2array(ir.(fields{i}))) * 900;
%         for j = 1:24
%             dats(j,i) = dats(j,i) * y(j);
%         end
%     end
%       
    E = discretize_signals();

    
    
    dats = E(:);
    
    C = discretize_signals; C = C';
    C = C(:);
    %% Find the best fit
    M=zeros(1,150-10);
    M1=zeros(1,150-10);
    for j=10:150
        
        future = 24;
        past= j;
        
        %% Trainning
        
        dt=round(0.75*length(C));
        yrT=C(1:dt,1);
        uT1=dats(1:dt,1);
        yrT=iddata(yrT,uT1,1);
        [modelT,x0]=n4sid(yrT, 'best','N4Horizon',[future past past]);
        [ypT,fit,~]=compare(yrT,modelT,future);
        fprintf(sprintf('FIT Training: %d\n', fit));

        %% Validation
        
        yrV=C(dt+1:length(C),1);
        uV1=dats(dt+1:length(C),1);
        yrV=iddata(yrV,uV1,1);
        [ypV,fit1,~]=compare(yrV,modelT,future);         
        fprintf(sprintf('FIT Validatoin: %d\n', fit1));
        %% Save fit

        M(1,j-9) = fit;
        M1(1,j-9) = fit1;  
    end
    
    m=max(max(M)) % Trainning fit
    m1=max(max(M1)) % Validation fit
    
    % encontrar posicion  maximo fit1
    [r s]=find(M1==max(max((M1))),1)
    %[i j]=find(M==max(max((M))))

    % mejor modelo:
    %[model,x0]=n4sid(yrT, 'best','N4Horizon',[24 s+9 s+9])
    future = 24;
    past= s+9;

    dt=round(0.75*length(C));
    yrT=C(1:dt,1);
    uT1=dats(1:dt,1);
    yrT=iddata(yrT,uT1,1);
    [model,x0] = n4sid(yrT, 'best','N4Horizon',[future past past]);
    [ypT,fitt,~]=compare(yrT,model,future);


    
    % yrT=yrT.OutputData;
    % ypT=ypT.OutputData;
end
