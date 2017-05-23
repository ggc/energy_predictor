function [ mbest, pbest, dbest, qbest ] = doarima (dataname, pvec, qvec)

% script to do an arima(p,d,q) analysis; you  must put the name of your datafile
% (for example suppose it is mydata.dat) in the statement dataname='mydata.dat'
%
% note there will be other scripts to remove polynomials
% or to do SARIMA

% Pr[type 1 error] for threshold line to test acf(AutoCorrelation Function) for N(0,1/sqrt(n)) 
ALPHA=.01; 

pvec=[0,1,2,3,4]; % orders of AR
%pvec=[4,5,6];
d=0; % number of differences
dvec=[0,1,2,3,4];
qvec=[0,1,2,3,4]; % orders of MA
%qvec=[2,3];
RESIDPLOTS=0; % > 0 to plot residual acfs
AIC=0; % > 0 to calculate AIC(Akiake Information Criterion) instead of FPE(Final Prediction Error)w

%dataname='data2(:,1)'; % assumed loaded WHAT FORMAT???
dataname = signal_builder_wind_v2;
dataname = dataname(:,1);
%descriptor='US Production'; % strings to be used for plotting
%xvalues='quarters';
%dindex=[1:120];	% select which of the input data to use
descriptor='WOBBLE';
dindex=[1:length(dataname)];


data=dataname;

for dd = 1:length(dvec)
    d = dvec(dd);
    ddata=data(dindex);  % difference it d times
    for j=1:dvec(dd)
       ddata=diff(ddata);
    end
    % ddata has been 1st differenced d times
    nd=length(ddata);

    %%%%%%%%%% now plot ddiff and acf
    figure;
    subplot(211);
    plot([1:nd],ddata,'-');
    title(['Result of ',int2str(d),' 1st differences of data: ',descriptor]);

    subplot(212); % now the acf
    rhod=xcov(ddata,'coeff'); % this returns the acf normalized by the variance
    % it is even, so ignore the negative lags and take only half of the positive ones
    rhod=rhod(nd:nd+floor(nd/2)); % floor needed in case nd/2 not integer
    nrho=length(rhod);
    stem(rhod,'.');	% a stem plot with dot marker
    hold on;
    plot(zeros(1,nrho));
    thr=norminv(1-ALPHA/2,0,1/sqrt(nd));
    plot([1:nrho],thr*ones(1,nrho),'--r',[1:nrho],-thr*ones(1,nrho),'--r');
    title(['autocorrelation, n=',int2str(nd),' alpha = ',num2str(ALPHA)]);

    % now estimate ARMA model; ARMAX is AX=BU + Ce so identify phi with A and theta with C
    np=length(pvec);
    nq=length(qvec);
    aicsave=-99*ones(np,nq);
    fpesave=-99*ones(np,nq);
    minaic=1e+6;
    minfpe=1e+6;
    for pp=1:np 
        p=pvec(pp);
        for qq=1:nq
            q=qvec(qq);
            if p+q ~=0
                orders=[p q];
                m=armax(ddata,orders);      % m is a structure with the model stuff in it
                resids=pe(m,ddata);         % pe returns the prediction errors
                nres=length(resids);
                rhores=xcov(resids,'coeff'); % this returns the acf normalized by the variance
                % it is even, so ignore the negative lags and take only half of the positive ones

                rhores=rhores(nres:nres+floor(nres/2)); % floor needed in case nd/2 not integer
                nrho=length(rhores);                    % now rhores(1) is zero lag
                % next compute the Ljung - Box statistic and P-values
                deltak=floor(nrho/10)+1;
                kvec=[p+q+1:deltak:p+q+1+4*deltak];
                for kk=1:5
                    Q=0;
                    for j=2:kvec(kk)+1
                        Q=Q+(rhores(j).^2)/(nd-j);
                    end
                    Q=nd*(nd-1)*Q;
                    ljpv(kk)=1-chi2cdf(Q,kvec(kk)-p-q);  % df=kvec(kk)-p-q
                end
                aicsave(pp,qq)=aic(m);
                fpesave(pp,qq)=fpe(m);
                if AIC
                    if aicsave(pp,qq) < minaic
                        minaic=aicsave(pp,qq); % save the min
                        pbest=p;
                        qbest=q;
                        dbest=d;
                        mbest=m;
                    end
                else
                    if fpesave(pp,qq) < minfpe
                        minfpe=fpesave(pp,qq); % save the min
                        pbest=p;
                        qbest=q;
                        dbest=d;         
                        mbest=m;
                    end
                end
                disp(sprintf('(p,d,q)=(%d,%d,%d) aic=%d  fpe=%d',p,d,q,aicsave(pp,qq),fpesave(pp,qq)));
                QQ=[kvec;ljpv];
                disp(sprintf('Ljung-Box P-values : '));
                disp(sprintf('  K=%d P-v=%6.3e \n',QQ(:)));

                if RESIDPLOTS
                %%%%%%%%%% resids and acf
                %figure;
                subplot(211);
                plot([1:nd],resids,'-');
                title(['Residuals from ARIMA(',sprintf('%d,%d,%d)',p,d,q),' for data: ',descriptor]);

                subplot(212); % now the acf

                stem(rhores,'.');	% a stem plot with dot marker
                hold on;
                plot(zeros(1,nrho));
                thr=norminv(1-ALPHA/2,0,1/sqrt(nres));
                plot([1:nrho],thr*ones(1,nrho),'--r',[1:nrho],-thr*ones(1,nrho),'--r');
                title(['autocorrelation of residuals, n=',int2str(nres),' alpha = ',num2str(ALPHA)]);
                end % RESIDPLOTS

            end
        end
    end
end


disp(['SUMMARY OF ARIMA MODELS FOR DATA : ',descriptor]);
disp(sprintf('AIC min at (p,d,q)=(%d,%d,%d) aic=%d',pbest,d,qbest,aic(mbest)));
[A,B,C,D,F]=polydata(mbest);
disp(['p coefficients : ',num2str(A)]);
disp(['q coefficients : ',num2str(C)]);

%%%%%%%%%%%%%%  plot |W(\lambda)|^2
NLAM=100;	% no. pts to plot in  [0,2\pi]
dlam=pi/NLAM;
lams=[0:dlam:pi-dlam];
clear i;
e=exp(-i*lams);

thetaspec=polyval(C,e);
phispec=polyval(A,e);
sigr=std(resids);

legend('periodogram','estimated model');




