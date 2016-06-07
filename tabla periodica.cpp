#include <cstdlib>
#include <iostream>
#include <windows.h> 

using namespace std;

void dibujo_tabla();
void menu(); 
void menugrupo ();
void metales();
void metales_ligeros();
void metales_transicion();
void metoloides();
void nometales();
void elementos_Representativos();
void gases_nobles();
void menuelemento();
void hidrogeno();
void helio();
void litio();
void berilio();
void boro();
void hidrogeno();
void nitrogeno();
void oxigeno();
void fluor();
void neon();                      
void sodio();              
void magnesio();
void aluminio();
void silicio();
void fosforo();
void azufre();
void argon();
void potasio();
void calcio();
void escandio();
void titanio();
void vanadio();
void cromo();
void magnesio();
void hierro();
void cobalto();
void niquel();
void cobre();
void zinc();
void galio();
void germanio();
void arsenico();
void selenio();
void bromo();
void kripton();
void rubidio();
void estroncio();
void itrio();
void zirconio();
void niobio();
void molibdeno();
void tecnecio();
void rutenio();
void rodio();
void paladio();
void plata();
void cadmio();
void indio();
void estano();
void antimonio();
void telurio();
void yodo();
void xenon();
void cesio();
void bario();
void lantano();
void cerio();
void praseodimio();
void neodimio();
void prometio();
void samario();
void europio();
void gadolinio();
void terbio();
void disprosio();
void holmio();
void erbio();
void yterbio();
void lutencio();
void hafnio();
void tantalio();
void tungsteno();
void renio();
void osmio();
void iridio();
void platino();
void oro();
void mercurio();
void talio();
void plomo();
void bismuto();
void polonio();
void astato();
void radon();
void francio();
void radio();
void actinio();
void torio();
void protactinio();
void uranio();
void neptunio();
void plutonio();
void americio();
void curio();
void berkelio();
void californio();
void einstenio();
void fermio();
void mendelevio();
void nobelio();
void lawrencio();
void ruterfordio();
void seaborgio();
void bohrio();
void hassio();
void meitnerio();
void darmstadtio();
void roentgenio();
void copernicio();
void unutrio();
void unnilquadium();
void dubnio();
void seaborgio();
void bohorio();
void hassio();
void ununndecio();
void unnunilium();
void unbiunio();
void cloro();                            
void tulio();
void elementos_calcogenos_anfigenos();
void metales_alcalinos();
void metales_tierras_raras();
void no_metales();
void elementos_carbonoides();
void halogenos();
void metales_alcalinoterreos();
void otros_metales();
void elementos_torreos();
void elementos_nitrogenoides();
void gases_nombles();
    
                        
int main()
 {  
    char nombre [20];
    cout<<"BIENVENIDO"<<endl;
    cout <<"Ingrese su nombre"<<endl;
    cin >>nombre;
     dibujo_tabla();
    menu();
    system("PAUSE");
    return 0; 
    
}
 
   void dibujo_tabla()
    {
    system("MODE CON cols=260 lines=70");
    cout <<" "<<endl;
    cout <<"                                                                                                                                          GASES"<<endl;
    cout <<"     ___IA____ ----METALES LIGEROS                                                                   ------------NO METALES------------------ _NOBLES__"<<endl;
    cout <<"     | 1-H   |     |                                                                                 |                                      | | 2-He  |"<<endl;
    cout <<"     ____________IIA__                                                                               |_IIIA____IVA______VA______VIA_____VIIA|__________"<<endl;
    cout <<"     | 3-li  | 4-Be  |                                                                               | 5-B   | 6-C   |  7-N  | 8-O   |  9-F  | 10-Ne |"<<endl;
    cout <<"     _________________     --------ELEMENTOS DE TRANSICION ----------------------------------------  _________________________________________________"<<endl;
    cout <<"     | 11-Na | 12-Mg |    |                                   ------------------------             | | 13-Al | 14-Si | 15-P  | 16-S  | 17-Cl | 18-Ar |"<<endl;
    cout <<"     ___________________IIB_____IVB_____VB______VIB____VIIB__|__VIIIB________________|___IB______IIB___________________________________________________"<<endl;
    cout <<"     | 19-k  | 20-Ca | 21-Sc | 22-Ti | 23-V  | 24-Cr | 25-Mn | 26-Fe | 27-Co | 28-Ni | 29-Cu | 30-Zn | 31-Ga | 32-Ge | 33-As | 34-Se | 35-Br | 36-Kr |"<<endl;
    cout <<"     _________________________________________________________________________________________________________________________________________________"<<endl;
    cout <<"     | 37-Rb | 38-Sr | 39-Y  | 40-Zr | 41-Nb | 42-Mo | 43-Tc | 44-Ru | 45-Rh | 46-Pd | 47-Ag | 48-Cd | 49-In | 50-Sn | 51-Sb | 52-Te |  53-I | 54-Xe |"<<endl;
    cout <<"     _________________________________________________________________________________________________________________________________________________"<<endl;
    cout <<"     | 55-Cs | 56-Ba | 57-La | 72-Hf | 73-Ta | 74-W  | 75-Re | 76-Os | 77-Ir | 78-Pt | 79-Au | 80-Hg | 81-Tl | 82-Pb | 83-Bi | 84-Po | 85-At | 86-Rn |"<<endl;
    cout <<"     _________________________________________________________________________________________________________________________________________________"<<endl;
    cout <<"     | 87-Fr | 88-Ra | 89-Ac | 104Rf | 105Db | 106Sg | 107Bh | 108Hs | 109Mt | 110Pl | 111Da | 112Tf | 113Unp| 114Unq| 115Unh| 116Uns| 117Uno| 118Une|"<<endl;
    cout <<"     __________________________________________________________________________________________________________________________________________________"<<endl;
    cout <<"                             | 119Uun| 120Unn| 121Uuu| 122Uub| 123Uut| 124Uuq| 125Uup| 126Uuh| 127Uus| 128Uno| 129Uue| 130Ubn| 131Ubu| "<<endl;
    cout <<"                             _________________________________________________________________________________________________________"<<endl;
    cout <<"                     ________________________________________________________________________________________________________________"<<endl;
    cout <<"                     | 58-Ce | 59-Pr | 60-Nd | 61-Pm | 62-Sm | 63-Eu | 64-Gd | 65-Tb | 66-Dy | 67-Ho | 68-Er | 69-Tm | 70-Yb | 71Lu  |" <<endl;
    cout <<"                     _________________________________________________________________________________________________________________"<<endl;
    cout <<"                     | 90-Th | 91-Pa | 92-U  | 93-Np | 94-Pu | 95-Am | 96-Cm | 97-Bk | 98-Cf | 99-Es | 100Fm | 101Md | 102No | 103Lw |"<<endl;
    cout <<"                     _________________________________________________________________________________________________________________"<<endl;
    }
    void menu()
    {
    cout<<" En el siguiente programa podras observar los datos importantes de cada elemento o la division de cada uno de ellos"<< endl<<endl;
    cout<<" 1. Elementos."<<endl;
    cout<<" 2. Grupos." <<endl;
    cout<<" por favor ingresa el numero del tema que deseas observar"<<endl;
    int menu;
    cin>> menu;
    switch(menu)
    {
                case 1:
                     menuelemento();
                     break;
                case 2: 
                    menugrupo();
                     break;
                default: 
                     cout<<" El numero escogido no se encuentra "<<endl;
                     
                   break;
                   } 
                
   
    }
    void menuelemento( )   
	{
	int elemento;
    cout<<" por favor ingrese el n\243mero en que se encuentra el elemento que desea"<<endl;
    cin>> elemento;
     switch(elemento)
    {    
                             case 1: 
                             	 hidrogeno();
                             break;
                             
                             case 2:
							 	 helio();
                             break;
                             
							 case 3:
								 litio();
                             break;

                             case 4:    
							     berilio();
                             break;

                             case 5:    
							    boro();
                             break;

                              case 6:   
							    hidrogeno();
                             break;

							 case 7:    
							     nitrogeno();
                             break;
                             
                             case 8:    
							     oxigeno();
                             break;
                             
							 case 9:    
							    fluor();
                             break;
                             
                             
							 case 10:    
                                  neon();
                             break;
                             
                             case 11:    
                                  sodio();
                             break;
                             
						     
                              case 12:    
                                  magnesio();
                             break;
                             
                             case 13:    
                                   aluminio();
                             break;
                             
                             case 14:   
                                 silicio();
                             break;
                             
                             case 15:   
                                 fosforo();
                             break;
                            
                             case 16:
                                  azufre();
                             break;
                             
                             case 17:    
                                     cloro();
                             break;
                             
                             case 18:    
                                    argon();
                             break;
                              
                              case 19:    
                                   potasio();
                             break;
                             
                             case 20:   
                                    calcio();
                             break;
                             break;
                             
                             case 22:    
                                 titanio();
                               
                             case 21:    
                                  escandio();
                             break;

                        	case 23:    
                                  vanadio();
                             break;
	                        
                            case 24:    
                                 cromo();
                             break;
	
                            case 25:    
                                magnesio();
                             break;
	                         
                             case 26:
                                     hierro();
                             break;
                             
                             case 27:
                                      cobalto();
                             break;
                             
                             case 28:
                                    niquel();
                             break;
                                
                             case 29: 
                                   cobre();
                             break;
                              
                              case 30:
                                  zinc();
                             break; 
                             
                             case 31:
                                  galio();
                             break;
                             
                             case 32: 
                                   germanio();
                             break;

                             case 33:
                                   arsenico();
                             break;
                             
                             case 34:
                                   selenio();
                             break;
                             
                             case 35:
                                  bromo();
                             break;
                            
                             
                             case 36:
                                  kripton();
                             break;
                             
                             case 37:
                                  rubidio();
                             break;
                             
                             case 38:
                                    estroncio();
                             break;
	                         
                             case 39:
                                    itrio();
                             break;
                             
                             case 40:
                                      zirconio();
                             break;
                             
                             case 41:
                                     niobio();
                             break;
	                         
                             case 42:
                                      molibdeno();
                             break;
                             
                             case 43:
                                     tecnecio();
                             break;
                             
                             case 44:
                                  rutenio();
                             break;
                             
                             case 45:
                                  rodio();
                             break;
                             
                             case 46:
                                  paladio();
                             break;
                             
                             case 47:
							      plata();
                            
                             break;
                             
                             case 48:
							   cadmio();
                             
                             break;
                             
                             case 49:
                                  indio();
                            
                             break;
                             
                             case 50:
                                 
                                  estano();
                             break;
                             
                             case 51:
                                  
                                   antimonio();
                             break;
                              
                             case 52:
                                   telurio();
                             break;
                             
                             case 53:
                                  yodo();
                             break;
                             
                             case 54:
                                  xenon();
                             break;
                             
                             case 55:
                                 cesio();
                             break;
                            
                            case 56:
                                   bario();
                             break;
                             
                             case 57:
                                  lantano();
                             break;
	                         
                             case 58:
                                  cerio();
                             break;
	                         
                             case 59 :
                                     praseodimio();
                             break;
                           
                           	case 60:
                                    neodimio();
                             break;

                             case 61: 
                                   prometio();
                             break;
                             
                             case 62:
                                  samario();
                             break;
                             
                             case 63:
                                   europio();
                             break;
                             
                             case 64:
                                   gadolinio();
                             break;
                            
                             case 65:
                                   terbio();
                             break;
                             case 66:
                                  disprosio();
                             break;
  
                             case 67:
                                   holmio();
                             break;
                             case 68:
                                  erbio();
                             break;
                             case 69:
                                  tulio();
                             break;
                             case 70:
                                  yterbio();
                             break;
                             case 71:
                              lutencio();
                             break;
                           	case 72:
                                    hafnio();
                             break;

                             	case 73:
								 tantalio();
                             break;
                             case 74:
                                  tungsteno();
                             break;
                           	case 75:
                                      renio();
                             break;
                             case 76:
                                   osmio();
                             break;
                             case 77: 
                                  iridio();
                             break;
                             case 78:
                                   platino();
                             break;
                             case 79:
                                  oro();
                             break;
                             case 80:
                                  mercurio();
                             break;
                             case 81:
                                   talio();
                             break;
                             case 82:
                                  plomo();
                             break;
                             case 83:
                                  bismuto();
                             break;
                             case 84:
                                  polonio();
                             break;
                             case 85:
                                  astato();
                             break;
                             case 86:
                                  radon();
                             break;
                             case 87:
                                  francio();
                             break;
                             case 88:
                                  radio();
                             break;
	                        
							 case 89:
                            
							 actinio();
                             break;
                             
							 case 90:
                                   torio();
                             break;
                             case 91:
                                  protactinio();
                             break;
                             case 92:
                                  uranio();
                             break;
                             case 93:
                                   neptunio();
                             break;
                             case 94:
                                   plutonio();
                             break;
                             case 95:
                             americio();
                             break;
                             case 96:
                                  curio();
                             break;
                             case 97:
                                  berkelio();
                             break;
                             case 98:
                                  californio();
                             break;
                             case 99:
                                  einstenio();
                             break;
                             case 100:
                                  fermio();
                             break;
                             case 101:
                                  mendelevio();
                             break;
                             case 102:
                                   nobelio();
                             break;
                             case 103:
                                  lawrencio();
                             break;
                             case 104 :
                                  ruterfordio();
                             break;
                             case 105:
                                   dubnio();
                             break;
                             case 106:
                                 seaborgio();
                             break;
	                         case 107:
                                   bohrio();
                             break;
                             case 108:
                                  hassio();
                             break;
                             case 109:
                                 meitnerio();
                             break;
                             case 110:
                                  darmstadtio();
                             break;
                             case 111:
                                   roentgenio();
                             break;
                             case 112:
                                   copernicio();
                             break;
                             case 113:
                                  unutrio();
                             break;
                             case 114:
                                   unnilquadium();
                             break;
                             case 115:
                                 dubnio();
                             break;
                             case 116:
                                   seaborgio();
                             break;
                             case 117:
                                  bohorio();
                             break;
                             case 118:
                                  hassio();
                             break;
	                         case 119:
                                  ununndecio();
                             break;
                             case 120:
                                 unnunilium();
                             break;
  
                             case 121:
                                  unbiunio();
                             break;

                        
                             
						     
                  default: cout<<" El numero de elemento escogido no se encuentra "<<endl;
                   break;
                   } 
                   

          } 
		  void hidrogeno()
          {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 1"<<endl;
           cout<<"NOMBRE: Hidr\242geno  "<<endl;
           cout<<"SIMBOLO: H  "<<endl;
           cout<<"PESO ATOMICO: 1.0079  "<<endl;
           cout<<"DENSIDAD: 0.071   "<<endl;
           cout<<"VOLUMEN ATOMICO: 14.1   "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1S^1   "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -252.7    "<<endl;
           cout<<"TEMPERATURA DE FUSION: -259.2  "<<endl;
           cout<<"ESTADO DE OXIDACION: 1  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.6  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 0.108   "<<endl;
           cout<<"CALOR DE FUSION: 0.014 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0004  "<<endl;
           cout<<"CALOR ESPECIFICO: 3.45   "<<endl;
            int volver;
          
          cout<<"Si deseas regresar al menu principal por favor ingresa el nyumero 1"<<endl;
          cin>>volver;
          if(volver==1)
          {
                 menu();      
                       }
           }
      void helio()
		 {
          cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
    	  cout<<"NUMERO ATOMICO: 2 "<<endl;
          cout<<"NOMBRE: Helio  "<<endl;
          cout<<"SIMBOLO: He"<<endl;
          cout<<"PESO ATOMICO: 4.0026"<<endl;
          cout<<"DENSIDAD: 0.126   "<<endl;
          cout<<"VOLUMEN ATOMICO: 31.8  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2  "<<endl;
          cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2  "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: -268.9"<<endl;
          cout<<"TEMPERATURA DE FUSION: -259.2 "<<endl;
          cout<<"ESTADO DE OXIDACION: 1   "<<endl;
          cout<<"CALOR DE VAPORIZACION: 0.020   "<<endl;
          cout<<"CALOR DE FUSION: 0.0005 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.0003  "<<endl;
          cout<<"CALOR ESPECIFICO: 1.25  "<<endl;
           int volver;
          
          cout<<"Si deseas regresar al menu principal por favor ingresa el nyumero 1"<<endl;
          cin>>volver;
          if(volver==1)
          {
                 menu();      
                       }
		}
    void litio()
		{ cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
    	  cout<<"NUMERO ATOMICO: 3 "<<endl;
          cout<<"NOMBRE: Litio  "<<endl;
          cout<<"SIMBOLO: Li"<<endl;
          cout<<"PESO ATOMICO: 6.939"<<endl;
          cout<<"DENSIDAD: 0.53   "<<endl;
          cout<<"VOLUMEN ATOMICO: 13.1  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^1  "<<endl;
          cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2  "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 1330   "<<endl;
          cout<<"TEMPERATURA DE FUSION: 1805.5 "<<endl;
          cout<<"ESTADO DE OXIDACION: 1   "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 0.9  "<<endl;
          cout<<"CALOR DE VAPORIZACION: 24.12   "<<endl;
          cout<<"CALOR DE FUSION: 0.62 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.218"<<endl;
          
          int volver;
          
          cout<<"Si deseas regresar al menu principal por favor ingresa el nyumero 1"<<endl;
          cin>>volver;
          if(volver==1)
          {
                 menu();      
                       }
                            
        }
      void berilio()
		{
		  cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
    	  cout<<"NUMERO ATOMICO: 4 "<<endl;
          cout<<"NOMBRE: Berilio  "<<endl;
          cout<<"SIMBOLO: Be "<<endl;
          cout<<"PESO ATOMICO: 9.0122 "<<endl;
          cout<<"DENSIDAD: 1.85  "<<endl;
          cout<<"VOLUMEN ATOMICO: 5.0  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2  "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 2770   "<<endl;
          cout<<"TEMPERATURA DE FUSION:1277  "<<endl;
          cout<<"ESTADO DE OXIDACION: 2  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 1.5  "<<endl;
          cout<<"CALOR DE VAPORIZACION: 73.   "<<endl;
          cout<<"CALOR DE FUSION: 2.8 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.25 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.38  "<<endl;
          cout<<"CALOR ESPECIFICO:0.45    "<<endl;
		}
	 void boro()
		{
		  cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
    	  cout<<"NUMERO ATOMICO: 5"<<endl;
          cout<<"NOMBRE: Boro  "<<endl;
          cout<<"SIMBOLO: B  "<<endl;
          cout<<"PESO ATOMICO: 10.811  "<<endl;
          cout<<"DENSIDAD: 2.31  "<<endl;
          cout<<"VOLUMEN ATOMICO: 4.68  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1S^2 2s^2 2p^1   "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3 "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 400   "<<endl;
          cout<<"TEMPERATURA DE FUSION: 2075  "<<endl;
          cout<<"ESTADO DE OXIDACION: 3  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 2.04  "<<endl;
          cout<<"CALOR DE VAPORIZACION: 480   "<<endl;
          cout<<"CALOR DE FUSION: 22.18 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 1,0 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.274  "<<endl;
          cout<<"CALOR ESPECIFICO: 0.568   "<<endl;
       
	
      }	
	 void nitrogeno()
		{ 
		   cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
    	   cout<<"NUMERO ATOMICO: 7 "<<endl;
           cout<<"NOMBRE:Nitrogeno  "<<endl;
           cout<<"SIMBOLO: N"<<endl;
           cout<<"PESO ATOMICO: 14.006"<<endl;
           cout<<"DENSIDAD: 0.81   "<<endl;
           cout<<"VOLUMEN ATOMICO: 17.3  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^1 2p^3 "<<endl;
           cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -195.8   "<<endl;
           cout<<"TEMPERATURA DE FUSION: -210 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2-5  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 3.0 "<<endl;
           cout<<"CALOR DE VAPORIZACION: 0.666   "<<endl;
           cout<<"CALOR DE FUSION: 0.086"<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.00006  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.247   "<<endl;
      }	
	void oxigeno()
	  { 
	       cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
    	   cout<<"NUMERO ATOMICO: 8 "<<endl;
           cout<<"NOMBRE:Oxigen  "<<endl;
           cout<<"SIMBOLO: O"<<endl;
           cout<<"PESO ATOMICO: 15.99"<<endl;
           cout<<"DENSIDAD: 1.14   "<<endl;
           cout<<"VOLUMEN ATOMICO: 14.0  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^1 2p^4 "<<endl;
           cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-6  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -183   "<<endl;
           cout<<"TEMPERATURA DE FUSION: -218.8 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 3.5  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 0.815 "<<endl;
           cout<<"CALOR DE FUSION: 0.53"<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.00006  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.218  "<<endl;
     }
     void fluor()
	{ 
		   cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
    	   cout<<"NUMERO ATOMICO: 9 "<<endl;
           cout<<"NOMBRE:Fluor  "<<endl;
           cout<<"SIMBOLO: F"<<endl;
           cout<<"PESO ATOMICO: 18.99"<<endl;
           cout<<"DENSIDAD: 1.505   "<<endl;
           cout<<"VOLUMEN ATOMICO: 17.1  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^1 2p^5  "<<endl;
           cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-7 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -188   "<<endl;
           cout<<"TEMPERATURA DE FUSION: -219.6 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 4.0  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 0.755   "<<endl;
           cout<<"CALOR DE FUSION: 0.061"<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: ..."<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: ... "<<endl;
           cout<<"CALOR ESPECIFICO: 0.18  "<<endl;
    }
	void neon()
	{
			cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
		    cout<<" "<<endl;
		    cout<<"NUMERO ATOMICO: 10 "<<endl;
		    cout<<"NOMBRE:Neon  "<<endl;
		    cout<<"SIMBOLO: Ne"<<endl;
		    cout<<"PESO ATOMICO: 20.183"<<endl;
		    cout<<"DENSIDAD: 1.20  "<<endl;
		    cout<<"VOLUMEN ATOMICO: 16.8  "<<endl;
		    cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^1 2p^6  "<<endl;
		    cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-8  "<<endl;
		    cout<<"TEMPERATURA DE EBULLICION: -246   "<<endl;
		    cout<<"TEMPERATURA DE FUSION: -248.6 "<<endl;
		    cout<<"ESTADO DE OXIDACION: 2  "<<endl;
		    cout<<"CALOR DE VAPORIZACION: 0.422  "<<endl;
		    cout<<"CALOR DE FUSION: 0.080"<<endl;
		    cout<<"CONDUCTIVIDAD TERMICA: 0.0001 "<<endl;
                      
    }
     void sodio()
	{ 
			cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
            cout<<" "<<endl;
    	    cout<<"NUMERO ATOMICO: 11 "<<endl;
            cout<<"NOMBRE: Sodio   "<<endl;
        	cout<<"SIMBOLO: Na "<<endl;
        	cout<<"PESO ATOMICO: 22.89 "<<endl;
            cout<<"DENSIDAD: 0.97  "<<endl;
            cout<<"VOLUMEN ATOMICO: 23.7 "<<endl;
            cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^1  "<<endl;
            cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,1   "<<endl;
            cout<<"TEMPERATURA DE EBULLICION:  892  "<<endl;
            cout<<"TEMPERATURA DE FUSION: 97.8 "<<endl;
            cout<<"ESTADO DE OXIDACION: 1   "<<endl;
            cout<<"ELECTRONEGATIVIDAD: 0.9   "<<endl;
            cout<<"CALOR DE VAPORIZACION: 24.12   "<<endl;
            cout<<"CALOR DE FUSION: 0.62  "<<endl;
            cout<<"CONDUCTIVIDAD ELECTRICA: 0.218 "<<endl;
                            
    }                    

                             
      void aluminio()
	 { 
	 		cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
            cout<<" "<<endl;
    	    cout<<"NUMERO ATOMICO: 13 "<<endl;
            cout<<"NOMBRE: Aluminio  "<<endl;
            cout<<"SIMBOLO: Al"<<endl;
            cout<<"PESO ATOMICO: 26.9815386 "<<endl;
            cout<<"DENSIDAD: 2.702   "<<endl;
            cout<<"VOLUMEN ATOMICO: 9.99  "<<endl;
            cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^1   "<<endl;
            cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
            cout<<"TEMPERATURA DE EBULLICION: 2519   "<<endl;
            cout<<"TEMPERATURA DE FUSION:  660.32 "<<endl;
            cout<<"ESTADO DE OXIDACION: 3 "<<endl;
            cout<<"ELECTRONEGATIVIDAD: 1.61  "<<endl;
            cout<<"CALOR DE VAPORIZACION:  293.72 "<<endl;
            cout<<"CALOR DE FUSION:  10.669 "<<endl;
            cout<<"CONDUCTIVIDAD ELECTRICA: 3.78 "<<endl;
            cout<<"CONDUCTIVIDAD TERMICA: 2.37  "<<endl;
            cout<<"CALOR ESPECIFICO: 0.897  "<<endl;
      }

      void silicio()
	{ 
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
    	   cout<<"NUMERO ATOMICO: 14 "<<endl;
           cout<<"NOMBRE:silicio  "<<endl;
           cout<<"SIMBOLO: Si "<<endl;
           cout<<"PESO ATOMICO: 28.086"<<endl;
           cout<<"DENSIDAD: 2.33   "<<endl;
           cout<<"VOLUMEN ATOMICO: 12.1  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^2  "<<endl;
           cout<<"NUMERO DE ELECTRONES DE VALENCIA: 4  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 2680   "<<endl;
           cout<<"TEMPERATURA DE FUSION: 1411 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.8  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 40.6   "<<endl;
           cout<<"CALOR DE FUSION: 11.1"<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.10"<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.20 "<<endl;
           cout<<"CALOR ESPECIFICO: 0.162   "<<endl;
   }
                             
    void fosforo()
    {
         cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         cout<<" "<<endl;
    	 cout<<"NUMERO ATOMICO: 15 "<<endl;
         cout<<"NOMBRE:Fosforo "<<endl;
         cout<<"SIMBOLO: P "<<endl;
         cout<<"PESO ATOMICO: 30.973"<<endl;
         cout<<"DENSIDAD: 1.82  "<<endl;
         cout<<"VOLUMEN ATOMICO: 17.0   "<<endl;
         cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^3  "<<endl;
         cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-5  "<<endl;
         cout<<"TEMPERATURA DE EBULLICION: 280 B   "<<endl;
         cout<<"TEMPERATURA DE FUSION: 144.2B "<<endl;
         cout<<"ESTADO DE OXIDACION: 2  "<<endl;
         cout<<"ELECTRONEGATIVIDAD: 2.1  "<<endl;
         cout<<"CALOR DE VAPORIZACION: 2.97   "<<endl;
         cout<<"CALOR DE FUSION: 0.15"<<endl;
         cout<<"CONDUCTIVIDAD ELECTRICA: 10^-17"<<endl;
         cout<<"CALOR ESPECIFICO: 0.177   "<<endl;
     }
							
                             
     void azufre()
     { 
        cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
        cout<<" "<<endl;
    	cout<<"NUMERO ATOMICO: 16 "<<endl;
        cout<<"NOMBRE:Azufre "<<endl;
        cout<<"SIMBOLO: S "<<endl;
        cout<<"PESO ATOMICO: 32.064"<<endl;
        cout<<"DENSIDAD: 2.07  "<<endl;
        cout<<"VOLUMEN ATOMICO: 15.5   "<<endl;
        cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^4  "<<endl;
        cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-6  "<<endl;
        cout<<"TEMPERATURA DE EBULLICION: 444.6   "<<endl;
        cout<<"TEMPERATURA DE FUSION: 119.0 "<<endl;
        cout<<"ESTADO DE OXIDACION: 2  "<<endl;
        cout<<"ELECTRONEGATIVIDAD: 2.5  "<<endl;
        cout<<"CALOR DE VAPORIZACION: 3.01  "<<endl;
        cout<<"CALOR DE FUSION: 0.34"<<endl;
        cout<<"CONDUCTIVIDAD ELECTRICA: 10^-23"<<endl;
        cout<<"CONDUCTIVIDAD TERMICA: 0.0007 "<<endl;
        cout<<"CALOR ESPECIFICO: 0.175   "<<endl;
     }
                              
     void cloro()
		{ 
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 17 "<<endl;
           cout<<"NOMBRE:Cloro "<<endl;
           cout<<"SIMBOLO: Cl "<<endl;
           cout<<"PESO ATOMICO: 35.453"<<endl;
           cout<<"DENSIDAD: 1.56  "<<endl;
           cout<<"VOLUMEN ATOMICO: 18.7   "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^5  "<<endl;
           cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-7  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -34.7  "<<endl;
           cout<<"TEMPERATURA DE FUSION: -101.0 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 3.0  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 2.44  "<<endl;
           cout<<"CALOR DE FUSION: 0.77"<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.00002 "<<endl;
           cout<<"CALOR ESPECIFICO: 0.116   "<<endl;
         }
                             
                             
       void argon()
	{ 
            cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
            cout<<" "<<endl;
    	    cout<<"NUMERO ATOMICO: 18 "<<endl;
            cout<<"NOMBRE:Argon "<<endl;
            cout<<"SIMBOLO: Ar "<<endl;
            cout<<"PESO ATOMICO: 39.948"<<endl;
            cout<<"DENSIDAD: 1.40  "<<endl;
            cout<<"VOLUMEN ATOMICO: 24.2  "<<endl;
            cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6  "<<endl;
            cout<<"NUMERO DE ELECTRONES DE VALENCIA: 2-8 "<<endl;
            cout<<"TEMPERATURA DE EBULLICION: -185.8  "<<endl;
            cout<<"TEMPERATURA DE FUSION: -189.4 "<<endl;
            cout<<"ESTADO DE OXIDACION: 2  "<<endl;
            cout<<"CALOR DE VAPORIZACION: 1.56  "<<endl;
            cout<<"CALOR DE FUSION: 0.281"<<endl;
            cout<<"CONDUCTIVIDAD TERMICA: 0.00004 "<<endl;
            cout<<"CALOR ESPECIFICO: 0.125   "<<endl;
        }
							 
					
	 void potasio()
	{ 
          cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
    	  cout<<"NUMERO ATOMICO: 19 "<<endl;
          cout<<"NOMBRE: Potasio   "<<endl;
          cout<<"SIMBOLO: K "<<endl;
          cout<<"PESO ATOMICO: 39.102 "<<endl;
          cout<<"DENSIDAD: 0.86   "<<endl;
          cout<<"VOLUMEN ATOMICO: 45.3  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 4s^1  "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,1  "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 760   "<<endl;
          cout<<"TEMPERATURA DE FUSION: 63.7 "<<endl;
          cout<<"ESTADO DE OXIDACION:  1 "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 0.8   "<<endl;
          cout<<"CALOR DE VAPORIZACION: 18.9   "<<endl;
          cout<<"CALOR DE FUSION: 0.55 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.143 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.23  "<<endl;
          cout<<"CALOR ESPECIFICO: 0.177    "<<endl;
     }
                             
                            
                             
	void calcio()
	{ 
          cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 20"<<endl;
          cout<<"NOMBRE: Calcio  "<<endl;
          cout<<"SIMBOLO: Ca "<<endl;
          cout<<"PESO ATOMICO: 40.08 "<<endl;
          cout<<"DENSIDAD: 1.55   "<<endl;
          cout<<"VOLUMEN ATOMICO: 29.9  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 4s^2 "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8   "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 1440  "<<endl;
          cout<<"TEMPERATURA DE FUSION: 838 "<<endl;
          cout<<"ESTADO DE OXIDACION: 2  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 0.1   "<<endl;
          cout<<"CALOR DE VAPORIZACION: 36.74   "<<endl;
          cout<<"CALOR DE FUSION: 2.1  "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.218"<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.3  "<<endl;
          cout<<"CALOR ESPECIFICO: 0.149   "<<endl;
      }
                             
                             
                             
	void escandio()
	{ 
         cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         cout<<" "<<endl;
         cout<<"NUMERO ATOMICO: 21"<<endl;
         cout<<"NOMBRE: Escandio "<<endl;
         cout<<"SIMBOLO: Sc "<<endl;
         cout<<"PESO ATOMICO: 44.956"<<endl;
         cout<<"DENSIDAD: 3.0    "<<endl;
         cout<<"VOLUMEN ATOMICO:  15.0 "<<endl;
         cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^1 4s^2  "<<endl;
         cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2.8  "<<endl;
         cout<<"TEMPERATURA DE EBULLICION: 2730   "<<endl;
         cout<<"TEMPERATURA DE FUSION: 1539  "<<endl;
         cout<<"ESTADO DE OXIDACION: 3  "<<endl;
         cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
         cout<<"CALOR DE VAPORIZACION: 8.1   "<<endl;
         cout<<"CALOR DE FUSION: 3.8  "<<endl;
         cout<<"CONDUCTIVIDAD ELECTRICA:0.015 "<<endl;
         cout<<"CONDUCTIVIDAD TERMICA: 0.015   "<<endl;
         cout<<"CALOR ESPECIFICO: 0.13    "<<endl;
     }
                             
                             	
                             
	void titanio()
	 { 
          cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
          cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 22 "<<endl;
          cout<<"NOMBRE:  Titanio  "<<endl;
          cout<<"SIMBOLO: Ti "<<endl;
          cout<<"PESO ATOMICO: 47.90 "<<endl;
          cout<<"DENSIDAD: 4.51   "<<endl;
          cout<<"VOLUMEN ATOMICO: 10.6   "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^2 4s^2  "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  2.8  "<<endl;
          cout<<"TEMPERATURA DE EBULLICION:  3260   "<<endl;
          cout<<"TEMPERATURA DE FUSION: 1668  "<<endl;
          cout<<"ESTADO DE OXIDACION:  4,3 "<<endl;
          cout<<"ELECTRONEGATIVIDAD:  1.5 "<<endl;
          cout<<"CALOR DE VAPORIZACION:  106.5  "<<endl;
          cout<<"CALOR DE FUSION: 3.7 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.024 "<<endl;
          cout<<"CALOR ESPECIFICO: 0.120    "<<endl;
  }
                             
                             	
                             
	void vanadio()
	{ 
         cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
       	 cout<<" "<<endl;
         cout<<"NUMERO ATOMICO: 23"<<endl;
         cout<<"NOMBRE: Vanadio "<<endl;
         cout<<"SIMBOLO:  V"<<endl;
         cout<<"PESO ATOMICO: 50.942 "<<endl;
         cout<<"DENSIDAD:  6.1  "<<endl;
         cout<<"VOLUMEN ATOMICO: 8.35   "<<endl;
         cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^3 4s^2 "<<endl;
         cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8  "<<endl;
         cout<<"TEMPERATURA DE EBULLICION:  3450 "<<endl;
         cout<<"TEMPERATURA DE FUSION: 1900 "<<endl;
         cout<<"ESTADO DE OXIDACION:  5,4,3,2 "<<endl;
         cout<<"ELECTRONEGATIVIDAD: 1.6   "<<endl;
         cout<<"CALOR DE VAPORIZACION: 106   "<<endl;
         cout<<"CALOR DE FUSION: 4.2 "<<endl;
         cout<<"CONDUCTIVIDAD ELECTRICA: 0.04 "<<endl;
         cout<<"CALOR ESPECIFICO: 0.120   "<<endl;
 }
                             
                             
    void cromo()
     { 
         cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
       	 cout<<" "<<endl;
         cout<<"NUMERO ATOMICO: 24 "<<endl;
         cout<<"NOMBRE: Cromo  "<<endl;
         cout<<"SIMBOLO: Cr "<<endl;
         cout<<"PESO ATOMICO: 51.996 "<<endl;
         cout<<"DENSIDAD: 7.19   "<<endl;
         cout<<"VOLUMEN ATOMICO: 7.23  "<<endl;
         cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^4 4s^1  "<<endl;
         cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8  "<<endl;
         cout<<"TEMPERATURA DE EBULLICION: 2665 "<<endl;
         cout<<"TEMPERATURA DE FUSION: 1875 "<<endl;
         cout<<"ESTADO DE OXIDACION: 6,3,2  "<<endl;
         cout<<"ELECTRONEGATIVIDAD: 1.6  "<<endl;
         cout<<"CALOR DE VAPORIZACION: 72.97    "<<endl;
         cout<<"CALOR DE FUSION: 3.3  "<<endl;
         cout<<"CONDUCTIVIDAD ELECTRICA: o.078 "<<endl;
         cout<<"CONDUCTIVIDAD TERMICA:  0.16 "<<endl;
         cout<<"CALOR ESPECIFICO:   0.11 "<<endl;
     }
                             
                             
     void magnesio()
     { 
          cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	      cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 25 "<<endl;
          cout<<"NOMBRE: Manganeso  "<<endl;
          cout<<"SIMBOLO: Mn "<<endl;
          cout<<"PESO ATOMICO: 54.938045 "<<endl;
          cout<<"DENSIDAD:  7.47  "<<endl;
          cout<<"VOLUMEN ATOMICO: 7.35  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^5 4s^2  "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  7 "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 2061 "<<endl;
          cout<<"TEMPERATURA DE FUSION: 1246 "<<endl;
          cout<<"ESTADO DE OXIDACION: 2,3,4,6,7  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 1.55  "<<endl;
          cout<<"CALOR DE VAPORIZACION:  219.7   "<<endl;
          cout<<"CALOR DE FUSION:  14.644 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 22.6 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.0781  "<<endl;
          cout<<"CALOR ESPECIFICO:  0.479  "<<endl;
     }
                             
                             	
                             
    void hierro()
     { 
          cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	      cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 26 "<<endl;
          cout<<"NOMBRE:  Hierro "<<endl;
          cout<<"SIMBOLO: Fe "<<endl;
          cout<<"PESO ATOMICO: 55.847 "<<endl;
          cout<<"DENSIDAD:  7.86  "<<endl;
          cout<<"VOLUMEN ATOMICO: 7.11  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^6 4s^2"<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  8 "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 2861 "<<endl;
          cout<<"TEMPERATURA DE FUSION: 1538 "<<endl;
          cout<<"ESTADO DE OXIDACION: 2,3  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 1.83  "<<endl;
          cout<<"CALOR DE VAPORIZACION:  351.04   "<<endl;
          cout<<"CALOR DE FUSION: 14.9  "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 1.53 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA:  0.804 "<<endl;
          cout<<"CALOR ESPECIFICO:  0.449 "<<endl;
     }
                             
                             	
                             
     void cobalto()
     { 
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
           cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 27 "<<endl;
           cout<<"NOMBRE: Cobalto  "<<endl;
           cout<<"SIMBOLO: Co "<<endl;
           cout<<"PESO ATOMICO: 58.933195 "<<endl;
           cout<<"DENSIDAD:  8.92  "<<endl;
           cout<<"VOLUMEN ATOMICO:  6.61 "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^7 4s^2"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 9  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 2927 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 1495 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2,3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.88  "<<endl;
           cout<<"CALOR DE VAPORIZACION:  382.4  "<<endl;
           cout<<"CALOR DE FUSION:  15.23 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 160.3 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 1.00  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.421  "<<endl;
     }
                             
                             	
                             
    void niquel()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 28 "<<endl;
           cout<<"NOMBRE: Niquel  "<<endl;
           cout<<"SIMBOLO: Ni "<<endl;
           cout<<"PESO ATOMICO: 58.6934 "<<endl;
           cout<<"DENSIDAD: 890  "<<endl;
           cout<<"VOLUMEN ATOMICO:  6.59 "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^8 4s^2"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  10 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 2913 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 1455 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2,3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD:  1.91 "<<endl;
           cout<<"CALOR DE VAPORIZACION:  371.8  "<<endl;
           cout<<"CALOR DE FUSION:  17.57 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 14.3 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.909  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.444 "<<endl;
     }
                             
                            
                             
     void cobre()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;  
           cout<<"NUMERO ATOMICO: 29 "<<endl;
           cout<<"NOMBRE: Cobre  "<<endl;
           cout<<"SIMBOLO: Cu "<<endl;
           cout<<"PESO ATOMICO: 63.546 "<<endl;
           cout<<"DENSIDAD:  8.94 "<<endl;
           cout<<"VOLUMEN ATOMICO: 7.11  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^1"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 1562 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 1084.62"<<endl;
           cout<<"ESTADO DE OXIDACION: 1,2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.90  "<<endl;
           cout<<"CALOR DE VAPORIZACION:  304.6  "<<endl;
           cout<<"CALOR DE FUSION:  13.012 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 5.96"<<endl;
           cout<<"CONDUCTIVIDAD TERMICA:  4.01 "<<endl;
           cout<<"CALOR ESPECIFICO: 0.385 "<<endl;
     }
                             
                            
                             
    void zinc()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 30 "<<endl;
           cout<<"NOMBRE: Zinc  "<<endl;
           cout<<"SIMBOLO: Zn "<<endl;
           cout<<"PESO ATOMICO: 65.546 "<<endl;
           cout<<"DENSIDAD: 7.14  "<<endl;
           cout<<"VOLUMEN ATOMICO:  9.16 "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 907 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 419.53"<<endl;
           cout<<"ESTADO DE OXIDACION: 2  "<<endl;
           cout<<"ELECTRONEGATIVIDAD:  1.65 "<<endl;
           cout<<"CALOR DE VAPORIZACION:  115.5  "<<endl;
           cout<<"CALOR DE FUSION: 7.32  "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 16.6 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 1.16  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.388 "<<endl;
     }
                             
                             
                             
     void galio()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 31 "<<endl;
           cout<<"NOMBRE: Galio "<<endl;
           cout<<"SIMBOLO: Ga "<<endl;
           cout<<"PESO ATOMICO: 69.723 "<<endl;
           cout<<"DENSIDAD: 6.095 "<<endl;
           cout<<"VOLUMEN ATOMICO: 11.44  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^1"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  3 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 2204 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 29.76"<<endl;
           cout<<"ESTADO DE OXIDACION: 3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.81 "<<endl;
           cout<<"CALOR DE VAPORIZACION: 256.1   "<<endl;
           cout<<"CALOR DE FUSION:  5.59 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.281  "<<endl;
           cout<<"CALOR ESPECIFICO:  0.371"<<endl;
     }
                             
                              
                             
     void germanio()
     {
          cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	      cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 32 "<<endl;
          cout<<"NOMBRE: Germanio "<<endl;
          cout<<"SIMBOLO: Ge "<<endl;
          cout<<"PESO ATOMICO:72.59  "<<endl;
          cout<<"DENSIDAD: 5.32 "<<endl;
          cout<<"VOLUMEN ATOMICO: 16.3  "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^2"<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  4 "<<endl;
          cout<<"TEMPERATURA DE EBULLICION: 2830 "<<endl;
          cout<<"TEMPERATURA DE FUSION: 937.4"<<endl;
          cout<<"ESTADO DE OXIDACION: 3  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 1.8 "<<endl;
          cout<<"CALOR DE VAPORIZACION: 68  "<<endl;
          cout<<"CALOR DE FUSION:  7.6 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 0.022 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA: 0.14 "<<endl;
          cout<<"CALOR ESPECIFICO:  0.073"<<endl;
     }
                            
                           
                             
    void arsenico()
     {
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         	 cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 33 "<<endl;
           cout<<"NOMBRE: Arsenico "<<endl;
           cout<<"SIMBOLO: As "<<endl;
           cout<<"PESO ATOMICO:74.92  "<<endl;
           cout<<"DENSIDAD: 5.72 "<<endl;
           cout<<"VOLUMEN ATOMICO: 18.4  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^3"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  3-5 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 613 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 817"<<endl;
           cout<<"ESTADO DE OXIDACION: 3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 2.0 "<<endl;
           cout<<"CALOR DE VAPORIZACION: 7.75  "<<endl;
           cout<<"CALOR DE FUSION:  6.62 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.029 "<<endl;
           cout<<"CALOR ESPECIFICO:  0.082"<<endl;
     }
                             
                            
                             
    void selenio()
     {
           cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         	 cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 34 "<<endl;
           cout<<"NOMBRE: Selenio "<<endl;
           cout<<"SIMBOLO: Se "<<endl;
           cout<<"PESO ATOMICO:78.96  "<<endl;
           cout<<"DENSIDAD: 4.79 "<<endl;
           cout<<"VOLUMEN ATOMICO: 16.5  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^4"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  2-4-6 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 685 "<<endl;
           cout<<"TEMPERATURA DE FUSION: 217"<<endl;
           cout<<"ESTADO DE OXIDACION: 3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 2.4 "<<endl;
           cout<<"CALOR DE VAPORIZACION: 3.34  "<<endl;
           cout<<"CALOR DE FUSION:  1.25 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.08 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.00001 "<<endl;
           cout<<"CALOR ESPECIFICO:  0.084"<<endl;
     }
                             
                             
                             
     void bromo()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 35 "<<endl;
           cout<<"NOMBRE: Bromo "<<endl;
           cout<<"SIMBOLO: Br "<<endl;
           cout<<"PESO ATOMICO:79.909  "<<endl;
           cout<<"DENSIDAD: 3.12 "<<endl;
           cout<<"VOLUMEN ATOMICO: 23.5  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^5"<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  1-5 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 58 "<<endl;
           cout<<"TEMPERATURA DE FUSION: -7.2"<<endl;
           cout<<"ESTADO DE OXIDACION: 3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 2.8"<<endl;
           cout<<"CALOR DE VAPORIZACION: 3.58  "<<endl;
           cout<<"CALOR DE FUSION:  1.26 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 10^-18"<<endl;
           cout<<"CALOR ESPECIFICO:  0.070"<<endl;
     }
                             
                            
    void kripton()
     {
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 36 "<<endl;
           cout<<"NOMBRE: Kripton "<<endl;
           cout<<"SIMBOLO: Kr "<<endl;
           cout<<"PESO ATOMICO:83.80  "<<endl;
           cout<<"DENSIDAD: 2.6 "<<endl;
           cout<<"VOLUMEN ATOMICO: 32.2 "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6"<<endl;
           cout<<"TEMPERATURA DE EBULLICION: -152 "<<endl;
           cout<<"TEMPERATURA DE FUSION: -157.3"<<endl;
           cout<<"ESTADO DE OXIDACION: 3  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 2.16 "<<endl;
           cout<<"CALOR DE FUSION:  0.39 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.0002"<<endl;
                            
     }
							
							
                             
     void rubidio()
     {
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO:  37"<<endl;
           cout<<"NOMBRE: Rubidio  "<<endl;
           cout<<"SIMBOLO: Rb "<<endl;
           cout<<"PESO ATOMICO: 85.47 "<<endl;
           cout<<"DENSIDAD:  1.53  "<<endl;
           cout<<"VOLUMEN ATOMICO: 55.9  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6 5s^1  "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8   "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 687    "<<endl;
           cout<<"TEMPERATURA DE FUSION: 38.9 "<<endl;
           cout<<"ESTADO DE OXIDACION: 1  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 0.8  "<<endl;
           cout<<"CALOR DE VAPORIZACION:  18.1  "<<endl;
           cout<<"CALOR DE FUSION: 0.55"<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.080 "<<endl;
           cout<<"CALOR ESPECIFICO: 0.52   "<<endl;
     }
                             
                             	
                             
    void estroncio()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 38 "<<endl;
           cout<<"NOMBRE: Estroncio  "<<endl;
           cout<<"SIMBOLO: Sr "<<endl;
           cout<<"PESO ATOMICO: 87.62"<<endl;
           cout<<"DENSIDAD: 2.6   "<<endl;
           cout<<"VOLUMEN ATOMICO: 33.7  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6 5s^2 "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 1380   "<<endl;
           cout<<"TEMPERATURA DE FUSION: 768 "<<endl;
           cout<<"ESTADO DE OXIDACION: 2   "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.0  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 33.8    "<<endl;
           cout<<"CALOR DE FUSION: 2.1 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.043 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.3  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.149   "<<endl;
     }
                             
                             
                             
     void itrio()
     {
           cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
   	       cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 39"<<endl;
           cout<<"NOMBRE: Itrio   "<<endl;
           cout<<"SIMBOLO: Y "<<endl;
           cout<<"PESO ATOMICO: 88.905"<<endl;
           cout<<"DENSIDAD: 4.47   "<<endl;
           cout<<"VOLUMEN ATOMICO: 49.8   "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^1 5s^2  "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,1.8   "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 2927   "<<endl;
           cout<<"TEMPERATURA DE FUSION:1509  "<<endl;
           cout<<"ESTADO DE OXIDACION: 3   "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
           cout<<"CALOR DE VAPORIZACION:  9.3  "<<endl;
           cout<<"CALOR DE FUSION: 2.7  "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.019 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.35   "<<endl;
           cout<<"CALOR ESPECIFICO: 0.071   "<<endl;
     }
                             
                             	
     void zirconio()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         	 cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 40 "<<endl;
           cout<<"NOMBRE: Zirconio  "<<endl;
           cout<<"SIMBOLO: Zr "<<endl;
           cout<<"PESO ATOMICO: 91.22 "<<endl;
           cout<<"DENSIDAD: 6.49   "<<endl;
           cout<<"VOLUMEN ATOMICO: 14.1  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^2 5s^2  "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,1.8 "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 3580    "<<endl;
           cout<<"TEMPERATURA DE FUSION: 1852 "<<endl;
           cout<<"ESTADO DE OXIDACION: 4   "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.5  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 106.5   "<<endl;
           cout<<"CALOR DE FUSION: 3.7 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.024 "<<endl;
           cout<<"CALOR ESPECIFICO: o.66   "<<endl;
     }
                             
                             	
                             
     void niobio()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         	 cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 41 "<<endl;
           cout<<"NOMBRE: Niobio  "<<endl;
           cout<<"SIMBOLO: Nb "<<endl;
           cout<<"PESO ATOMICO: 92.906 "<<endl;
           cout<<"DENSIDAD: 8.4   "<<endl;
           cout<<"VOLUMEN ATOMICO: 10.8  "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^4 5s^1   "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 3300    "<<endl;
           cout<<"TEMPERATURA DE FUSION: 2468  "<<endl;
           cout<<"ESTADO DE OXIDACION: 5,3  "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.6  "<<endl;
           cout<<"CALOR DE FUSION: 6.4 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.080 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.25  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.036   "<<endl;
     }
                             
                             
                             
    void  molibdeno()
     {
           cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
         	 cout<<" "<<endl;
           cout<<"NUMERO ATOMICO: 42 "<<endl;
           cout<<"NOMBRE: Molibdeno  "<<endl;
           cout<<"SIMBOLO: Mo "<<endl;
           cout<<"PESO ATOMICO: 95.94 "<<endl;
           cout<<"DENSIDAD: 10.2    "<<endl;
           cout<<"VOLUMEN ATOMICO: 9.4   "<<endl;
           cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^5 5s^1  "<<endl;
           cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8  "<<endl;
           cout<<"TEMPERATURA DE EBULLICION: 5560    "<<endl;
           cout<<"TEMPERATURA DE FUSION: 2610  "<<endl;
           cout<<"ESTADO DE OXIDACION: 6,5,4,3,2   "<<endl;
           cout<<"ELECTRONEGATIVIDAD: 1.8  "<<endl;
           cout<<"CALOR DE VAPORIZACION: 12.8   "<<endl;
           cout<<"CALOR DE FUSION: 6.6 "<<endl;
           cout<<"CONDUCTIVIDAD ELECTRICA: 0.19 "<<endl;
           cout<<"CONDUCTIVIDAD TERMICA: 0.35  "<<endl;
           cout<<"CALOR ESPECIFICO: 0.061   "<<endl;
     }
                             
                             
                             
    void tecnecio()
     {
          cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
        	 cout<<" "<<endl;
          cout<<"NUMERO ATOMICO: 43 "<<endl;
          cout<<"NOMBRE: Tecnecio  "<<endl;
          cout<<"SIMBOLO: Tc "<<endl;
          cout<<"PESO ATOMICO: 98 "<<endl;
          cout<<"DENSIDAD: 11.5   "<<endl;
          cout<<"VOLUMEN ATOMICO: 8.51   "<<endl;
          cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^5 5s^2  "<<endl;
          cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  7 "<<endl;
          cout<<"TEMPERATURA DE EBULLICION:  4265  "<<endl;
          cout<<"TEMPERATURA DE FUSION:  2157 "<<endl;
          cout<<"ESTADO DE OXIDACION:  7  "<<endl;
          cout<<"ELECTRONEGATIVIDAD: 1.9  "<<endl;
          cout<<"CALOR DE VAPORIZACION:  660.0  "<<endl;
          cout<<"CALOR DE FUSION: 23.01 "<<endl;
          cout<<"CONDUCTIVIDAD ELECTRICA: 61 "<<endl;
          cout<<"CONDUCTIVIDAD TERMICA:  0.506 "<<endl;
          cout<<"CALOR ESPECIFICO: 0.21   "<<endl;
     }
                             
                            
                             
						       void rutenio()
						          { cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 44 "<<endl;
                             cout<<"NOMBRE: Rutenio  "<<endl;
                             cout<<"SIMBOLO: Ru "<<endl;
                             cout<<"PESO ATOMICO: 101.072 "<<endl;
                             cout<<"DENSIDAD:  12.3  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 8.22  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^7 5s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 8 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 4150  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 2334  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2,3,4,6,8  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.2 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  567.77  "<<endl;
                             cout<<"CALOR DE FUSION:  25.5"<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 131.6 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 1.17  "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.238  "<<endl;
                             }
                             
                             
                             
						      void rodio()
						          { cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 45 "<<endl;
                             cout<<"NOMBRE: Rodio  "<<endl;
                             cout<<"SIMBOLO: Rh "<<endl;
                             cout<<"PESO ATOMICO: 1002.90550 "<<endl;
                             cout<<"DENSIDAD:  12.4  "<<endl;
                             cout<<"VOLUMEN ATOMICO:  8.30 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^8 5s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 9 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3695  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1964  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2,3,4 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.28 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  495.39  "<<endl;
                             cout<<"CALOR DE FUSION: 21.76 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 221.7 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 1.50  "<<endl;
                             cout<<"CALOR ESPECIFICO:   0.243 "<<endl;
                             }
                             
                             
                             
						      void paladio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 46 "<<endl;
                             cout<<"NOMBRE: Paladio  "<<endl;
                             cout<<"SIMBOLO: Pd "<<endl;
                             cout<<"PESO ATOMICO: 106.42 "<<endl;
                             cout<<"DENSIDAD:  12.02 "<<endl;
                             cout<<"VOLUMEN ATOMICO:  8.85 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 10 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2963  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1554.9  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.20 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 376.6  "<<endl;
                             cout<<"CALOR DE FUSION: 16.74 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 94.8 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  0.718 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.244   "<<endl;
                             }
                             
                          
                             
						       void plata()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 47 "<<endl;
                             cout<<"NOMBRE: Plata  "<<endl;
                             cout<<"SIMBOLO: Ag "<<endl;
                             cout<<"PESO ATOMICO: 107.8682 "<<endl;
                             cout<<"DENSIDAD: 10.5  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 10.27  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  2162 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 961.78  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 1 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.93 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  255.1 "<<endl;
                             cout<<"CALOR DE FUSION: 11.30 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 630.5 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 4.29  "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.235  "<<endl;
                             }
                             
                            
                             
						       void cadmio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 48 "<<endl;
                             cout<<"NOMBRE: Cadmio "<<endl;
                             cout<<"SIMBOLO: Cd "<<endl;
                             cout<<"PESO ATOMICO: 112.411 "<<endl;
                             cout<<"DENSIDAD: 8.642  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 13.01 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 767  "<<endl;
                             cout<<"TEMPERATURA DE FUSION:  321.78 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.69 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  100 "<<endl;
                             cout<<"CALOR DE FUSION: 6.19 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 146.4 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  0.969 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.232   "<<endl;
                             }
                             
                             
                             
						      void indio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 49 "<<endl;
                             cout<<"NOMBRE: Indio "<<endl;
                             cout<<"SIMBOLO: In "<<endl;
                             cout<<"PESO ATOMICO: 114.818 "<<endl;
                             cout<<"DENSIDAD: 7.30  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 15.73 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2072  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 156.60  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.78 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  226.4 "<<endl;
                             cout<<"CALOR DE FUSION: 3.28 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 119.5 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.818  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.233   "<<endl;
                             }
                             
                             
                             
						       void estano()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 50 "<<endl;
                             cout<<"NOMBRE: Estaño  "<<endl;
                             cout<<"SIMBOLO: Sn "<<endl;
                             cout<<"PESO ATOMICO: 118.69 "<<endl;
                             cout<<"DENSIDAD: 7.30  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 16.3 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 4-2 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2270 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 231.9 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 4"<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.8 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  70 "<<endl;
                             cout<<"CALOR DE FUSION: 1.72 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.088 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.16  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.054 "<<endl;
                             }
                             
                            
                             
						       void antimonio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 51 "<<endl;
                             cout<<"NOMBRE: Antimonio  "<<endl;
                             cout<<"SIMBOLO: Sb "<<endl;
                             cout<<"PESO ATOMICO: 121.75 "<<endl;
                             cout<<"DENSIDAD: 6.62  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.4 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^3  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3-5 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1380 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 630.5 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 4"<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.9 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  46.6"<<endl;
                             cout<<"CALOR DE FUSION: 4.74 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.026 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.5 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.049 "<<endl;
                             }
                             
                            
                             
						       void telurio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 52 "<<endl;
                             cout<<"NOMBRE: Telurio  "<<endl;
                             cout<<"SIMBOLO: Te "<<endl;
                             cout<<"PESO ATOMICO: 127.60 "<<endl;
                             cout<<"DENSIDAD: 6.24  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 20.5 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^4  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2-4-6 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 989.9 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 449.5 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-18"<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.1 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  11.9"<<endl;
                             cout<<"CALOR DE FUSION: 4.28 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 10^-6  "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.014 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.047 "<<endl;
                             }
                             
                            
                             
						       void yodo()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 53 "<<endl;
                             cout<<"NOMBRE: Yodo  "<<endl;
                             cout<<"SIMBOLO: I "<<endl;
                             cout<<"PESO ATOMICO: 126.90 "<<endl;
                             cout<<"DENSIDAD: 4.94  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 25.7 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^5  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1-5-7 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 183 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 113.7 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-18"<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.5 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  5.2"<<endl;
                             cout<<"CALOR DE FUSION: 1.87 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 10^-15  "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.001 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.052 "<<endl;
                             }
                             
                             
                             
						       void xenon()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 54 "<<endl;
                             cout<<"NOMBRE: Xenon  "<<endl;
                             cout<<"SIMBOLO: Xe "<<endl;
                             cout<<"PESO ATOMICO: 131.30 "<<endl;
                             cout<<"DENSIDAD: 3.06  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 42.9 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: ... "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: -108.0 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: -111.9 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-18"<<endl;
                             cout<<"CALOR DE VAPORIZACION:  3.02"<<endl;
                             cout<<"CALOR DE FUSION: 0.55 "<<endl;
                          
                             cout<<"CONDUCTIVIDAD TERMICA: 0.0001 "<<endl;
                            
                             }
							
							
                             
						       void cesio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 55 "<<endl;
                             cout<<"NOMBRE: Cesio  "<<endl;
                             cout<<"SIMBOLO: Cs "<<endl;
                             cout<<"PESO ATOMICO: 132.905"<<endl;
                             cout<<"DENSIDAD: 1.90   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 70  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 6s^1    "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 688    "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 38.9  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 1   "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 0.7  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 16.3   "<<endl;
                             cout<<"CALOR DE FUSION: 0.50  "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.053 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.52    "<<endl;
                             }
                             
                             	
                             
						       void bario()
						          { cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 56 "<<endl;
                             cout<<"NOMBRE: Bario  "<<endl;
                             cout<<"SIMBOLO: Ba "<<endl;
                             cout<<"PESO ATOMICO: 137.34"<<endl;
                             cout<<"DENSIDAD: 3.5   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 39   "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1640   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 714  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 0.9  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 35.7   "<<endl;
                             cout<<"CALOR DE FUSION:1.83  "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.016 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.068   "<<endl;
                             }
                             
                             	
                             
						      void lantano()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 57"<<endl;
                             cout<<"NOMBRE: Lantano  "<<endl;
                             cout<<"SIMBOLO: La "<<endl;
                             cout<<"PESO ATOMICO: 138.91 "<<endl;
                             cout<<"DENSIDAD: 6.17    "<<endl;
                             cout<<"VOLUMEN ATOMICO:22.5   "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 5d^1 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  3470  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 920 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.1  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 96   "<<endl;
                             cout<<"CALOR DE FUSION: 1.5 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.017 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.033  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.045   "<<endl;
                             }
                             
                             
                             
						      void cerio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 58 "<<endl;
                             cout<<"NOMBRE: Cerio  "<<endl;
                             cout<<"SIMBOLO: Ce "<<endl;
                             cout<<"PESO ATOMICO: 140.12 "<<endl;
                             cout<<"DENSIDAD: 6.67   "<<endl;
                             cout<<"VOLUMEN ATOMICO:  21.0  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^2 5d^0 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3468   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 795  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.1  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 95   "<<endl;
                             cout<<"CALOR DE FUSION: 1.2 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.013 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.026   "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.042   "<<endl;
                             }
                             
                             
                             
						       void praseodimio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 59"<<endl;
                             cout<<"NOMBRE: Praseodimio   "<<endl;
                             cout<<"SIMBOLO: Pr "<<endl;
                             cout<<"PESO ATOMICO: 104.907"<<endl;
                             cout<<"DENSIDAD: 6.77    "<<endl;
                             cout<<"VOLUMEN ATOMICO: 20.8  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^3 5d^0 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3468   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 795 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.1  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 79   "<<endl;
                             cout<<"CALOR DE FUSION: 1.60 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.15 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.028  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.048   "<<endl;
                             }
                             
                             
                             
						       void neodimio()
						          { cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 60 "<<endl;
                             cout<<"NOMBRE: Neodimio  "<<endl;
                             cout<<"SIMBOLO:Ne "<<endl;
                             cout<<"PESO ATOMICO: 144.24 "<<endl;
                             cout<<"DENSIDAD: 7.00   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 20.6  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^4 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3027   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1024 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 69   "<<endl;
                             cout<<"CALOR DE FUSION: 1.70 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.013 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.031  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.045   "<<endl;
                             }
                             
                            
                             
						      void prometio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 61 "<<endl;
                             cout<<"NOMBRE: Prometio "<<endl;
                             cout<<"SIMBOLO: Pm"<<endl;
                             cout<<"PESO ATOMICO: 145 "<<endl;
                             cout<<"DENSIDAD: 7.264  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.95  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^5  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 7  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3000  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1042 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.13  "<<endl;
                             cout<<"CALOR DE FUSION: 7.5 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.179  "<<endl;
                             
                             }
                            
                            
                             
						      void samario()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 62 "<<endl;
                             cout<<"NOMBRE: Samario "<<endl;
                             cout<<"SIMBOLO: Sm"<<endl;
                             cout<<"PESO ATOMICO: 150.36 "<<endl;
                             cout<<"DENSIDAD: 7.536  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.95"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^6  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 8  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1790  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1072 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2,3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.17  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 166.40  "<<endl;
                             cout<<"CALOR DE FUSION: 8.62 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 11 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.133  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.197  "<<endl;
                             }
                             
                              
                             
						       void europio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 63 "<<endl;
                             cout<<"NOMBRE: Europio "<<endl;
                             cout<<"SIMBOLO: Eu"<<endl;
                             cout<<"PESO ATOMICO: 151.964 "<<endl;
                             cout<<"DENSIDAD: 5.244  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 28.98 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^7  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 9  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1596  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 822 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2,3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 143.50  "<<endl;
                             cout<<"CALOR DE FUSION: 9.21 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 11 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.139  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.182 "<<endl;
                             }
                             
                            
                             
						       void gadolinio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 64 "<<endl;
                             cout<<"NOMBRE: Gadolinio "<<endl;
                             cout<<"SIMBOLO: Gd"<<endl;
                             cout<<"PESO ATOMICO: 157.25 "<<endl;
                             cout<<"DENSIDAD: 7.901 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.90"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^7 5d^1 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 10  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3264 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1314 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.20  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 359.40 "<<endl;
                             cout<<"CALOR DE FUSION: 10.05 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 7.9 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.104  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.236 "<<endl;
                             }
                             
                             
                             
						      void terbio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 65 "<<endl;
                             cout<<"NOMBRE: Terbio "<<endl;
                             cout<<"SIMBOLO: Tb"<<endl;
                             cout<<"PESO ATOMICO: 158.92535 "<<endl;
                             cout<<"DENSIDAD: 8.230 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.31"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^9  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3221 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1359 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 330.90 "<<endl;
                             cout<<"CALOR DE FUSION: 10.8 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 8.8 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.111  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.182 "<<endl;
                             }
                             
                            
                             
						       void disprosio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 66 "<<endl;
                             cout<<"NOMBRE: Disprosio "<<endl;
                             cout<<"SIMBOLO: Dy"<<endl;
                             cout<<"PESO ATOMICO: 162.500 "<<endl;
                             cout<<"DENSIDAD: 8.551 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.00"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^10  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3221 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1359 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 330.90 "<<endl;
                             cout<<"CALOR DE FUSION: 10.8 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 10 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.111  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.182 "<<endl;
                             }
                             
                          
                             
						       void holmio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 67 "<<endl;
                             cout<<"NOMBRE: Holmio "<<endl;
                             cout<<"SIMBOLO: Ho"<<endl;
                             cout<<"PESO ATOMICO: 164.93 "<<endl;
                             cout<<"DENSIDAD: 8.80 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.7"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^11  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2600 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1461 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-29 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 67 "<<endl;
                             cout<<"CALOR DE FUSION: 4.1 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.011 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.039 "<<endl;
                             }
                             
                             
                             
						       void erbio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 68 "<<endl;
                             cout<<"NOMBRE: Erbio "<<endl;
                             cout<<"SIMBOLO: Er "<<endl;
                             cout<<"PESO ATOMICO: 167.26 "<<endl;
                             cout<<"DENSIDAD: 9.05 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.4 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^12  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2900 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1497 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-30 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 67 "<<endl;
                             cout<<"CALOR DE FUSION: 4.1 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.012 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.023"<<endl;
                             cout<<"CALOR ESPECIFICO: 0.040 "<<endl;
                             }
                             
                            
                             
						       void tulio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 69 "<<endl;
                             cout<<"NOMBRE: Tulio "<<endl;
                             cout<<"SIMBOLO: Tm"<<endl;
                             cout<<"PESO ATOMICO: 168.93 "<<endl;
                             cout<<"DENSIDAD: 9.33 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.1"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^13  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3-2  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1727 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1545 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-31 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 59 "<<endl;
                             cout<<"CALOR DE FUSION: 4.4 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.011 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.038 "<<endl;
                             }
                             
                             
                             
						       void yterbio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 70 "<<endl;
                             cout<<"NOMBRE: Yterbio "<<endl;
                             cout<<"SIMBOLO: Yb"<<endl;
                             cout<<"PESO ATOMICO: 173.04 "<<endl;
                             cout<<"DENSIDAD: 6.98 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 24.8"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14  6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3-2  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1427 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 824 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.1  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 38 "<<endl;
                             cout<<"CALOR DE FUSION: 1.8 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.035 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.035 "<<endl;
                             }
                             
                            
                             
						      void lutencio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 71 "<<endl;
                             cout<<"NOMBRE: Lutencio "<<endl;
                             cout<<"SIMBOLO: Lu"<<endl;
                             cout<<"PESO ATOMICO: 174.97 "<<endl;
                             cout<<"DENSIDAD: 9.84 "<<endl;
                             cout<<"VOLUMEN ATOMICO: 17.8"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^1 6s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3327 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1652 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.2  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 90 "<<endl;
                             cout<<"CALOR DE FUSION: 4.6 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.015 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.037 "<<endl;
                             }
							
							
						
                             
						       void hafnio()
						          { cout<<"el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 72 "<<endl;
                             cout<<"NOMBRE: Hafnio  "<<endl;
                             cout<<"SIMBOLO: Hf "<<endl;
                             cout<<"PESO ATOMICO: 178.49 "<<endl;
                             cout<<"DENSIDAD: 13.1   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 13.6  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^2 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 5400   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 2222  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 155   "<<endl;
                             cout<<"CALOR DE FUSION: 5.2  "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.031"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.22   "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.035  "<<endl;
                             }
                             
                             
                             
						      void tantalio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 73"<<endl;
                             cout<<"NOMBRE: Tantalio  "<<endl;
                             cout<<"SIMBOLO: Ta"<<endl;
                             cout<<"PESO ATOMICO: 180.948"<<endl;
                             cout<<"DENSIDAD: 16.6    "<<endl;
                             cout<<"VOLUMEN ATOMICO: 10.9   "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^3 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  54.25  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 29.96 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 5   "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.5  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 180   "<<endl;
                             cout<<"CALOR DE FUSION: 6.8 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.081 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.13   "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.036  "<<endl;
                             }
                             
                             	
                             
						      void tungsteno()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 74 "<<endl;
                             cout<<"NOMBRE: Tungsteno  "<<endl;
                             cout<<"SIMBOLO: W "<<endl;
                             cout<<"PESO ATOMICO: 183.85 "<<endl;
                             cout<<"DENSIDAD: 9.3   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 9.53  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^4 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 54.25   "<<endl;
                             cout<<"TEMPERATURA DE FUSION:  29.96  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 5  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.7  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 185 "<<endl;
                             cout<<"CALOR DE FUSION: 8.05 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA:0.081 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  0.40 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.032   "<<endl;
                             }
                             
                             
                             
						       void renio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 75 "<<endl;
                             cout<<"NOMBRE: Renio  "<<endl;
                             cout<<"SIMBOLO: Re"<<endl;
                             cout<<"PESO ATOMICO: 186.2 "<<endl;
                             cout<<"DENSIDAD: 21.0   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 8.85   "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^5 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 5900    "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 3180  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 7,6,4,2,1   "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.9  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 152    "<<endl;
                             cout<<"CALOR DE FUSION: 7.9 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.051"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.17  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.033   "<<endl;
                             }
                             
                            
						       void osmio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 76 "<<endl;
                             cout<<"NOMBRE: Osmio  "<<endl;
                             cout<<"SIMBOLO: Os "<<endl;
                             cout<<"PESO ATOMICO: 190.23 "<<endl;
                             cout<<"DENSIDAD: 22.61   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 8.41  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^6 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  8  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 5012   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 2334  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2,3,4,6,8  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.2 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  627.6  "<<endl;
                             cout<<"CALOR DE FUSION: 29.3 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 105.3 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  0.876 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.130  "<<endl;
                             }
                             
                            
                             
						       void iridio()
						          {cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 77 "<<endl;
                             cout<<"NOMBRE: Iridio  "<<endl;
                             cout<<"SIMBOLO: Ir "<<endl;
                             cout<<"PESO ATOMICO: 192.217 "<<endl;
                             cout<<"DENSIDAD:  22.65  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 1.36  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^7 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  9  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  4428  "<<endl;
                             cout<<"TEMPERATURA DE FUSION:  2446 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2,3,4,6 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.20  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 563.6  "<<endl;
                             cout<<"CALOR DE FUSION: 26.4 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 188.7 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  1.47 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.131  "<<endl;
                             }
                             
                             
                             
						      void platino()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 78 "<<endl;
                             cout<<"NOMBRE: Platino "<<endl;
                             cout<<"SIMBOLO: Pt "<<endl;
                             cout<<"PESO ATOMICO: 195.084 "<<endl;
                             cout<<"DENSIDAD:  21.45  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 9.09  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^9 6s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  10  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3825  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1768.4  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 2.28  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 510.5  "<<endl;
                             cout<<"CALOR DE FUSION: 19.7 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 94.8 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  0.716 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.133  "<<endl;
                             }
                             
                             
                             
						       void oro()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 79 "<<endl;
                             cout<<"NOMBRE: Oro "<<endl;
                             cout<<"SIMBOLO: Au "<<endl;
                             cout<<"PESO ATOMICO: 196.966569 "<<endl;
                             cout<<"DENSIDAD: 19.31   "<<endl;
                             cout<<"VOLUMEN ATOMICO:  10.20 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  1  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  2856 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1064.18  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  1,3 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.54 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 324.4  "<<endl;
                             cout<<"CALOR DE FUSION: 12.55 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 446.4 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA:  3.18 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.129  "<<endl;
                             }
                             
                             
                             
						       void mercurio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 80 "<<endl;
                             cout<<"NOMBRE: Mercurio "<<endl;
                             cout<<"SIMBOLO: Hg "<<endl;
                             cout<<"PESO ATOMICO: 200.59 "<<endl;
                             cout<<"DENSIDAD:  13.546  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 14.81 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  356.73 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: -38.83  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  1,2 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.00 "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  56.9 "<<endl;
                             cout<<"CALOR DE FUSION: 2.29 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 10.2 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.0830 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.140  "<<endl;
                             }
                             
                             
                             
						      void talio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 81 "<<endl;
                             cout<<"NOMBRE: Talio "<<endl;
                             cout<<"SIMBOLO: Tl "<<endl;
                             cout<<"PESO ATOMICO: 204.3833 "<<endl;
                             cout<<"DENSIDAD: 11.85  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 17.25 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1473  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 304  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  1,3 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.04 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 162.1  "<<endl;
                             cout<<"CALOR DE FUSION: 4.27"<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 55.8 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.461 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.129  "<<endl;
                             }
                             
                             
                             
						       void plomo()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 82 "<<endl;
                             cout<<"NOMBRE: Plomo "<<endl;
                             cout<<"SIMBOLO: Pb "<<endl;
                             cout<<"PESO ATOMICO: 207.19 "<<endl;
                             cout<<"DENSIDAD: 11.4  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.3 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 4-2 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1725   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 327.4  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-8 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  1.8 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 42.4  "<<endl;
                             cout<<"CALOR DE FUSION: 1.22"<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.046 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.038 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.031 "<<endl;
                             }
                             
                            
                             
						      void bismuto()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 83 "<<endl;
                             cout<<"NOMBRE: Bismuto "<<endl;
                             cout<<"SIMBOLO: Bi "<<endl;
                             cout<<"PESO ATOMICO: 208.98 "<<endl;
                             cout<<"DENSIDAD: 9.8  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 21.3 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^3  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3-5 "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1560  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 271.3 "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  1.9 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 42.7  "<<endl;
                             cout<<"CALOR DE FUSION: 2.6"<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.009 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.02 "<<endl;
                             cout<<"CALOR ESPECIFICO:  0.034 "<<endl;
                             }
                             
                             
                             
						      void polonio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 84 "<<endl;
                             cout<<"NOMBRE: Polonio "<<endl;
                             cout<<"SIMBOLO: Po "<<endl;
                             cout<<"PESO ATOMICO: 210 "<<endl;
                             cout<<"DENSIDAD: 9.2  "<<endl;
                             cout<<"VOLUMEN ATOMICO: 22.7 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^4  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2-4 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 254  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.0 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 29  "<<endl;
                              cout<<"CONDUCTIVIDAD ELECTRICA: 0.02 "<<endl;
                            
                             }
                             
                            
                             
						       void astato()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 85 "<<endl;
                             cout<<"NOMBRE: Astato "<<endl;
                             cout<<"SIMBOLO: At "<<endl;
                             cout<<"PESO ATOMICO: 210 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^5  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1-2-5-7 "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 302  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"ELECTRONEGATIVIDAD:  2.2 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 8  "<<endl;
                            
                             }
                             
                            
                             
						      void radon()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 86 "<<endl;
                             cout<<"NOMBRE: Radon "<<endl;
                             cout<<"SIMBOLO: Rn "<<endl;
                             cout<<"PESO ATOMICO: 222 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: -61.8   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: -71  "<<endl;
                             cout<<"ESTADO DE OXIDACION:  2-32 "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 3.92  "<<endl;
                             cout<<"CALOR DE FUSION: 0.69"<<endl;
                             
                             }
                             
                            
                             
						      void francio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 87"<<endl;
                             cout<<"NOMBRE: Francio  "<<endl;
                             cout<<"SIMBOLO: Fr "<<endl;
                             cout<<"PESO ATOMICO: 223 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 7s^1  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 27   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1 "<<endl;
                          
                             }
                             
	                        
                             
						      void radio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 88 "<<endl;
                             cout<<"NOMBRE: Radio  "<<endl;
                             cout<<"SIMBOLO: Ra "<<endl;
                             cout<<"PESO ATOMICO: 226"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 700 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 0.9  "<<endl;
                             cout<<"CALOR DE VAPORIZACION:  27.4  "<<endl;
                             cout<<"CALOR DE FUSION: 2.4 "<<endl;
                            
                             }
                             
                             
                             
						       void actinio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 89"<<endl;
                             cout<<"NOMBRE: Actinio  "<<endl;
                             cout<<"SIMBOLO: Ac"<<endl;
                             cout<<"PESO ATOMICO: 227"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 6d^1 7s^2   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 1050   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 3  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 1.3  "<<endl;
                             
                             }
                              
	                         
                             
						       void torio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO:90 "<<endl;
                             cout<<"NOMBRE: Torio  "<<endl;
                             cout<<"SIMBOLO: Th "<<endl;
                             cout<<"PESO ATOMICO: 232.038 "<<endl;
                             cout<<"DENSIDAD: 11.7   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 19.9  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^0 6d^2 7s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3850  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION:  1750  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 2,8.18,32  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CALOR DE FUSION: 4.8  "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.055 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.034   "<<endl;
                             }
                             
	                        
                             
						       void protactinio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 91 "<<endl;
                             cout<<"NOMBRE: Protactinio  "<<endl;
                             cout<<"SIMBOLO: Pa "<<endl;
                             cout<<"PESO ATOMICO: 231"<<endl;
                             cout<<"DENSIDAD: 15.4   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 15.0  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^2 6d^1 7s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1230 "<<endl;
                             cout<<"ESTADO DE OXIDACION: 5,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.5  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 30   "<<endl;
                            
                             }
                             
	                        
                             
						       void uranio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 92 "<<endl;
                             cout<<"NOMBRE: Uranio  "<<endl;
                             cout<<"SIMBOLO: U"<<endl;
                             cout<<"PESO ATOMICO: 238.03"<<endl;
                             cout<<"DENSIDAD: 19.07   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 12.5  "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^3 6d^1 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3818   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1132  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 6,5,4,3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.7  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 110   "<<endl;
                             cout<<"CALOR DE FUSION: 2.7 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 0.34"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.064  "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.28   "<<endl;
                             }
                             
                            
                             
						      void neptunio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 93 "<<endl;
                             cout<<"NOMBRE: Neptunio  "<<endl;
                             cout<<"SIMBOLO: Np"<<endl;
                             cout<<"PESO ATOMICO: 237"<<endl;
                             cout<<"DENSIDAD: 20.45   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 11.59 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^4 6d^1 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 7  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 644  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4,5,6  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.36  "<<endl;
                             cout<<"CALOR DE FUSION: 3.2 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 8.2"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.063 "<<endl;
                             cout<<"CALOR ESPECIFICO: 0.12  "<<endl;
                             }
                             
                             
                             
						     void plutonio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 94 "<<endl;
                             cout<<"NOMBRE: Plutonio  "<<endl;
                             cout<<"SIMBOLO: Pu"<<endl;
                             cout<<"PESO ATOMICO: 244"<<endl;
                             cout<<"DENSIDAD: 19.816   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 12.32 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^6 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 8  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 3228   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 640  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4,5,6  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.28  "<<endl;
                             cout<<"CALOR DE VAPORIZACION: 344.0  "<<endl;
                             cout<<"CALOR DE FUSION: 2.82 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 7.1"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.0670"<<endl;
                             cout<<"CALOR ESPECIFICO: 0.13  "<<endl;
                             }
                             
                             
                             
						     void americio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 95 "<<endl;
                             cout<<"NOMBRE: Americio  "<<endl;
                             cout<<"SIMBOLO: Am"<<endl;
                             cout<<"PESO ATOMICO: 243"<<endl;
                             cout<<"DENSIDAD: 13.67   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 17.78 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^7 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 9  "<<endl;
                             cout<<"TEMPERATURA DE EBULLICION: 2607   "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1176  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4,5,6  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CALOR DE FUSION: 14.39 "<<endl;
                             cout<<"CONDUCTIVIDAD ELECTRICA: 22"<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.1"<<endl;
                             cout<<"CALOR ESPECIFICO: 0.11  "<<endl;
                             }
                             
                            
                             
						      void curio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 96 "<<endl;
                             cout<<"NOMBRE: Curio  "<<endl;
                             cout<<"SIMBOLO: Cm"<<endl;
                             cout<<"PESO ATOMICO: 247"<<endl;
                             cout<<"DENSIDAD: 13.51   "<<endl;
                             cout<<"VOLUMEN ATOMICO: 18.29 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^7 6d^1 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 10  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1050  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CALOR DE FUSION: 15 "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.1"<<endl;
                             
                             }
                             
                            
                             
						      void berkelio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 97 "<<endl;
                             cout<<"NOMBRE: Berkelio  "<<endl;
                             cout<<"SIMBOLO: Bk "<<endl;
                             cout<<"PESO ATOMICO: 247"<<endl;
                             cout<<"DENSIDAD: 14.78   "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^9  7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 1  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 1050  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3,4  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             
                             
                             }
                             
                            
                             
						       void californio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 98 "<<endl;
                             cout<<"NOMBRE: Californio  "<<endl;
                             cout<<"SIMBOLO: Cf "<<endl;
                             cout<<"PESO ATOMICO: 251"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^10  7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 900  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.1"<<endl;
                             
                             }
                             
                             
                             
						     void einstenio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 99 "<<endl;
                             cout<<"NOMBRE: Einstenio  "<<endl;
                             cout<<"SIMBOLO: Es "<<endl;
                             cout<<"PESO ATOMICO: 252"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^11  7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 3  "<<endl;
                             cout<<"TEMPERATURA DE FUSION: 860  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 3  "<<endl;
                             cout<<"ELECTRONEGATIVIDAD: 1.3  "<<endl;
                             cout<<"CONDUCTIVIDAD TERMICA: 0.1"<<endl;
                             
                             }
                             
                             
                             
						       void fermio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 100 "<<endl;
                             cout<<"NOMBRE: Fermio  "<<endl;
                             cout<<"SIMBOLO: Fm "<<endl;
                             cout<<"PESO ATOMICO: 253"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^12  7s^2  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-31  "<<endl;
                             
                             }
                             
                            
                             
						      void mendelevio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 101 "<<endl;
                             cout<<"NOMBRE: Mendelevio "<<endl;
                             cout<<"SIMBOLO: Md "<<endl;
                             cout<<"PESO ATOMICO: 256"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^13  7s^2  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-32  "<<endl;
                             
                             }
                             
                             
                             
						       void nobelio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 102 "<<endl;
                             cout<<"NOMBRE: Nobelio "<<endl;
                             cout<<"SIMBOLO: No "<<endl;
                             cout<<"PESO ATOMICO: 254"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14  7s^2  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-32  "<<endl;
                             
                             }
                             
                           
                             
						       void lawrencio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 103 "<<endl;
                             cout<<"NOMBRE: Lawrencio "<<endl;
                             cout<<"SIMBOLO: Lw "<<endl;
                             cout<<"PESO ATOMICO: 257"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^1 7s^2  "<<endl;
                             cout<<"ESTADO DE OXIDACION: 2-32  "<<endl;
                          
                             }
                         
                            
                             
						       void ruterfordio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 104 "<<endl;
                             cout<<"NOMBRE: Ruterfordio  "<<endl;
                             cout<<"SIMBOLO: Rf "<<endl;
                             cout<<"PESO ATOMICO: 271 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^1 7s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 4   "<<endl;
                             
                             }
                             
                             	
                             
						      void dibnio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 105 "<<endl;
                             cout<<"NOMBRE: Dubnio  "<<endl;
                             cout<<"SIMBOLO: Dd"<<endl;
                             cout<<"PESO ATOMICO: 272 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^3 7s^2   "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18   "<<endl;
                             
                             }
                             
                             
                             
						     
                             
                              void bohrio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 107 "<<endl;
                             cout<<"NOMBRE: Bohrio  "<<endl;
                             cout<<"SIMBOLO: Bh"<<endl;
                             cout<<"PESO ATOMICO: 274 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^5 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA: 2,8,18  "<<endl;
                            
                             }
                             
                             
                             
                             
                            
                             
						       void meitnerio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 109"<<endl;
                             cout<<"NOMBRE: Meitnerio "<<endl;
                             cout<<"SIMBOLO: Mt"<<endl;
                             cout<<"PESO ATOMICO: 266.1378 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^7 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  9 "<<endl;
                            
                             }
                             
                            
                             
						       void darmstadtio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 110"<<endl;
                             cout<<"NOMBRE: Darmstadtio "<<endl;
                             cout<<"SIMBOLO: Ds"<<endl;
                             cout<<"PESO ATOMICO: 269 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^8 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  10 "<<endl;
                            
                             }
                             
                            
                             
						      void roentgenio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 111"<<endl;
                             cout<<"NOMBRE: Roentgenio "<<endl;
                             cout<<"SIMBOLO: Rg"<<endl;
                             cout<<"PESO ATOMICO: 272 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^1  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  1 "<<endl;
                          
                             }
                             
                           
                             
						       void copernicio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 112"<<endl;
                             cout<<"NOMBRE: Copernicio "<<endl;
                             cout<<"SIMBOLO: Cn"<<endl;
                             cout<<"PESO ATOMICO: 277 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^2  "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  2 "<<endl;
                             
                             }
                             
                             
                             
						     void unutrio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 113"<<endl;
                             cout<<"NOMBRE: Unutrio "<<endl;
                             cout<<"SIMBOLO: Uut"<<endl;
                             cout<<"PESO ATOMICO: 284 "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^2 7p^1 "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  3"<<endl;
                             
                             }
                             
                           
                             
						       void unnilquadium()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 114"<<endl;
                             cout<<"NOMBRE: unnilquadium "<<endl;
                             cout<<"SIMBOLO: unq"<<endl;
                             cout<<"CONFIGURACION ELECTRONICA:  1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^2 7s^2 "<<endl;
                             cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  3"<<endl;
                            
                           
                             }
                             
                            
                             
						      void dubnio()
						         
								  { 
								  cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	      cout<<" "<<endl;
    	                          cout<<"NUMERO ATOMICO: 115"<<endl;
                                  cout<<"NOMBRE: dubnio "<<endl;
                                  cout<<"SIMBOLO: Db"<<endl;
                                  cout<<"NUMERO DE ELECTTRONES DE VALENCIA:  3"<<endl;
                             
                             }
                             
                             
                             
						       void seaborgio()
						        
								  { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
		                         	 cout<<" "<<endl;
		    	                     cout<<"NUMERO ATOMICO: 116"<<endl;
		                             cout<<"NOMBRE: seaborgio "<<endl;
		                             cout<<"SIMBOLO: Sg"<<endl;
		                             
                            
                             }
                              void bohorio()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 117"<<endl;
                             cout<<"NOMBRE: bohorio "<<endl;
                             cout<<"SIMBOLO: Bh"<<endl;
                             
                             }
                              void hassio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 118"<<endl;
                             cout<<"NOMBRE: Hassio "<<endl;
                             cout<<"SIMBOLO: Hs"<<endl;
                             
                             }
                             
                             
                             
						       void ununndecio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 119"<<endl;
                             cout<<"NOMBRE: Ununndecio  "<<endl;
                             cout<<"SIMBOLO:Uun "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^2 7p^6 8s^1  "<<endl;
                            
                             }
                             
	                        
                             
						       void unnunilium()
						          { cout<<"  el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 120"<<endl;
                             cout<<"NOMBRE: Unnunilium "<<endl;
                             cout<<"SIMBOLO:Unn "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^2 7p^6 8s^2  "<<endl;
                            
                             }
                           
                             
						     void unbiunio()
						          { cout<<" el n\243mero del elemento escogido contiene la siguiente informaci\242n:"<<endl;
                         	 cout<<" "<<endl;
    	                     cout<<"NUMERO ATOMICO: 121"<<endl;
                             cout<<"NOMBRE: Unbiunio "<<endl;
                             cout<<"SIMBOLO:Ubu "<<endl;
                             cout<<"CONFIGURACION ELECTRONICA: 1s^2 2s^2 2p^6 3s^2 3p^6 3d^10 4s^2 4p^6  4d^10 5s^2 5p^6 4f^14 5d^10 6s^2 6p^6 5f^14 6d^10 7s^2 7p^6 8s^3 "<<endl;
                             
                             }
     
     
