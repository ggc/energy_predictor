function [Y,Xf,Af] = neural_network(X,Xi,~)
%MYNEURALNETWORKFUNCTION neural network simulation function.
%
% Generated by Neural Network Toolbox function genFunction, 03-Apr-2017 07:58:29.
%
% [Y,Xf,Af] = myNeuralNetworkFunction(X,Xi,~) takes these arguments:
%
%   X = 2xTS cell, 2 inputs over TS timesteps
%   Each X{1,ts} = 24xQ matrix, input #1 at timestep ts.
%   Each X{2,ts} = 24xQ matrix, input #2 at timestep ts.
%
%   Xi = 2x2 cell 2, initial 2 input delay states.
%   Each Xi{1,ts} = 24xQ matrix, initial states for input #1.
%   Each Xi{2,ts} = 24xQ matrix, initial states for input #2.
%
%   Ai = 2x0 cell 2, initial 2 layer delay states.
%   Each Ai{1,ts} = 10xQ matrix, initial states for layer #1.
%   Each Ai{2,ts} = 24xQ matrix, initial states for layer #2.
%
% and returns:
%   Y = 1xTS cell of 2 outputs over TS timesteps.
%   Each Y{1,ts} = 24xQ matrix, output #1 at timestep ts.
%
%   Xf = 2x2 cell 2, final 2 input delay states.
%   Each Xf{1,ts} = 24xQ matrix, final states for input #1.
%   Each Xf{2,ts} = 24xQ matrix, final states for input #2.
%
%   Af = 2x0 cell 2, final 0 layer delay states.
%   Each Af{1ts} = 10xQ matrix, final states for layer #1.
%   Each Af{2ts} = 24xQ matrix, final states for layer #2.
%
% where Q is number of samples (or series) and TS is the number of timesteps.

%#ok<*RPMT0>

% ===== NEURAL NETWORK CONSTANTS =====

% Input 1
x1_step1.xoffset = [-0.367165586294668;-0.886403060673294;-0.29492225896785;-0.511943291576755;-2.13976438871676;-0.354898179702091;-0.761420838878839;-0.399769765565549;-0.615141590767763;-0.316909240159775;-0.503385168900455;-0.638484348111235;-0.30050717833245;-0.927375346690388;-0.311916908819729;-0.298941984837713;-2.28370794407463;-0.338529685023393;-1.26756692396989;-0.443793458681511;-0.621445526315343;-0.305348897860732;-0.426962902914327;-0.30501777983284];
x1_step1.gain = [0.0199014392870252;0.0198662061271286;0.0200082629841364;0.0198016716917823;0.0193427661623548;0.0190755949118872;0.0191739880200963;0.0194019111839812;0.0194243551947717;0.0195767469870269;0.0196521199578535;0.0196309902181026;0.0197479028104767;0.0195686209702649;0.0196709499677089;0.0196296898547056;0.0191712111232748;0.0195415786776507;0.0192973892797863;0.0191964970250615;0.0193712857573064;0.0195892240115098;0.0196934964083306;0.0198317127026986];
x1_step1.ymin = -1;

% Input 2
x2_step1.xoffset = [-0.367165586294668;-0.886403060673294;-0.29492225896785;-0.511943291576755;-2.13976438871676;-0.354898179702091;-0.761420838878839;-0.393932274202565;-0.615141590767763;-0.316909240159775;-0.503385168900455;-0.638484348111235;-0.30050717833245;-0.927375346690388;-0.311916908819729;-0.298941984837713;-2.28370794407463;-0.338529685023393;-1.26756692396989;-0.443793458681511;-0.621445526315343;-0.305348897860732;-0.507591079856937;-0.30501777983284];
x2_step1.gain = [0.0199014392870252;0.0198662061271286;0.0200082629841364;0.0198016716917823;0.0193427661623548;0.0190755949118872;0.0191739880200963;0.019403009961776;0.0194243551947717;0.0195767469870269;0.0196521199578535;0.0196309902181026;0.0197479028104767;0.0195686209702649;0.0196709499677089;0.0196296898547056;0.0191712111232748;0.0195415786776507;0.0192973892797863;0.0191964970250615;0.0193712857573064;0.0195892240115098;0.0196778736454812;0.0198317127026986];
x2_step1.ymin = -1;

