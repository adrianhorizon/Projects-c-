#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

using namespace std;
int main()
{
    system ("color F3");
    
    string ciudad;
	int  peaje;
	char letra, opcion, opcion2, respuesta;
	
	cout<<"\t\t\tPEAJE ADMINISTRATIVO COLOMBIANO.\n\n\n";
	
	cout<<" a) tipo de vehiculo."<<endl;
	cout<<" b) tarifa basica."<<endl;
	cout<<" c) salir. "<<endl;
	cin>>opcion;
	
	system("cls");
   	letra = toupper(opcion);
    
	switch(letra)
	{
        
		case 'A': cout<<"\t\t\t TIPO DE VEHICULO. \n\n\n";
		
				cout<<" a) tractomula."<<endl;
				cout<<" b) camion. "<<endl;
				cout<<" c) automovil."<<endl;
				cin>>opcion2;

				
				system("cls");
				letra = toupper(opcion2);
				
				switch(letra)
				{
					case 'A': cout<<"\t\t\t TRACTOMULAS\n\n\."<<endl;
					          cout<<"eliga ciudad proveniente.\n\n ";
					          cout<<"( B ) bogota."<<endl;
					          cout<<" ( M ) medellin.\n\n";
					          cout<<" ( O ) otras ciudades  ";
				              cin>>opcion;
				              system("cls");
				              
			              	  letra = toupper(opcion);
				              switch(letra)
				              {
                                 case 'B': cout<<"\tBOGOTA\n\n\n";
                                           peaje = (10000/100*20)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                           break;
                                 case 'M': cout<<"\tMEDELLIN.\n\n\n";
                                           peaje = (10000/100*25)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                 break;
                                 case 'O': cout<<"\n\nINGRESE CIUDAD:\t";
                                           cin>>ciudad;
                                           
                                           if((ciudad == "san andres") || (ciudad == "santa marta"))
                                           {
										       peaje = (10000/100*15)+10000;
                                               cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
                                           }
                                           else
                                           {
                                           	 peaje = (10000/100*15)+10000;
                                             cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
										   }
                                 break;
               
                                 default: cout<<"se esperaba una opcion valida."<<endl;
                              }
				                      
					break;
					case 'B': cout<<"\t\t\t CAMIONES.\n\n\n"<<endl;
					
					          cout<<"eliga ciudad proveniente.\n\n ";
					          cout<<"( B ) bogota."<<endl;
					          cout<<" ( M ) medellin.\n\n";
					          cout<<" ( O ) otras ciudades  ";
				              cin>>opcion;
				              system("cls");
				              
			              	  letra = toupper(opcion);
				              switch(letra)
				              {
                                 case 'B': cout<<"\tBOGOTA\n\n\n";
                                           peaje = (10000/100*20)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                           break;
                                 case 'M': cout<<"\tMEDELLIN.\n\n\n";
                                           peaje = (10000/100*15)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                 break;
                                 case 'O': cout<<"\n\nINGRESE CIUDAD:\t";
                                           cin>>ciudad;
                                           
                                           if((ciudad == "san andres") || (ciudad == "santa marta"))
                                           {
										     peaje = (10000/100*15)+10000;
                                             cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
                                           }
                                           else
                                           {
                                           	 peaje = (10000/100*15)+10000;
                                             cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
										   }
                                 break;
               
                                 default: cout<<"se esperaba una opcion valida."<<endl;
                              }
					          
					break;
					case 'C': cout<<"\t\t\t AUTOMOVILES.\n\n\n"<<endl;
					
					          cout<<"eliga ciudad proveniente.\n\n ";
					          cout<<"( B ) bogota."<<endl;
					          cout<<" ( M ) medellin.\n\n";
					          cout<<" ( O ) otras ciudades  ";
				              cin>>opcion;
				              system("cls");
				              
			              	  letra = toupper(opcion);
				              switch(letra)
				              {
                                 case 'B': cout<<"\tBOGOTA\n\n\n";
                                           peaje = (10000/100*10)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                           break;
                                 case 'M': cout<<"\tMEDELLIN.\n\n\n";
                                           peaje = (10000/100*5)+10000;
                                           cout<<"usted paga "<<peaje<<endl;
                                 break;
                                 case 'O': cout<<"\n\nINGRESE CIUDAD:\t";
                                           cin>>ciudad;
                                           
                                           if((ciudad == "san andres") || (ciudad == "santa marta"))
                                           {
										   	  peaje = (10000/100*15)+10000;
                                              cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
                                           }
                                           else
                                           {
                                           	 peaje = (10000/100*15)+10000;
                                             cout<<"\n\nen la ciudad de "<<ciudad<<" usted paga "<<peaje<<endl;
										   }
                                 break;
               
                                 default: cout<<"se esperaba una opcion valida."<<endl;
                              }
					          
					break;
					default: cout<<"se esperaba una opcion valida."<<endl;
					               
				}
				
		break;
	
		case 'B': cout<<"\n\n LA TARIFA BASICA ES DE 10.000 + IVA.\n\n\n";           
		break;
	
		case 'C': return 0;
		
	    default: cout<<"se esperaba una opcion valida."<<endl;
    	         
 	}
 	cout<<"volver al menu.   S/N"<<endl;
 	cin>>respuesta;
 	system("cls");
	letra = toupper(respuesta);
	
 	if(letra == 'S')
 	{
 		return main();
    }
    else if(letra == 'N')
    {
        return 0;
    }
    else if(letra !='N')
 	{
 		cout<<"se esperaba una opcion valida."<<endl;
 		cout<<"seccion cancelada....";
 		return 0;
	}


    system("PAUSE");

}