void menugrupo()
{
	int grupo;
     cout<<"los elementos quimicos se dividen en los siguientes grupos"<<endl;
     cout<<""<<endl;
     cout<<"  1. Metales. "<<endl;
     cout<<"  2. Metales ligeros "<<endl;
     cout<<"  3. Metales de transicio "<<endl;
     cout<<"  4. Metoloides."<<endl;
     cout<<"  5. Elementos Representativos."<<endl;
     cout<<"  6. Elementos calc\242genos o anfigenos."<<endl;
     cout<<"  7. Metales alcalinos."<<endl;
     cout<<"  8. Metales tierras raras."<<endl;
     cout<<"  9. No metales." <<endl;
     cout<<"  10. Elementos carbonoides;"<<endl;
     cout<<"  11. Halogenos."<<endl;
     cout<<"  12. Metales alcalinot\202rreos"<<endl;
     cout<<"  13. Otros metales."<<endl;
     cout<<"  14. Elementos t\202rreos"<<endl;
     cout<<"  15. Elementos nitrogenoides"<<endl;
     cout<<"  16. gases nombles."<<endl;
     cout<<""<<endl;
     cout<<"de acuerdo con la anterior informac\241on por favor ingrese el n\243mero del elemento que desea "<<endl;
     cin>>grupo;
       switch(grupo)
    {    
                             case 1: 
                             	 metales();
                             break;
                             
                             case 2:
							  metales_ligeros();
                             break;
                             
							 case 3:
								metales_transicion();
                             break;

                             case 4:    
							    metoloides();
                             break;

                             case 5:    
							  elementos_Representativos();
                             break;

                              case 6:   
							    elementos_calcogenos_anfigenos();
                             break;

							 case 7:    
							    metales_alcalinos();
                             break;
                             
                             case 8:    
							    metales_tierras_raras();
                             break;
                             
							 case 9:    
							     no_metales();
                             break;
                             
                             
							 case 10:    
                                   elementos_carbonoides();
                             break;
                             
                             case 11:    
                                  halogenos();
                             break;
                             
						     
                              case 12:    
                                metales_alcalinoterreos();
                             break;
                             
                             case 13:    
                                  otros_metales();
                             break;
                             
                             case 14:   
                                  elementos_torreos();
                             break;
                             
                             case 15:   
                                 elementos_nitrogenoides();
                             break;
                            
                             case 16:
                                 gases_nombles();
                             break;
                        
                             
						     
                  default: cout<<" El n\243mero de grupo iongrasado no es valido"<<endl;
                   break;
                   } 
 }
 void metales()
{ 
}
 void  metales_ligeros()
 {
 }
 void metales_transicion()
{
}
  void metoloides()
 {
 }
 void elementos_Representativos()
{
}
  void elementos_calcogenos_anfigenos()
 {
 }
 void metales_alcalinos()
{
}
  void metales_tierras_raras()
 {
 }
  void no_metales()
 {
 }
  void elementos_carbonoides()
 {
 }
 void halogenos()
{
}
 void metales_alcalinoterreos(){
}
 void otros_metales()
{
}
 void elementos_torreos(){
	
	
	
	}
 void elementos_nitrogenoides()
{
}
 void gases_nombles()
 {
 }
                            