% Layer 1
b1 = [0.039045317846843668;-0.062322889172339892;0.048793032462546189;-0.11013128778014419;-0.017807815240048878;0.039557512498001997;0.0015968032892353138;-0.030988484377886698;-0.0035578459218653345;0.045995200610154219];
IW1_1 = [-0.067335253841899478 -0.082445355823958552 -0.035607181683137507 -0.011297920948061679 -0.056357728325440844 -0.051522281325985061 -0.047377444166319685 -0.029942867325078053 -0.023013169148923748 -0.0036093864664977207 0.0030191565503991558 -0.0086930520127738373 0.0093591342132394693 0.045442957628397451 0.057678707771393299 0.088304855490701883 0.17002093999897416 0.090877739720888945 -0.0094969325768749693 -0.009291062465497971 -0.016378318125666164 -0.028727310601280049 -0.028632500159287196 -0.011675135914474112 -0.077403103990426755 -0.0046017909940133661 -0.042688865802878388 -0.047625520588891919 -0.044997901748422872 -0.040084249552121184 -0.033518166446223054 -0.02978616934592784 -0.027843060516027439 -0.041703693571598609 -0.034928550900857946 -0.0019653947162351212 0.026368779383201132 0.11077858090406811 0.15192980567286818 0.13576590875730329 0.02437197364262603 0.021048686677130155 -0.010278934168506145 0.0015913769364561175 -0.013104224172325858 -0.027962464774181208 -0.021780905417961537 0.0044818949157325707;0.037716587438733004 0.060025655352718449 0.067674896426337186 0.02717915508224384 -0.059762622374003004 -0.064764515514404083 -0.058537076900106198 0.014083738775718786 0.034871657830064726 -0.072665203818656807 -0.11285495545336062 -0.1199457873139841 -0.10862414446913829 0.015689792291078902 0.11607463882903071 0.1159117986658757 -0.086244898289902047 -0.12203827336493898 -0.076133313672723663 -0.074071492835252439 -0.014075329954324667 0.041957990471636702 0.042937899154634952 -0.067283262800160434 0.0683956909743514 0.10370034571457822 0.038238768379121629 0.036279533025718944 0.048084443207756462 0.090664562333942531 0.15570734400257935 0.12392116109643242 0.11298641782813028 0.0098917720572507389 0.0012703534102486513 -0.013698411612358696 0.096325862819293673 0.049575877036688525 -0.018749573880702048 -0.045214041904330309 0.0256229513138743 0.032853746190961299 0.040005239949384597 0.073327575926971394 0.03789148764808245 -0.030504435257090148 -0.044040380023770989 -0.096179942717287373;-0.0074619871047229272 -0.071773933965697895 0.087571875444059283 0.1358252745337766 0.049735268440920764 0.048527983321807848 0.041999895389918128 0.010621839701893182 -0.007967089339589872 0.024879339865686002 0.0059237952713617264 -0.047679028314208734 -0.1169128940608648 -0.077462565080058901 -0.03547713278702487 0.0142038099610958 0.13221881741697988 0.043399578090200806 -0.033127613127489929 -0.04962058664431785 -0.017889143308405929 0.017928067571461828 0.065513988043762392 0.032894805038540025 -0.055974925907730691 0.1153752504917594 0.051595137357996458 0.034707926196361712 0.025879595912645215 0.012252333988315474 0.010066521178950414 0.0052044026073556366 -0.0069864427515676916 -0.090638272142206405 -0.13919967407777872 -0.15009204610291774 -0.071238824001267312 0.092170361479582782 0.1479920587558346 0.13030820023008127 -0.012214878671765522 -0.013082985525614764 -0.03662176890686325 -0.0069493755703877117 0.007027414312479309 0.012161493655384567 0.072486133766747382 0.0010233461646489321;0.14591928097360352 0.10491949490941169 0.098140557479511226 0.044670988365196847 -0.057487896814840678 -0.037475847131777214 -0.055080829343386262 0.026226047760668343 0.079750978901057451 0.068851865934722659 0.061510204751804673 0.094920777786518223 -0.014285923539718907 -0.092138977366952785 -0.014486009095387171 0.012446471045744471 -0.11918019151068657 -0.12357344844357965 -0.0084329236287110226 -0.026468543671832885 -0.074499531310216985 -0.15021163714202901 -0.10637649989926568 -0.12705308370740315 0.00041009871687555871 0.049860201624129311 -0.046519160088487506 -0.076023983237292078 -0.094371661938383228 -0.089048492130385057 -0.071802048225683798 -0.095140190936088678 -0.10969403802209002 0.12737774099765981 0.09344138120671161 0.015305087273327423 0.074160071112603185 0.047777536504047917 -0.014335058131595231 -0.027716283761386212 0.13133605415590749 0.1090461680020902 0.053333689761243537 -0.012126730810389048 -0.078760253047714807 -0.092887940693033605 0.021404043051205919 0.025660485176473676;0.058821437174079574 -0.045462570280110942 0.02814534788449775 0.040763924767903165 0.0096755857649629042 0.025824079624281824 0.034330848063676374 0.026382270033020537 0.027882261512904318 -0.064088294645315583 -0.029530602175607684 0.0065300569369590366 -0.023355950089308988 -0.029721764309231295 -0.0044197507640628911 0.011851416277784606 0.010941459362114044 0.013555760516816841 0.075941048759912796 0.085579623582365108 0.10232200145624037 0.078940981737377514 -0.024977458887567194 -0.026075204638765885 -0.07754971857384664 0.0043337041252001175 -0.028593713541501153 -0.033117055085166838 -0.02822200447364458 -0.02854516040137383 -0.035469716129494171 -0.10007961950075764 -0.12029018719777838 -0.014359504352190628 -0.049817965971331445 -0.08038409528806667 -0.060604223507429313 -0.034643194737972477 -0.03200181121273972 -0.012096168686506649 -0.0055544613428532025 0.058046497987832534 0.058134562164528114 0.055616441098636199 0.0059609659285841492 0.00056910192955674063 0.087370333120373025 0.02995853431260866;-0.037674112867231047 0.08115699907655928 0.095866771525222452 0.093931715949753081 0.027302239221781949 0.035464964047841566 0.04271075475782958 -0.047853806887988078 -0.081470102470966782 -0.015030131734232772 -0.054435735046704244 -0.06429013821174713 -0.046378038071257406 0.035904691050839641 0.10627338328633261 0.11769109028755619 -0.0019792114045620625 0.030502687826183403 0.048582886129911775 0.032236487420565417 -0.014215021098208188 -0.041144855862672428 0.024542579579858396 -0.061398330954469074 -0.021233041470206711 0.02600389736447288 -0.035883975890780496 -0.048091836245383664 -0.043663737505631614 -0.065794402051850859 -0.094325035323540612 -0.026642439846635901 0.0029393221313173128 0.025889198415199488 0.047575559415290264 0.076020937047433457 0.15373297450132101 0.12805660556321297 0.096810732136532573 0.10096012259066786 0.13332465970735957 0.086469561525722285 0.045608095086435992 0.027797118847825639 -0.0086326554025116815 -0.085158511197606812 -0.1641159729694919 -0.11981051394799011;0.11826065395025469 0.0021073097119407736 0.074081342931781466 0.039777094573947076 -0.076884653657052063 -0.086382003450965292 -0.096192446475462767 -0.093971971126347406 -0.091467056680301639 0.012665498612117888 0.029683879234212163 0.044591386135254263 -0.023811579011429745 -0.078851383707210426 -0.01956746146625564 0.0068180811864734922 -0.071678905052023581 -0.073340306496009894 0.023691594734425159 -0.044152415510653367 -0.030795748297937166 0.00029672574684567354 -0.0628773256384242 -0.061090818329227942 -0.027161127780684875 0.057809604877916837 -0.031847091766888297 -0.053155938011590652 -0.056465421668470024 -0.05830397735236504 -0.058044242157857778 0.0229318427250766 0.056809699008074935 0.022716697259494528 -0.030254491893568741 -0.089523319775981741 -0.054832963984507023 -0.067273968567740733 -0.096435626154528664 -0.076460970719730292 -0.00026461004281836352 -0.054121078728828924 -0.16441550325900778 -0.1150083174553031 -0.12410826720274867 -0.11686287241333579 0.052106082076550354 0.036860168513242968;-0.087974429377131902 -0.070666007655297874 -0.061709389597555508 -0.040264362641450786 0.036512853258484836 0.039515226477127255 0.0013443037320211878 0.019095935068749612 0.033334691054429655 0.056465486401531026 0.089127725384819612 0.15490388848706019 0.017046258369860689 0.084989498230671479 0.14547524919248619 0.10989622110638832 -0.0086029096797570533 0.0060310737309910243 0.010591114168953471 0.0049825967360819104 -0.012567680675366276 -0.038908139668237925 -0.0014573104165272273 0.10683996974550798 -0.012428930036431274 -0.041051588595959219 0.0042337697567294309 -0.0038737232929799393 -0.04282967549397361 -0.058030956801683943 -0.014700804544554628 -0.037708387648531093 -0.065341347314745515 -0.031707537712384548 -0.077715410204841642 -0.15348162951010952 -0.036476351197355747 -0.03056047673649314 -0.060763377153540861 -0.055967873853606437 -0.072439329132179098 -0.063976935703633678 -0.05722566427486768 -0.08555959154651073 -0.0084395096260163303 0.14013013440150671 0.072849402931014148 -0.102608665567559;-0.009877853975772179 -0.01081303550869145 -0.016196334803977686 -0.023931008466587717 -0.045337540212168667 -0.042158087738909916 -0.042890935090100168 -0.093660364891351836 -0.1109423539916443 -0.03204969197520955 -0.024372050131134592 -0.018251024061387053 -0.0122307769388833 0.0037700827852668655 0.017096009321560246 0.02714313865129667 0.031657653624371361 0.066973939096750187 0.095710343107450635 0.075522408077217842 0.043794007555834825 0.024431958451541867 0.016231266746851322 0.023908621246234742 -0.063606246562035479 -0.060443447103392459 -0.083775748988400817 -0.089581986712620174 -0.088167586292386066 -0.10153126936874217 -0.12402052007395027 -0.067421796566129594 -0.042402174476972809 -0.022001303901421229 -0.015884040162500373 -0.011712219609400602 0.0074430303897084615 0.028810213891938188 0.029411399751614567 0.049795660385856873 0.080620213749467137 0.051565389981562251 0.0049997650157020384 0.0071300900505735553 -9.9600577504634278e-06 -0.008248790747074344 -0.01758779423732975 0.005130099200861148;0.0038656901177293855 0.044061011395356883 0.011115332878302476 -0.0026334565444746032 -0.014130343166411458 -0.023883170659822574 -0.051252052818961044 -0.055938774853165625 -0.0579026533079737 -0.025550437477891777 -0.036403803090632361 -0.04377263172299934 -0.10111083932721562 -0.053400333652012341 -0.018891646271493173 -0.010639050916865697 0.00089865987067012628 -0.0024979450244996724 -0.024668061277119065 -0.014761464476214927 -0.025943991820709722 -0.034406195479067675 0.081854997575747296 0.14986666035059931 0.012938135026846907 -0.0029722466121023259 -0.011614417235942887 -0.026349967630356633 -0.049814566471214773 -0.067293881976973557 -0.053696784373372844 -0.066392733835343595 -0.087818264842525834 -0.12499245864028032 -0.12432156577768629 -0.14033154256027025 -0.05932956455538025 0.017507651999356375 0.018477849715494921 0.014813125420508583 0.022797594858271715 0.015009130315711562 0.012826829936390954 0.014517631979281815 0.071966589043256604 0.13308549747968398 0.069918063314995255 0.057762825564240387];
IW1_2 = [-0.019558432049632788 -0.039260202024367225 -0.084000682429321558 -0.069834001226774564 -0.03170562924359549 -0.023640993488002963 -0.046139946813186415 -0.047840042303869845 -0.046286641122144145 -0.026706298307369817 -0.025591819577597725 -0.023953613292958267 -0.020561219656083349 -0.010927527116834465 -0.001659470022633744 0.019620497154797772 0.037336379953512286 0.083888779743973088 0.14904180350134111 0.056190535936203656 0.012893502404635705 0.0036913522154954932 -0.0018549770926874671 0.0059488920714217148 -0.06733525384195109 -0.082445355823992705 -0.035607181683117085 -0.011297920948048048 -0.056357728325418625 -0.051522281325964134 -0.047377444166315154 -0.0299467742952352 -0.023013169148909805 -0.0036093864665056458 0.0030191565503820007 -0.0086930520127756639 0.0093591342132377017 0.045442957628395161 0.057678707771402569 0.088304855490706449 0.17002093999899881 0.090877739720898063 -0.0094969325768732432 -0.0092910624654675839 -0.016378318125675556 -0.028727310601258427 -0.028578811648085903 -0.011675135914469533;-0.10428348311400344 -0.13049211091127574 -0.014416320508712947 0.010435432021485343 0.00077619197179011601 -0.039658816942409164 -0.077518795113607306 -0.082101639502832974 -0.087412739970665149 0.058914177025475981 0.056400955611226544 0.015065462708621221 -0.042938634997183395 -0.025943327489411434 -0.04792373981946766 -0.023626174401457818 0.13317634643161483 0.068775420951136187 -0.059410739117846806 -0.010919580339660112 0.027494062549803359 0.064389969345608616 0.086486453085857118 0.092539998177233351 0.037716587438389536 0.060025655352552075 0.067674896426346026 0.027179155082229439 -0.059762622374633124 -0.064764515514636745 -0.058537076900186218 0.014088065870865696 0.034871657830127786 -0.07266520381876837 -0.11285495545317971 -0.11994578731409818 -0.10862414446920338 0.015689792290983589 0.11607463882906487 0.11591179866583649 -0.086244898289958016 -0.12203827336500926 -0.076133313672597527 -0.074071492835275796 -0.014075329954311421 0.041957990471646223 0.042854396240762503 -0.067283262800224952;0.034428728184115416 -0.039729484366045315 -0.096286680141128608 -0.052091708824467967 0.099375515676246071 0.10380226956717428 0.060749262501316952 0.059990092563270057 0.060289252281231706 0.036649318221145255 0.037266600302495803 0.020939757236041464 -0.019768591981225506 -0.11800339813737969 -0.18316341593719862 -0.172503599737208 -0.054641893175131788 0.044654015545696979 0.17007429556921971 0.041276699455843169 0.0092888696731404756 0.025184894615836267 0.022888329539161596 0.042680287378551215 -0.0074619871047806319 -0.071773933965687278 0.087571875444055855 0.13582527453367915 0.049735268440886944 0.04852798332189677 0.04199989538979839 0.010619677973887473 -0.0079670893395245752 0.02487933986561594 0.0059237952713097931 -0.047679028314357483 -0.11691289406094002 -0.077462565080078677 -0.035477132786985867 0.014203809961142441 0.13221881741702948 0.043399578090142346 -0.033127613127514471 -0.049620586644209118 -0.017889143308479741 0.017928067571511924 0.065500723384620541 0.032894805038611995;-0.03671165716028596 -0.032391811376126935 0.056725637033778226 0.028954051160640475 -0.011244926003916977 -0.067819173541363131 -0.079967423842432508 -0.076351421772260453 -0.075422060523672715 -0.018942467022438358 -0.017373446917619353 -0.023711004950492696 0.0406436523016886 -0.0013908080125722491 -0.054907658925014653 -0.044604890645345369 -0.017958944534483792 -0.030833048514510353 -0.081200072769380627 0.043657611147838046 0.11166602563338689 0.13548005284631912 -0.0015107891172159722 -0.10353111504562745 0.14591928097362167 0.10491949490941387 0.098140557479418411 0.044670988365286213 -0.05748789681449485 -0.037475847131788385 -0.055080829343359193 0.026233770010651452 0.079750978901133918 0.068851865934782777 0.061510204751660802 0.094920777786460714 -0.014285923539737551 -0.092138977366965358 -0.014486009095312441 0.012446471045726933 -0.1191801915106747 -0.12357344844358004 -0.0084329236286661089 -0.026468543671882009 -0.074499531310068659 -0.15021163714191535 -0.10637947855569374 -0.12705308370734161;-0.055367988830351413 -0.0041393842696898489 -0.069544582211329337 -0.076926657475531846 -0.0068211463877871463 -0.026960189615578264 -0.032535656726649043 -0.039858190329822317 -0.052004023677965881 -0.094321983850931504 -0.10753322406056513 -0.126017644729642 -0.046777200460836645 0.01581268530378668 -0.024677171772049963 -0.039764989737458081 -0.0050197663781546328 0.036058834207545687 0.02697241784967053 0.061946970867004326 0.090695074213571009 0.12354091467407326 0.11068224581771023 0.085352523581251796 0.058821437174213356 -0.045462570280133618 0.028145347884400776 0.040763924767720297 0.0096755857651327146 0.025824079624367651 0.034330848063746783 0.026384772626033226 0.027882261512921506 -0.064088294645362046 -0.029530602175675279 0.006530056936885493 -0.02335595008926963 -0.02972176430923984 -0.0044197507641402 0.011851416277767719 0.010941459362166018 0.013555760516777853 0.075941048759914476 0.085579623582391795 0.10232200145622314 0.078940981737314883 -0.024971771241152529 -0.026075204638781491;-0.027366193414952632 -0.10117290935970268 0.029250926441732984 0.092649870093624548 0.089002394744570085 0.092964454020020459 0.079970539375878072 0.094062556416384294 0.10061419446164035 -0.021072617220013939 -0.011822563402918014 -0.012513105000242813 -0.041488479938340699 -0.028024602847855115 -0.015510610623792696 0.02522589920069275 0.1061121394284233 0.053073543718370766 0.024220281331733904 0.031862832703889891 0.063506601890996703 0.057553266563567095 -0.013364944361224792 -0.056426748267879891 -0.037674112867130662 0.081156999076621966 0.095866771525284958 0.093931715949866587 0.027302239222336322 0.035464964047841274 0.042710754757817763 -0.047858757205311547 -0.081470102471026998 -0.015030131734195566 -0.054435735046751033 -0.064290138211896344 -0.046378038071343455 0.035904691050825221 0.10627338328632466 0.11769109028750775 -0.0019792114046032344 0.030502687826254943 0.048582886129860663 0.032236487420512147 -0.014215021098241378 -0.041144855862853456 0.024554490859178546 -0.061398330954504601;-0.071627412961383363 0.013508267156323634 -0.017732102845097554 -0.025208087043040305 0.044134911216241295 0.008518738379213844 -0.031115827357098849 -0.018808152339422211 -0.0044616796038244033 0.017144257064177 0.033082387696159801 0.066219850176216108 0.066473702372720267 0.019162584174183785 -0.03438494590612326 -0.044014587765164412 -0.020200036338356001 0.002169193136241975 -0.057301241769154986 0.043117938353501556 0.032032844782652246 -0.021912055934165644 -0.025902359758321523 0.023270804035898287 0.11826065395043624 0.0021073097123700769 0.074081342931787031 0.03977709457390613 -0.076884653657168359 -0.086382003451010422 -0.096192446475510299 -0.093977383419887595 -0.09146705668031245 0.012665498612047493 0.029683879234120369 0.044591386135143241 -0.023811579011365817 -0.078851383707129102 -0.019567461466246275 0.0068180811865032886 -0.071678905051979894 -0.073340306496019539 0.023691594734338836 -0.044152415510753863 -0.030795748297869598 0.0002967257468222217 -0.062826178598701987 -0.061090818329235359;-0.045636348762255863 -0.092362341845796822 -0.089805106129800305 -0.05374633331451157 -0.02684335690445162 -0.0050478165877241368 0.036274425191823091 0.042979735412270327 0.045663202490906621 0.09245691361256804 0.10045661965283274 0.050390064358045203 0.13094896761241312 0.031208999993198972 -0.084241959563404134 -0.074980447629983626 0.17992599138135115 0.11423827239685008 -0.01185428226904406 -0.0094834894666600278 -0.034381095695491082 -0.048202154706830702 -0.057521254173420168 -0.048322127836761639 -0.087974429377081692 -0.070666007655404706 -0.061709389597620248 -0.04026436264149174 0.036512853258538952 0.03951522647711813 0.0013443037319987782 0.01909877147202434 0.033334691054403592 0.056465486401626991 0.089127725384847853 0.15490388848702449 0.017046258369872662 0.084989498230683622 0.14547524919255839 0.10989622110643356 -0.0086029096797355185 0.0060310737309639609 0.01059111416893972 0.0049825967360746775 -0.012567680675407276 -0.038908139668197964 -0.0014807373652393654 0.10683996974552146;0.01470598007848214 0.010679994062400507 0.0032050080983499498 -0.003216635788844261 -0.010974111063952638 -0.0093887135211034953 -0.01243614049212575 -0.0034272640973529297 0.0040811287681144469 -0.067126889758080469 -0.058615410674775492 -0.042683638773400027 -0.030295474911487954 -0.017298095562435493 -0.01274842579146278 -0.00073440490465200535 0.011406360053378426 0.015300894768098386 0.024766454779576175 0.063670366758779767 0.064185692293169658 0.031912672828603078 0.0091432151998893495 0.011961669887745883 -0.0098778539757139513 -0.010813035508664319 -0.016196334804024153 -0.023931008466523337 -0.045337540212105704 -0.042158087738922954 -0.042890935090120687 -0.09366546761791554 -0.11094235399163925 -0.032049691975221326 -0.024372050131103187 -0.018251024061420932 -0.01223077693889092 0.0037700827852454252 0.01709600932152194 0.027143138651283046 0.031657653624358205 0.066973939096759458 0.095710343107426071 0.075522408077253647 0.043794007555851541 0.024431958451515041 0.016215568131840098 0.023908621246176372;0.11764619865884658 0.04000513998843102 0.062585969745212536 0.048063128926967486 -0.0080516056898213041 -0.01601415845916402 -0.021100658803943548 -0.019365562266787203 -0.016696269943443889 0.0015497848920161381 0.0056434773598060756 -0.016619547600972631 -0.032099197004112255 -0.14189449827151093 -0.17351255840883345 -0.13768683583186148 -0.020179653136725047 -0.03492386465089891 -0.018771517136337009 -0.020804207734973774 -0.015408688294965911 -0.017907486806497518 -0.018769791967164721 0.0016856438110010308 0.0038656901178457971 0.044061011395573134 0.011115332878342156 -0.0026334565446120444 -0.014130343166675972 -0.02388317065967889 -0.051252052819001338 -0.055944547624432434 -0.057902653308084369 -0.02555043747771174 -0.036403803090767378 -0.043772631722999993 -0.10111083932739671 -0.053400333652114933 -0.018891646271738432 -0.010639050916934721 0.00089865987057003208 -0.0024979450245611622 -0.024668061277214881 -0.014761464476285383 -0.025943991820694165 -0.034406195479139687 0.081826550158737021 0.14986666035058308];

