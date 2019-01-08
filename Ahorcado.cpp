#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void parte1();
void parte2();
void parte3();
void parte4();
void parte5();
void parte6();
void final();
void gano();

char LetraIng(int PalabraAle, char *PalabraFun);

static int oportunidad=6;

int main(){

	int opcion;
	string jugador;
	
	const char *Matematicas[] ={
          			"factorial","suma","resta","division"
    };
    const char *Sociales[] ={
          			"america","brazil"
    };
	const char *Ciencias[] ={
          			"helio","quimica"
    };
    const char *Espanol[] ={
          			"sustantivo","texto"
    };
	const char *palabra;
	char *LetrasPalabra;
	char letra;
	int i,PalabrasAlert,intentos,acierto,CaracterC,inicio;         
				
	srand(time(NULL)); //srand un random para la libreria time haciendo q sea null y valide   
	const int salir = 9;
	int seguir = 1;
	
	do{
		system("cls"); //limpia pantalla
		cout<<"Digite el nombre del jugador:";
		cin>>jugador;
		cout<<"\nBIENVENIDO AL JUEGO DEL AHORCADO\n\n";
		cout<<"\n[1]Matematicas";
		cout<<"\n[2]Ciencias sociales";
		cout<<"\n[3]Ciencias naturales";
		cout<<"\n[4]Español";
		cout<<"\n[5]Salir del juego";
		cout<<"\nDigite opcion:";
		cin>>opcion;
		
			switch(opcion){
				case 1:
					system("cls");
				     do{
				          if (seguir == salir){
				               acierto = 1000;
				               break;
				          }     	
					     intentos = 0;
				      	 acierto = 0;
				         inicio = 0;         
				
				         palabra = Matematicas[rand()%(sizeof(Matematicas)/sizeof(Matematicas[0]))];//asigna un random para las palabras guardadas en matematicas
					     PalabrasAlert = strlen(palabra);
					     LetrasPalabra = (char*)malloc(PalabrasAlert);
					     for(i=0;i<PalabrasAlert;i++){
					         LetrasPalabra[i]= '-';
				          }
				          do{
				               if(seguir==salir){
				                    acierto = 1000;
				                    break;
				               }                      
						     	if(inicio==0){
				                    cout<<"\nTiene 6 oportunidades para acertar: "<<endl;
				                    inicio=1;          
				               		}else{
				                    	cout<<"\nOportunidades: "<<(oportunidad-intentos)<<endl;
				               		}
						for (i=0;i<PalabrasAlert;i++){
						    cout<<" "<<LetrasPalabra[i];
						}
				          letra=LetraIng(PalabrasAlert,LetrasPalabra);//llama y asigna a letra palabras alerta y la cantidad de palabaras
					
						seguir=letra-'0';
						cout<<endl;
						CaracterC=0;
						for (i=0;i<PalabrasAlert;i++){
							if(toupper(letra)==toupper(palabra[i])){
				                    CaracterC=1;
				                    LetrasPalabra[i]=palabra[i];
				                    acierto++;
							}
						}
						if(CaracterC == 0){
				               intentos ++;
							cout<<"Letra no encontrada"<<endl;
							switch(intentos){
								case 1: 
				                     parte1();
				                break;
								case 2:
				                     parte2();
				   	            break;
								case 3:
				           		     parte3();
				   	            break;
								case 4:
				           		     parte4();
				                break;
								case 5:
				           		     parte5();
				                break;
								case 6:
				           		     parte6();
				  	            break;
								default:
				                        cout<<"Opcion mal ingresada\n";
				                        cout<<"presione enter\n\n";
								break;
							}
						}
					}while((intentos<oportunidad)&&(acierto<PalabrasAlert));
					
					if(acierto==PalabrasAlert){
					    gano();
			    		cout<<"\nel jugador:"<<jugador<<endl;
				     } 
					else if(acierto<PalabrasAlert){
				         final();                               
				         cout<< "\nHas perdido"<<endl;
				         cout<< "\nLa palabra secreta es: "<<palabra<<endl;
				     }else if(acierto>PalabrasAlert){
				         cout << "\nSaliendo del programa!" << endl;  
				     }
				     cout<<"\nDigite [9] para salir"<<endl;
				     system("pause");                    
					}while (seguir!=9);           	
					system("pause");           
					return 9;
				break;
				case 2:
					system("cls");
					do{
				          if (seguir == salir){
				               acierto = 1000;
				               break;
				          }     	
					     intentos = 0;
				      	 acierto = 0;
				         inicio = 0;         
				
				         palabra = Sociales[rand()%(sizeof(Sociales)/sizeof(Sociales[0]))];
					     PalabrasAlert = strlen(palabra);
					     LetrasPalabra = (char*)malloc(PalabrasAlert);
					     for(i=0;i<PalabrasAlert;i++){
					         LetrasPalabra[i]= '-';
				          }
				          do{
				               if(seguir==salir){
				                    acierto = 1000;
				                    break;
				               }                      
						     	if(inicio==0){
				                    cout<<"\nTiene 6 oportunidades para acertar: "<<endl;
				                    inicio=1;          
				               		}else{
				                    	cout<<"\nOportunidades: "<<(oportunidad-intentos)<<endl;
				               		}
						for (i=0;i<PalabrasAlert;i++){
						    cout<<" "<<LetrasPalabra[i];
						}
				          letra=LetraIng(PalabrasAlert,LetrasPalabra);
					
						seguir=letra-'0';
						cout<<endl;
						CaracterC=0;
						for (i=0;i<PalabrasAlert;i++){
							if(toupper(letra)==toupper(palabra[i])){
				                    CaracterC=1;
				                    LetrasPalabra[i]=palabra[i];
				                    acierto++;
							}
						}
						if(CaracterC == 0){
				               intentos ++;
							cout<<"Letra no encontrada"<<endl;
							switch(intentos){
								case 1: 
				                     parte1();
				                break;
								case 2:
				                     parte2();
				   	            break;
								case 3:
				           		     parte3();//llama al metodo donde esta el dibujo
				   	            break;
								case 4:
				           		     parte4();
				                break;
								case 5:
				           		     parte5();
				                break;
								case 6:
				           		     parte6();
				  	            break;
								default:
				                        cout<<"Opcion mal ingresada\n";
				                        cout<<"presione enter\n\n";
								break;
							}
						}
					}while((intentos<oportunidad)&&(acierto<PalabrasAlert));
					
					if(acierto==PalabrasAlert){
					    gano();
						cout<<"\nel jugador:"<<jugador<<endl;	    
				     } 
					else if(acierto<PalabrasAlert){
				         final();                               
				         cout<< "\nHas perdido"<<endl;
				         cout<< "\nLa palabra secreta es: "<<palabra<<endl;
				     }else if(acierto>PalabrasAlert){
				         cout << "\nSaliendo del programa!" << endl;  
				     }
				     cout<<"\nDigite [9] para salir"<<endl;
				     system("pause");                    
					}while (seguir!=9);           	
					system("pause");           
					return 9;
				break;
				case 3:
					system("cls");
					do{
				          if (seguir == salir){
				               acierto = 1000;
				               break;
				          }     	
					     intentos = 0;
				      	 acierto = 0;
				         inicio = 0;         
				
				         palabra = Ciencias[rand()%(sizeof(Ciencias)/sizeof(Ciencias[0]))];
					     PalabrasAlert = strlen(palabra);
					     LetrasPalabra = (char*)malloc(PalabrasAlert);
					     for(i=0;i<PalabrasAlert;i++){
					         LetrasPalabra[i]= '-';
				          }
				          do{
				               if(seguir==salir){
				                    acierto = 1000;
				                    break;
				               }                      
						     	if(inicio==0){
				                    cout<<"\nTiene 6 oportunidades para acertar: "<<endl;
				                    inicio=1;          
				               		}else{
				                    	cout<<"\nOportunidades: "<<(oportunidad-intentos)<<endl;
				               		}
						for (i=0;i<PalabrasAlert;i++){
						    cout<<" "<<LetrasPalabra[i];
						}
				          letra=LetraIng(PalabrasAlert,LetrasPalabra);
					
						seguir=letra-'0';
						cout<<endl;
						CaracterC=0;
						for (i=0;i<PalabrasAlert;i++){
							if(toupper(letra)==toupper(palabra[i])){
				                    CaracterC=1;
				                    LetrasPalabra[i]=palabra[i];
				                    acierto++;
							}
						}
						if(CaracterC == 0){
				               intentos ++;
							cout<<"Letra no encontrada"<<endl;
							switch(intentos){
								case 1: 
				                     parte1();
				                break;
								case 2:
				                     parte2();
				   	            break;
								case 3:
				           		     parte3();
				   	            break;
								case 4:
				           		     parte4();
				                break;
								case 5:
				           		     parte5();
				                break;
								case 6:
				           		     parte6();
				  	            break;
								default:
				                        cout<<"Opcion mal ingresada\n";
				                        cout<<"presione enter\n\n";
								break;
							}
						}
					}while((intentos<oportunidad)&&(acierto<PalabrasAlert));
					
					if(acierto==PalabrasAlert){
					    gano();
						cout<<"\nel jugador:"<<jugador<<endl;	    
				     } 
					else if(acierto<PalabrasAlert){
				         final();                               
				         cout<< "\nHas perdido"<<endl;
				         cout<< "\nLa palabra secreta es: "<<palabra<<endl;
				     }else if(acierto>PalabrasAlert){
				         cout << "\nSaliendo del programa!" << endl;  
				     }
				     cout<<"\nDigite [9] para salir"<<endl;
				     system("pause");                    
					}while (seguir!=9);           	
					system("pause");           
					return 9;
					
				break;
				case 4:
					system("cls");
					do{
				          if (seguir == salir){
				               acierto = 1000;
				               break;
				          }     	
					     intentos = 0;
				      	 acierto = 0;
				         inicio = 0;         
				
				         palabra = Espanol[rand()%(sizeof(Espanol)/sizeof(Espanol[0]))];
					     PalabrasAlert = strlen(palabra);
					     LetrasPalabra = (char*)malloc(PalabrasAlert);
					     for(i=0;i<PalabrasAlert;i++){
					         LetrasPalabra[i]= '-';
				          }
				          do{
				               if(seguir==salir){
				                    acierto = 1000;
				                    break;
				               }                      
						     	if(inicio==0){
				                    cout<<"\nTiene 6 oportunidades para acertar: "<<endl;
				                    inicio=1;          
				               		}else{
				                    	cout<<"\nOportunidades: "<<(oportunidad-intentos)<<endl;
				               		}
						for (i=0;i<PalabrasAlert;i++){
						    cout<<" "<<LetrasPalabra[i];
						}
				          letra=LetraIng(PalabrasAlert,LetrasPalabra);
					
						seguir=letra-'0';
						cout<<endl;
						CaracterC=0;
						for (i=0;i<PalabrasAlert;i++){
							if(toupper(letra)==toupper(palabra[i])){
				                    CaracterC=1;
				                    LetrasPalabra[i]=palabra[i];
				                    acierto++;
							}
						}
						if(CaracterC == 0){
				               intentos ++;
							cout<<"Letra no encontrada"<<endl;
							switch(intentos){
								case 1: 
				                     parte1();
				                break;
								case 2:
				                     parte2();
				   	            break;
								case 3:
				           		     parte3();
				   	            break;
								case 4:
				           		     parte4();
				                break;
								case 5:
				           		     parte5();
				                break;
								case 6:
				           		     parte6();
				  	            break;
								default:
				                        cout<<"Opcion mal ingresada\n";
				                        cout<<"presione enter\n\n";
								break;
							}
						}
					}while((intentos<oportunidad)&&(acierto<PalabrasAlert));
					
					if(acierto==PalabrasAlert){
					    gano();
						cout<<"\nel jugador:"<<jugador<<endl;	    
				     } 
					else if(acierto<PalabrasAlert){
				         final();                               
				         cout<< "\nHas perdido"<<endl;
				         cout<< "\nLa palabra secreta es: "<<palabra<<endl;
				     }else if(acierto>PalabrasAlert){
				         cout << "\nSaliendo del programa!" << endl;  
				     }
				     cout<<"\nDigite [9] para salir"<<endl;
				     system("pause");                    
					}while (seguir!=9);           	
					system("pause");           
					return 9;
				break;
				case 5:
					return 0;
				break;
			
		}	
		if(opcion!=5){
            system("PAUSE");
        } 
    }while(opcion != 5); 
    system("PASUE");
    return 0;	
} 

