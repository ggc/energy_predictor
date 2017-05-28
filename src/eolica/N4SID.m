dats=importfile; % dats contains wind real values
t=(1:336)';
u=dats(1:336,1);
windSpeed=timeseries(u,t);

%simulamos
%pe_asm_generator_2

model = 'pe_asm_generator_2';
load_system(model)
sim(model)
simOut = sim(model);
%discretizamos real_power

%%%%%discretize_signals;
%opcion a de discretizar
% C contains output power of wind values
C=real_power(1:ceil(length(real_power)/336):length(real_power),1);



%opcion b de discretizar
% %function [E_pred] = discretize_signals() 
%  Ppv_pred = evalin('base', 'real_power');
% 
%     samples_per_day = 1000;
%     D = 15;
%     T = 24;
% 
%     E_pred = zeros(D-1, T);
% 
%     for days = 1:D-1
%         day_ini = (days-1)*samples_per_day;
%         E_pred(days, :) = real_power(day_ini+1:ceil(samples_per_day/T):day_ini+samples_per_day);
%        
%     end
%    %end 
%     
%     %convertimos matriz en vector
% B=E_pred';
% C=[B(:)];

%%%%data=[dats(1:336,1),dats(1:336,2),C];%%%%%%%%
%%%%%%%n4sid
M=zeros(1,150-10);
M1=zeros(1,150-10);
%for i=1:24;
    for j=10:150;
        future = 24;
        past= j;
        %etapa entrenamiento
        dt=round(0.75*length(C));
        yrT=C(1:dt,1);
        uT1=dats(1:dt,1);
        uT2=dats(1:dt,2);
        yrT=iddata(yrT,[uT1,uT2],1);
        [modelT,x0]=n4sid(yrT, 'best','N4Horizon',[future past past]);
        [ypT,fit,~]=compare(yrT,modelT,future);
        fprintf(sprintf('FIT Training: %d\n', fit));
            %etapa validaci�n
        yrV=C(dt+1:length(C),1);
        uV1=dats(dt+1:length(C),1);
        uV2=dats(dt+1:length(C),2);
        yrV=iddata(yrV,[uV1,uV2],1);
         [ypV,fit1,~]=compare(yrV,modelT,future);         
        fprintf(sprintf('FIT Validatoin: %d\n', fit1));
 
      %guardamos datos de ajuste
        M(1,j-9) = fit;
        M1(1,j-9) = fit1;  
    end
%end


%m=max(M(24,:))
 m=max(max(M))
%m1=max(M1(24,:))
m1=max(max(M1))
% encontrar posicion  maximo fit1
[r s]=find(M1==max(max((M1))))
%[i j]=find(M==max(max((M))))

% mejor modelo:
%[model,x0]=n4sid(yrT, 'best','N4Horizon',[24 s+9 s+9])
 future = 24;
        past= s+9;
      
        dt=round(0.75*length(C));
        yrT=C(1:dt,1);
        uT1=dats(1:dt,1);
        uT2=dats(1:dt,2);
        yrT=iddata(yrT,[uT1,uT2],1);
        [model,x0]=n4sid(yrT, 'best','N4Horizon',[future past past]);
%         [ypT,fitt,~]=compare(yrT,model,future);
        model




%save('workspac.mat')
%%%%%%%%%%%%%ata aquiii%%%%%%%%%%%%%%%%


% yrT=yrT.OutputData;
% ypT=ypT.OutputData;