% Layer 2
b2 = [-0.094889663762139198;-0.04666837600958175;0.14787316723825306;0.25111311352001103;0.12192924979241609;0.20382022702648125;0.21787127194304295;0.063046312462205809;-0.038346691144049115;-0.025896300937506028;-0.052616688740037984;-0.073169726402120758;-0.22082659758084247;-0.23390482939685131;-0.098821514648735495;0.03481953535024112;0.069802155645951741;0.0076873913754531824;-0.053639321640475295;-0.20711173796833457;-0.19419280682375337;-0.36655953284924447;-0.22827088218733185;-0.086515855659683241];
LW2_1 = [-0.048406150779346055 0.23178351996389637 0.19403923512300655 -0.25368825163235048 0.30268252443368754 -0.22274225612651891 0.24579705360762608 0.055687540201902974 0.18297360853542236 0.33947230187900668;-0.024729712105684355 0.023152058886199055 0.24479740398922839 0.028545392593243003 0.12180632648022958 -0.21164120131443709 0.17496410713265539 -0.00090303658168553781 0.13801187003850746 0.52224998500923447;0.086531262487607827 -0.12469434977719371 0.16380554621262752 0.063101167114571546 0.20911787678841312 -0.38605150188205384 0.26966192811482187 -0.24125135495721559 0.11405877356790683 0.28530527038535225;-0.054448937518687332 -0.032154944552103423 0.0040982157674392845 0.1901841961239028 0.19600124197544183 -0.28616623387606993 0.31970698980355156 -0.28067036162663955 0.07592865939940377 0.1578218258500966;-0.318800435740342 0.19637397110580923 -0.057139091303812083 0.46747439643516248 -0.06881261834717467 0.10978976020381331 0.12270656852262406 -0.31486665137159864 -0.007283893063580381 0.27535967930978783;-0.19614029242386391 0.23190519748562394 0.1540111570304725 0.40676462136406988 -0.014212049883633122 0.15759787732761937 0.18014590810482209 -0.17779974325837186 -0.14615054186971452 -0.024542330368626523;-0.067108471568841935 0.15260588153738949 0.47970468577761566 0.29003804134457517 0.010060404014432056 0.18806092354483084 0.35179679209486031 -0.14958858223376317 -0.22153102925947413 -0.36171352598636214;-0.28678285739225151 0.061320056610400013 0.21631442668869996 0.072082452574440264 -0.14115183632733583 0.057956212597942668 0.096028177797643596 -0.029065736262810837 -0.2895915944872412 -0.25722198422457532;-0.37169224348511354 0.07320965930098168 0.048436180150318253 0.017251904958011547 -0.21151148026673147 -0.046646675054020356 -0.0074368565031151064 0.030056536481000061 -0.3160361863578991 -0.15804649591912359;-0.39884655793414192 0.16311091430595298 -0.0056646478699722948 0.018933260286939022 -0.090593047007067648 -0.10849293547872883 -0.053857582496677825 -0.025654557305869585 -0.34706617469886453 -0.2117074649967608;-0.32987626402547132 0.22595630191165481 -0.050619669971972321 0.057869186041282446 -0.1134884427962522 -0.17665685543621096 -0.057436361523589351 -0.032582907811052074 -0.37332480846101018 -0.18942801485586733;-0.21410960311472463 0.25314658166608867 -0.083428920453275074 0.20989438477156178 -0.19327404143067414 -0.28970400958634102 -0.10626520216069368 0.057546437829982741 -0.43906681087813149 -0.028329136078825555;-0.21442420645759538 0.13837571827559772 -0.080088102132810951 0.083474278184664019 -0.46626657695404133 -0.11354045190901678 0.16097856095208682 0.0025842709828935318 -0.24164524177396562 -0.057677589046379145;-0.18201838027911768 -0.18402977252437971 -0.13599155117969902 0.31570254017908789 -0.26574697478443932 0.028110068847993688 0.13697646786288867 0.17958741766810848 -0.09182903450196718 -0.21950665794827084;-0.12915149167265194 -0.30745313880334119 -0.18612138871104827 0.41030948929614441 -0.033356685675601808 -0.10505162267459051 0.13321091844758487 0.44372154987023515 -0.086218894193698575 -0.2007487739355657;-0.045642348888913407 -0.28082025699738689 -0.3716178919057021 0.30253561499058618 0.0046659405349391923 -0.16674925224562687 0.11182891419163719 0.43921764380087791 -0.044876106907909288 -0.1885156420711385;0.022809416029228227 0.00065463799973609839 -0.60065594909895414 -0.059257139664618388 0.067270163052742513 -0.056891018593352785 0.068076611155734365 -0.060666265134143416 0.013355745480985727 -0.61147605638563995;0.12753657289481138 0.22914806747429839 -0.41767426789971807 0.14799878591086713 -0.0028395253072047129 0.21653704500866711 0.064550267896574864 0.043064743185808614 0.078679021412936201 -0.32737618491142761;0.1783398256851805 0.53761448313392679 -0.21126458432585696 0.20634384105216991 0.068181619617849146 0.43783366056194223 0.13397632313061367 0.41817112453322514 0.17386015157003779 0.015199898052147574;0.61785037410263444 0.21891058630080185 0.00064191775931580174 0.22650972010104953 -0.084208506391459464 0.16248466792509805 0.00075747760825268053 0.0026670080895271346 0.15381263040437876 0.04005412460703664;0.6301744888463765 -0.040851600592013669 0.15419704863419151 0.11538982994947071 -0.10232405858456001 0.20136554994307457 -0.051682913820825918 -0.17457970300228809 0.20779300123697692 -0.0034467447982560822;0.1154155610807273 -0.086693975308884938 -0.011721791872671704 0.12484462324695778 0.00099680693054240879 0.35144433813841014 0.086245251228791245 -0.23765947382000133 0.48348222646558653 0.17269572045078593;-0.04373205098934025 -0.06127252209844631 0.072620821977446515 0.14444668672477678 0.36158100355639167 0.28170190989838001 -0.064444180694921138 -0.19928947070965211 0.37091929833823317 0.069022293182598185;-0.011386142627081744 0.078587947583445908 0.01944547043670071 0.18086292408387983 0.532462024071234 0.11121686515019465 -0.26660449297771116 -0.20077153155270569 0.21292809607585023 0.11108062412594953];