void parte1(){
     system("cls");    
     cout<< "\n---------------------";    	
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n        ________|__________";
}

void parte2(){
     system("cls"); 
     cout<< "\n---------------------";    	
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n                |   ";
	 cout << "\n        ________|__________";
}

void parte3(){
     system("cls");           
     cout<< "\n---------------------";    	
	 cout << "\n          |---------|";
	 cout << "\n          |         |";
	 cout << "\n          |         |";
	 cout << "\n          |         |";
	 cout << "\n          |         |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n            ________|__________";
}

void parte4(){
     system("cls");
     cout<< "\n---------------------";    	
	 cout << "\n      ,,,,|---------|";
	 cout << "\n     /   '|         |";
	 cout << "\n    /.. / |         |";
	 cout << "\n   ( c  D |         |";
	 cout << "\n    \\- '\\ |       |";
	 cout << "\n     `-'\\)\\       |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n            ________|__________";
}

void parte5(){
     system("cls");  
     cout<< "\n---------------------" ;    	
	 cout << "\n      ,,,,|---------|";
	 cout << "\n     /   '|         |";
	 cout << "\n    /.. / |         |";
	 cout << "\n   ( c  D |         |";
	 cout << "\n    \\- '\\ |       |";
	 cout << "\n     `-'\\)\\       |";
	 cout << "\n        |_ \\       |";
	 cout << "\n        |U \\\\     |";
	 cout << "\n       (__,//       |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n            ________|__________";
}

