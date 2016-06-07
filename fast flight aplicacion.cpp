#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <ctype.h>
#include <cstring>
#include <windows.h>
#include <time.h>

using namespace std;

void fecha();
void carga();
void gotoxy(short x, short y);

struct registro
{  
    string nombre, apellido, ciudad_actual, destino, mes, direccion, banco, reserva;
	long long celular, fijo, cuenta_bancaria, documento;
	int anio, dia;
	char correo[100]; 

};
registro dato;
int main()
{
	system("color F3");
    carga();
    char opcion, letra, volver;

   system("cls");
   gotoxy(-50,1);
   fecha();
   cout<<endl;
   cout<<"\t\t\t COMPRA DE TIQUETES AEREOS."<<endl;
   cout<<"\t\t\t\t FAST FLIGHT.\n\n\n"<<endl;
   
   cout<<"a) INTRODUCCI"<<char(224)<<"N A FAST FLIGHT."<<endl;
   cout<<"b) INICIA TU REGISTRO."<<endl;
   cout<<"c) COMPRA ONLINE."<<endl;
   cout<<"d) SERVICIO CHECK IN.\n\n";
   cout<<"e) Salir."<<endl;
   cin>>opcion;
   system("cls");
   
   letra = toupper(opcion);
   switch(letra)
   {
		case 'A': gotoxy(-50,1);
                  fecha();
                  cout<<endl;
				  cout<<"\t\t\tINTRODUCCION A FAST FLIGHT\n\n\n";
                  cout<<"a) mision y vision."<<endl;
                  cout<<"b) Manual de usuario."<<endl;
                  cout<<"c) retornar al menu principal."<<endl;
                  cin>>opcion;
                  
                  letra = toupper(opcion);
                  switch(opcion)
                  {
                     case 'A': cout<<"llama el archivo"<<endl;  
					 			{
					 				system ("Misión, vision, valores.dcox");
					 				system ("C:\\Users\\SALA INTERNET_K\\Desktop\\fast");
					 			
					 			}     
                     break;
                     case 'B': 	cout<<"llama el archivo"<<endl;
                     			{
					 				system ("Manual de usuario (fast flight)");
					 				system ("C:\\Users\\SALA INTERNET_K\\Desktop\\fast");
					 			
					 			}  
                     break;
                     case 'C': return main();
                  }
         break;
         case 'B': 
         			gotoxy(-50,1);
                    fecha();
                    cout<<endl;
		 			char *pch;
		 
		           cout<<"\t\t\t\t FAST FLIGHT"<<endl;
                   cout<<"\t Alcansando los sue"<<char(164)<<"os de nuestros colombianos.\n\n";
   		           
                   cout<<"REGISTRO.\n\n\n";
                   cout<<"nombre:\t\t";
                   cin>>dato.nombre;
                   cout<<"apellido:\t";
                   cin>>dato.apellido;
                   cout<<"documento:\t";
                   cin>>dato.documento;
                   cout<<"celular:\t";
                   cin>>dato.celular;
                   cout<<"N"<<char(167)<<" fijo:\t";
                   cin>>dato.celular;
                   cout<<"correo:\t\t";
                   cin>>dato.correo;
                   cout<<"\n\n";
                   
                   pch = strchr(dato.correo, '@');
				
                   while(pch == "@")
                   {
                     cout<<"su correo no es valido."<<endl;
                   	 cout<<"correo: ";
                     cin>>dato.correo;  	
                   }
                   
          break;
          case 'C': 
          			gotoxy(-50,1);
                    fecha();
                    cout<<endl;
                    char duda, letra;
  		            cout<<"COMPRA ONLINE.\n\n\n";
                    cout<<"sus datos: \n\n";
   		           
                    cout<<"Nombre:\t\t"<<dato.nombre<<endl;
                    cout<<"apellido:\t"<<dato.apellido<<endl;
                    cout<<"documento:\t"<<dato.documento<<endl;
                    cout<<"correo:\t\t"<<dato.correo<<endl;
                    cout<<"\n\n\n";
                    
                    cout<<"Ingrese ciudad actual:\t";
	                cin>>dato.ciudad_actual;
	                cout<<"Ingrese ciudad de destino:\t";
	                cin>>dato.destino;
	                cout<<"\n\n";
                    
                    cout<<"Desea ver fechas disponibles en nuestro portal? S./N."<<endl;
                    cin>>duda;
                    letra = toupper(duda);
                    system("cls");
                    
                    switch(letra)
                    {
					   case 'S':
                                cout<<"Ingrese fecha limite de aproximacion de vuelos."<<endl;
                                cout<<"D./  M./  AA."<<endl;
                                cin>>dato.dia>>dato.mes>>dato.anio;
                    
                                if((dato.mes == "enero")||(dato.mes == "marzo")||(dato.mes == "mayo")||(dato.mes == "julio")||(dato.mes == "agosto")||(dato.mes == "octubre")||(dato.mes == "diciembre"))
                                {
                    	            if((dato.dia >= 1)||(dato.dia <=10))
                    	            { 
									    int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (1+rand()%(10-1));
                    	             	numero2 = (1+rand()%(10-1));
                    	             	numero3 = (1+rand()%(10-1));
                    	             	numero4 = (1+rand()%(10-1));
                    	             	numero5 = (1+rand()%(10-1));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	    switch(letra)
					               	    {
					               	       case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(1000-100));
											  		 valor_tiquete = (350000+rand()%(800000-350000));
											  		 
											  		 cout<<"\n\n\n";
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
											break;
											case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      XTMP-84"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										 break;
										 default: cout<<"se espara una opcion valida.\n\n";
								
										}
									}
									else if((dato.dia > 10)||(dato.dia <=20))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									
                    	             	numero = (20+rand()%(20-10));
                    	             	numero2 = (20+rand()%(20-10));
                    	             	numero3 = (20+rand()%(20-10));
                    	             	numero4 = (20+rand()%(20-10));
                    	             	numero5 = (20+rand()%(20-10));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     483-CMO"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      LTMP-36"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ZTMP-42"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      UTMP-28"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
								    else if((dato.dia > 20)||(dato.dia <=25))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (25+rand()%(25-20));
                    	             	numero2 = (25+rand()%(25-20));
                    	             	numero3 = (25+rand()%(25-20));
                    	             	numero4 = (25+rand()%(25-20));
                    	             	numero5 = (25+rand()%(25-20));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      "<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     ZTMP-42"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
								    else if((dato.dia > 25)||(dato.dia <=31))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (31+rand()%(31-25));
                    	             	numero2 = (31+rand()%(31-25));
                    	             	numero3 = (31+rand()%(31-25));
                    	             	numero4 = (31+rand()%(31-25));
                    	             	numero5 = (31+rand()%(31-25));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     483-CMO"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
					            }
					            else if((dato.mes == "febrero")||(dato.mes == "abril")||(dato.mes == "junio")||(dato.mes == "septiembre")||(dato.mes == "noviembre"))
                                {
                    	            if((dato.dia >= 1)||(dato.dia <=10))
                    	            { 
									    int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (1+rand()%(10-1));
                    	             	numero2 = (1+rand()%(10-1));
                    	             	numero3 = (1+rand()%(10-1));
                    	             	numero4 = (1+rand()%(10-1));
                    	             	numero5 = (1+rand()%(10-1));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	    switch(letra)
					               	    {
					               	       case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(1000-100));
											  		 valor_tiquete = (350000+rand()%(800000-350000));
											  		 
											  		 cout<<"\n\n\n";
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
											break;
											case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      XTMP-84"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										 break;
										 default: cout<<"se espara una opcion valida.\n\n";
								
										}
									}
									else if((dato.dia > 10)||(dato.dia <=20))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									
                    	             	numero = (20+rand()%(20-10));
                    	             	numero2 = (20+rand()%(20-10));
                    	             	numero3 = (20+rand()%(20-10));
                    	             	numero4 = (20+rand()%(20-10));
                    	             	numero5 = (20+rand()%(20-10));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     483-CMO"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      LTMP-36"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ZTMP-42"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      UTMP-28"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
								    else if((dato.dia > 20)||(dato.dia <=25))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (25+rand()%(25-20));
                    	             	numero2 = (25+rand()%(25-20));
                    	             	numero3 = (25+rand()%(25-20));
                    	             	numero4 = (25+rand()%(25-20));
                    	             	numero5 = (25+rand()%(25-20));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      "<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     ZTMP-42"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
								    else if((dato.dia > 25)||(dato.dia <=31))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (31+rand()%(31-25));
                    	             	numero2 = (31+rand()%(31-25));
                    	             	numero3 = (31+rand()%(31-25));
                    	             	numero4 = (31+rand()%(31-25));
                    	             	numero5 = (31+rand()%(31-25));
                    	             	
                    		            cout<<"tiquetes. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opcion.   ";
					               	    cin>>opcion;
					               	    system("cls");
					               	    
					               	    letra = toupper(opcion);
					               	     switch(letra)
					               	     {
					               	        case 'A': 
                                                     gotoxy(-50,1);
                                                     fecha();
                                                     cout<<endl;
											  		 char compra, letra, pago;
											  		 int reserva, valor_tiquete;
											  		 reserva = (100+rand()%(100-1000));
										  		     valor_tiquete = (600000+rand()%(2000000-600000));
										  		     
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing-"<<reserva<<endl;
											         cout<<"codigo de aerolinea:     483-CMO"<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete: "<< valor_tiquete<<"\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N    ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
								                 	}
								            case 'B':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compra4,letra4,pago4;
											  		    int reservas, valor_tiquetes;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (180000+rand()%(900000-180000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      UTMP-28"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago4);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            return main();
                                                        }
														
													 }
										    break;
										    case 'C':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprav, letrav, pagov;
											  		    int reservav, valor_tiquetev;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (280000+rand()%(400000-280000));
											  		 
											  		 cout<<"\n\n\n";
						                             cout<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;  
											         cout<<"\n\n";
											         cout<<"numero de reserva :      ATMP-34"<<endl;
											         cout<<"numero de vuleo:         boing"<<reserva<<endl;
											         cout<<"codigo de aerolinea      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										    break;
										    case 'D':   
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char comprag, letrag, pagog;
											  		    int reservag, valor_tiqueteg;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (100000+rand()%(500000-100000));
											  		 
											  		    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
											            cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese numero de cuenta bancaria: ";
													 	cin>>dato.cuenta_bancaria;
													 	cout<<"ingrese banco proveniente: ";
													 	cin>>dato.banco;
													 	cout<<"\n\n";
													 	cout<<"desea aceptar su pago?  S/N";
													 	cin>>pago;
													 	
													 	letra = toupper(pago);
													 	if(letra == 'S')
													 	{
													 		cout<<"llama el archivo"<<endl;
														}
														else
														{
                                                            cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                        }
														
													 }
										      break;
										      case 'E': 
                                                        gotoxy(-50,1);
                                                        fecha();
                                                        cout<<endl;
											  		    char compral, letral, pagol;
											  		    int reserval, valor_tiquetel;
											  		    reserva = (100+rand()%(1000-100));
											  		    valor_tiquete = (1000000+rand()%(2000000-1000000));
											  		 
							  		                    cout<<"\n\n\n";
                                                        cout<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											            cout<<"\n\n";
											            cout<<"numero de reserva :      ATMP-34"<<endl;
										                cout<<"numero de vuleo:         boing"<<reserva<<endl;
											            cout<<"codigo de aerolinea      "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
										                cout<<" valor del tiquete:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea comprar para su tiquete para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese numero de cuenta bancaria: ";
													 	    cin>>dato.cuenta_bancaria;
													 	    cout<<"ingrese banco proveniente: ";
													 	    cin>>dato.banco;
													 	    cout<<"\n\n";
													 	    cout<<"desea aceptar su pago?  S/N";
													 	    cin>>pago;
													 	
													 	    letra = toupper(pago);
													 	    if(letra == 'S')
													 	    {
													 		   cout<<"llama el archivo"<<endl;
														    }
														    else
														    {
                                                                cout<<"A sido cancelada la transsaccion bancaria....\n\n\n";
                                                            }
														
													   }
										     break;
										     default: cout<<"se espara una opcion valida.\n\n";
								
										   }
								    }
                               }
                    }
                    case 'N': return main();
                    break;
      case 'D': gotoxy(-50,1);
                fecha();
                cout<<endl;
		  	    cout<<"\t\t\t SERVICIO CHECK IN.\n\n\n";
		  	    
		  	    cout<<"ingrese numero de reserva: ";
		  	    cin>>dato.reserva;
		  	    cout<<"\n\n\n";
		  	    
		  	    if(dato.reserva == "ATMP-34")
		  	    {
		  	    	cout<<"AVIANCA.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	     }
		  	     else if(dato.reserva == "UTMP-28")
		  	    {
		  	    	cout<<"COPA AIRLINES.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	     }
		  	     else if(dato.reserva == "ZTMP-42")
		  	    {
		  	    	cout<<"LAN.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	     }
		  	     else if(dato.reserva == "XTMP-84")
		  	    {
		  	    	cout<<"VIVA COLOMBIA.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	     }
		  	     else if(dato.reserva == "LTMP-36")
		  	     {
		  	    	cout<<"SATENA.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	     }
			
      break;
      case 'E': gotoxy(-50,1);
                fecha();
                cout<<endl;
		  	    return 0;
	  default: cout<<"se esperaba una opcion valida."<<endl;
   }
	cout<<"volver al menu.   S/N";
	cin>>volver;
	system("cls");
	
	letra = toupper(volver);
	if(letra == 'S')
	{
		return main();
	}
	else
	{
	   return 0;
	}  system("pause");
	
}

void fecha()
{
	time_t t,i;
     char *p;
     i = time (&t);
     p = ctime (&i);
     cout<<"          "<<p;						
}

void carga()//funcion encargada de de mostrar la barra de carga del programa
{
   int carga, m=6;
   system("cls");
   gotoxy (30,5);
   cout<<"Espere un momento. "<<endl;
   Sleep(22);
 for(carga=15;carga<=75; carga++){
  m++;
     gotoxy (m,10);
     cout<<char(219);
  Sleep(22);
 }  
 cout<<"\a";
 system("cls");
}

void gotoxy(short x, short y) {
 HANDLE hConsoleOutput;
 COORD Cursor_Pos = {x, y};
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