% Output 1
y1_step1.ymin = -1;
y1_step1.gain = [0.0199014392870252;0.0198662061271286;0.0200082629841364;0.0198016716917823;0.0193427661623548;0.0190755949118872;0.0191739880200963;0.019403009961776;0.0194243551947717;0.0195767469870269;0.0196521199578535;0.0196309902181026;0.0197479028104767;0.0195686209702649;0.0196709499677089;0.0196296898547056;0.0191712111232748;0.0195415786776507;0.0192973892797863;0.0191964970250615;0.0193712857573064;0.0195892240115098;0.0196778736454812;0.0198317127026986];
y1_step1.xoffset = [-0.367165586294668;-0.886403060673294;-0.29492225896785;-0.511943291576755;-2.13976438871676;-0.354898179702091;-0.761420838878839;-0.393932274202565;-0.615141590767763;-0.316909240159775;-0.503385168900455;-0.638484348111235;-0.30050717833245;-0.927375346690388;-0.311916908819729;-0.298941984837713;-2.28370794407463;-0.338529685023393;-1.26756692396989;-0.443793458681511;-0.621445526315343;-0.305348897860732;-0.507591079856937;-0.30501777983284];

% ===== SIMULATION ========

% Format Input Arguments
isCellX = iscell(X);
if ~isCellX, X = {X}; end;
if (nargin < 2), error('Initial input states Xi argument needed.'); end