void parte6(){
     system("cls");         
     cout<< "\n---------------------";    	
	 cout << "\n      ,,,,|---------|";
	 cout << "\n     /   '|         |";
	 cout << "\n    /.. / |         |";
	 cout << "\n   ( c  D |         |";
	 cout << "\n    \\- '\\ |       |";
	 cout << "\n     `-'\\)\\       |";
	 cout << "\n        |_ \\       |";
	 cout << "\n        |U \\\\     |";
	 cout << "\n       (__,//       |";
	 cout << "\n       |. \\/       |";
	 cout << "\n       LL__I        |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n            ________|__________";
}

void final(){ //metodos 
     system("cls");
     cout<< "\n---------------------";    	
	 cout << "\n      ,,,,|---------|";
	 cout << "\n     /   '|         |";
	 cout << "\n    /.. / |         |";
	 cout << "\n   ( c  D |         |";
	 cout << "\n    \\- '\\ |       |";
	 cout << "\n     `-'\\)\\       |";
	 cout << "\n        |_ \\       |";
	 cout << "\n        |U \\\\     |";
	 cout << "\n       (__,//       |";
	 cout << "\n       |. \\/       |";
	 cout << "\n       LL__I        |";
	 cout << "\n        |||         |";
	 cout << "\n        |||         |";
	 cout << "\n     ,,-``'\\       |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n                    |";
	 cout << "\n            ________|__________\n";
}

void gano(){
	system("cls");
	cout<<"Felicidades ha ganado";
}

char LetraIng(int PalabraAle,char *PalabraFun){ 
int DigiteLetra=1,i;
char LetraTeclado;

	do{
		int letraexiste = 0;
		cout<<"\nDigite una letra: ";
		fflush(stdout); //Limpia el buffer utilizado por la entrada estandar, en este caso, las palabras
		LetraTeclado=getche(); 
		for(i=0;i<PalabraAle;i++){
			if(LetraTeclado==PalabraFun[i]){
                            cout<<"\n\nLa letra ya fue digitada: "<<LetraTeclado<<endl;
				            letraexiste = 1;
			}
		}
		if(letraexiste==1){
                        DigiteLetra = 1;
        }else{
              DigiteLetra = 0;
     }
	}
	while(DigiteLetra==1); //si se cumple condicioin asigna letra mas 1 para que no se repita
	return LetraTeclado; //devuelve a que ingrese letra
} 