% Dimensions
TS = size(X,2); % timesteps
if ~isempty(X)
    Q = size(X{1},2); % samples/series
elseif ~isempty(Xi)
    Q = size(Xi{1},2);
else
    Q = 0;
end

% Input 1 Delay States
Xd1 = cell(1,3);
for ts=1:2
    Xd1{ts} = mapminmax_apply(Xi{1,ts},x1_step1);
end

% Input 2 Delay States
Xd2 = cell(1,3);
for ts=1:2
    Xd2{ts} = mapminmax_apply(Xi{2,ts},x2_step1);
end

% Allocate Outputs
Y = cell(1,TS);

% Time loop
for ts=1:TS
    
    % Rotating delay state position
    xdts = mod(ts+1,3)+1;
    
    % Input 1
    Xd1{xdts} = mapminmax_apply(X{1,ts},x1_step1);
    
    % Input 2
    Xd2{xdts} = mapminmax_apply(X{2,ts},x2_step1);
    
    % Layer 1
    tapdelay1 = cat(1,Xd1{mod(xdts-[1 2]-1,3)+1});
    tapdelay2 = cat(1,Xd2{mod(xdts-[1 2]-1,3)+1});
    a1 = tansig_apply(repmat(b1,1,Q) + IW1_1*tapdelay1 + IW1_2*tapdelay2);
    
    % Layer 2
    a2 = repmat(b2,1,Q) + LW2_1*a1;
    
    % Output 1
    Y{1,ts} = mapminmax_reverse(a2,y1_step1);
end

% Final Delay States
finalxts = TS+(1: 2);
xits = finalxts(finalxts<=2);
xts = finalxts(finalxts>2)-2;
Xf = [Xi(:,xits) X(:,xts)];
Af = cell(2,0);

% Format Output Arguments
if ~isCellX, Y = cell2mat(Y); end
end

% ===== MODULE FUNCTIONS ========

% Map Minimum and Maximum Input Processing Function
function y = mapminmax_apply(x,settings)
y = bsxfun(@minus,x,settings.xoffset);
y = bsxfun(@times,y,settings.gain);
y = bsxfun(@plus,y,settings.ymin);
end

% Sigmoid Symmetric Transfer Function
function a = tansig_apply(n,~)
a = 2 ./ (1 + exp(-2*n)) - 1;
end

% Map Minimum and Maximum Output Reverse-Processing Function
function x = mapminmax_reverse(y,settings)
x = bsxfun(@minus,y,settings.ymin);
x = bsxfun(@rdivide,x,settings.gain);
x = bsxfun(@plus,x,settings.xoffset);
end