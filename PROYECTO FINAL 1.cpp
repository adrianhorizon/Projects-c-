#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <ctype.h>
#include <cstring>
#include<fstream>
#include <windows.h>
#include <time.h>

using namespace std;

void imprimirC();
void datosC();
void fecha();
void carga();
void admin();
void gotoxy(short x, short y);    
void imagen1();
void imagen2();
void letra1();//DECLARACIÓN Función de la letra 1 " U ", logo universidad
void letra2();//DECLARACIÓN Función de la letra 2 " A ", logo universidad
void letra3();//DECLARACIÓN Función de la letra 3 " N ", logo universidad
void totalpantallas();
void pant(int x,int y);
void marco();
void total();
void menu();
void menuP();
void usuarioD();
void archivo();
void AD();
struct registro
{  
    string nombre, apellido, ciudad_actual, destino, mes, direccion, banco, reserva;
	long long celular, fijo, cuenta_bancaria, documento;
	int anio, dia,vehiculo;
	char correo[100];
	string sedan,camioneta,van,bus,coupe;
};
registro dato;
struct conductor{
	string nombre,apellido,direccion,telefono;
	int documento;
	char correo[100];
};
conductor condu;
void total(){
	system("color f6");
	letra1();
	letra2();
	letra3();
	system("pause");
	marco();
	imagen1();
	system("pause");
	imagen2();
	
	system("pause");
	system("color F6");
    carga();
}
int main()
{
	srand(time(NULL));
	total();
	menuP();
}
void menuP(){
   system("color f6");
	
   char opcion, letra, volver;
   system("cls");
   gotoxy(-50,1);
   fecha();
   cout<<endl;
   cout<<"\t\t\t SERVICIOS ESPECIALES"<<endl;
   
   cout<<"b) USUARIO"<<endl;
   cout<<"c) CONDUCTOR."<<endl;
   cout<<"d) ADMINISTRADOR.\n\n";
   cout<<"h) Salir."<<endl;
   cout<<"Digite opcion: "<<endl;
   cin>>opcion;
   letra = toupper(opcion);
   switch(letra)
   {
   	case 'B':
   		usuarioD();
   	break;
   	case 'C':
   		menu();
   	break;
   	case  'D':
   		AD();
   	break;
   	case 'H':
   		exit(8);
   	break;
   	default: cout<<"ERROR"<<endl;
   	menuP();
   	break;
   }
}
void usuarioD(){
   system("color f6");
	
   char opcion, letra, volver;
   system("cls");
   gotoxy(-50,1);
   fecha();
   cout<<endl;
   cout<<"\t\t\t SERVICIOS ESPECIALES"<<endl;
   cout<<"b) INICIA TU REGISTRO."<<endl;
   cout<<"c) SOLICITAR SERVICIO."<<endl;
   cout<<"d) INFORMACI"<<char(162)<<"N DEL USUARIO.\n\n";
   cout<<"e) VOLVER AL MENU PRINCIPAL\n\n";
   cout<<"DIGITE OPCION:\n\n";
   cin>>opcion;
   system("cls");
   
   letra = toupper(opcion);
   switch(letra)
   {
         case 'B': 
         			gotoxy(-50,1);
                    fecha();
                    cout<<endl;
		 			char *pch;
		 
		           cout<<"\t\t\t\t SERVICIOS ESPECIALES"<<endl;
                   cout<<"\t Alcanzando los sue"<<char(164)<<"os de nuestros colombianos.\n\n";
   		           
                   cout<<"REGISTRO.\n\n\n";
                   cout<<"Vehiculo\t"<<endl;
                   cout<<"[1] - Sedan:\t\n";
                   cout<<"[2] - Van:\t\n";
                   cout<<"[3] - Camioneta:\t\n";
                   cout<<"[4] - Bus:\t\n";
                   cout<<"[5] - Coupe:\t\n";
                   cout<<"Digite opcion:\t";
                   cin>>dato.vehiculo;
                   cout<<"Nombre:\t\t";
                   cin>>dato.nombre;
                   cout<<"Apellido:\t";
                   cin>>dato.apellido;
                   cout<<"Documento:\t";
                   cin>>dato.documento;
                   cout<<"Celular:\t";
                   cin>>dato.celular;
                   cout<<"N"<<char(167)<<" fijo:\t";
                   cin>>dato.celular;
                   cout<<"Correo:\t\t";
                   cin>>dato.correo;
                   cout<<"\n\n";
                   
                   pch = strchr(dato.correo, '@');
				
                   while(pch == "@")
                   {
                     cout<<"su correo no es valido."<<endl;
                   	 cout<<"correo: ";
                     cin>>dato.correo;  	
                   }
                   system("pause");
                   return usuarioD(); 
          break;
          case 'C': 
          			gotoxy(-50,1);
                    fecha();
                    cout<<endl;
                    char duda, letra;
  		            cout<<"SOLICITAR SERVICIO.\n\n\n";
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
                                cout<<"Ingrese fecha de solicitud de reserva"<<endl;
                                cout<<"D./  M./  AA."<<endl;
                                cin>>dato.dia>>dato.mes>>dato.anio;
                    
                                if((dato.mes == "enero")||(dato.mes == "marzo")||(dato.mes == "mayo")||(dato.mes == "julio")||(dato.mes == "agosto")||(dato.mes == "octubre")||(dato.mes == "diciembre"))
                                {
                    	            if((dato.dia >= 1)||(dato.dia <=10))
                    	            { 
									    int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									   
                    	             	numero = (2+rand()%(20-2));//rand es aleatorio entre 20 y 2 numeros enteros
                    	             	numero2 = (2+rand()%(20-2));
                    	             	numero3 = (2+rand()%(20-1));
                    	             	numero4 = (2+rand()%(20-2));
                    	             	numero5 = (2+rand()%(20-1));
                    	             	
                    		            cout<<"reservas. \n\n";
                    		            cout<<"servicios disponibles:";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opci"<<char(162)<<"n.   "<<endl;
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
											  		 int valor_tiquete,reserva;
											  		 reserva = (100+rand()%(1000-100));
											  		 valor_tiquete = (350000+rand()%(800000-350000));
											  		 
											  		 cout<<"\n\n\n";
											         cout<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
											         cout<<"\n\n";
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de veh"<<char(161)<<"culo      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n"<<endl;
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n"<<endl;
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n"<<endl;
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n"<<endl;
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n"<<endl;
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo      "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											           if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
									else if((dato.dia >= 11)||(dato.dia <=20))
									{
										int numero, numero2, numero3, numero4, numero5;
									    char letra, opcion;
									
                    	             	numero = (5+rand()%(30-10));
                    	             	numero2 = (5+rand()%(30-10));
                    	             	numero3 = (5+rand()%(30-10));
                    	             	numero4 = (5+rand()%(30-10));
                    	             	numero5 = (5+rand()%(30-10));
                    	             	
                    		            cout<<"reservas. \n\n";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
									   
                    	             	numero = (35+rand()%(25-15));
                    	             	numero2 = (35+rand()%(25-15));
                    	             	numero3 = (35+rand()%(25-15));
                    	             	numero4 = (35+rand()%(25-15));
                    	             	numero5 = (35+rand()%(25-15));
                    	             	
                    		            cout<<"reservas. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opci"<<char(162)<<"n.   ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
									   
                    	             	numero = (41+rand()%(31-15));
                    	             	numero2 = (41+rand()%(31-15));
                    	             	numero3 = (41+rand()%(31-15));
                    	             	numero4 = (41+rand()%(31-15));
                    	             	numero5 = (41+rand()%(31-15));
                    	             	
                    		            cout<<"reservas. \n\n";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											        if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                    	             	
                    		            cout<<"reservas. \n\n";
                  		                cout<<"A) "<<numero<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 7:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"B) "<<numero2<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"C) "<<numero3<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 9:30 pm"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"D) "<<numero4<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 8:50 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
                    		            cout<<"E) "<<numero5<<" de "<<dato.mes<<" a"<<char(164)<<"o "<<dato.anio<<" hora: 2:00 am"<<" desde "<<dato.ciudad_actual<<" hasta "<<dato.destino<<" (Disponible)"<<endl;
					               	    cout<<"\n\n";
					               	    cout<<"tome su opci"<<char(162)<<"n.   ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra;	
													 system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											         cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
													 cin>>compra4;	
													 system("cls");
													 
													 letra4 = toupper(compra4);
													 if(letra4 == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
									
                    	             	numero = (30+rand()%(20-10));
                    	             	numero2 = (30+rand()%(20-10));
                    	             	numero3 = (30+rand()%(20-10));
                    	             	numero4 = (30+rand()%(20-10));
                    	             	numero5 = (30+rand()%(20-10));
                    	             	
                    		            cout<<"reservas. \n\n";
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											           if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
									   
                    	             	numero = (35+rand()%(25-20));
                    	             	numero2 = (35+rand()%(25-20));
                    	             	numero3 = (35+rand()%(25-20));
                    	             	numero4 = (35+rand()%(25-20));
                    	             	numero5 = (35+rand()%(25-20));
                    	             	
                    		            cout<<"reservas. \n\n";
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
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
                    	             	
                    		            cout<<"reservas. \n\n";
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
											        if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
                                                            return menu();
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
											         if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											         cout<<"codigo de vehiculo     "<<reserva<<endl;
											         cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											         cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													 cout<<"desea reservar para esta fecha.  S/N   ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"vehiculo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"vehiculo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"vehiculo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"vehiculo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"vehiculo de reserva : Coupe\n";
									                   }
											            cout<<"codigo de vehiculo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
													 letra = toupper(compra);
													 if(letra == 'S')
													 {
													 	cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
											            if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
											            cout<<"c"<<char(162)<<"digo de veh"<<char(161)<<"culo     "<<reserva<<endl;
											            cout<<"registro N"<<char(248)<<"  "<<dato.documento<<"\n\n";
											            cout<<" valor del viaje:      "<<valor_tiquete<<"\n\n\n";
													    cout<<"desea reservar para esta fecha.  S/N   ";
													    cin>>compra;	
													    system("cls");
													 
									                   letra = toupper(compra);
													   if(letra == 'S')
													   {
													 	    cout<<"ingrese n"<<char(163)<<"mero de cuenta bancaria: ";
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
                               return usuarioD();
                    }
                    case 'E': return menuP();
                    break;
                    case 'D': gotoxy(-50,1);
                fecha();
                cout<<endl;
		  	    cout<<"\t\t\t INFORMACI"<<char(162)<<"N DE USUARIO.\n\n\n";
		  	    
		  	    cout<<"ingrese c"<<char(162)<<"digo del veh"<<char(161)<<"culo: ";
		  	    cin>>dato.reserva;
		  	    cout<<"\n\n\n";
		  	    
		  	    if(dato.vehiculo == 1)
		  	    {
		  	    	cout<<"SEDAN.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	    	system("pause");
		  	    	return usuarioD();
		  	     }
		  	     else if(dato.vehiculo == 2)
		  	    {
		  	    	cout<<"VAN.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"numero celular: "<<dato.celular<<endl;
		  	    	cout<<"numero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	    	system("pause");
		  	    	return usuarioD();
		  	     }
		  	     else if(dato.vehiculo == 3)
		  	    {
		  	    	cout<<"CAMIONETA 4X4.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"n"<<char(163)<<"mero celular: "<<dato.celular<<endl;
		  	    	cout<<"n"<<char(163)<<"mero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	    	system("pause");
		  	    	return usuarioD();
		  	     }
		  	     else if(dato.vehiculo == 4)
		  	    {
		  	    	cout<<"BUS.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"n"<<char(163)<<"mero celular: "<<dato.celular<<endl;
		  	    	cout<<"n"<<char(163)<<"mero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	    	system("pause");
		  	    	return usuarioD();
		  	     }
		  	     else if(dato.vehiculo == 5)
		  	     {
		  	    	cout<<"COUPE.\n\n\n";
		  	    	
		  	    	cout<<"pasajero: "<<dato.nombre<<endl;
		  	    	cout<<"identificado: "<<dato.documento<<endl;
		  	    	cout<<"n"<<char(163)<<"mero celular: "<<dato.celular<<endl;
		  	    	cout<<"n"<<char(163)<<"mero fijo: "<<dato.fijo<<endl;
		  	    	cout<<"correo: "<<dato.correo<<endl;
		  	    	system("pause");
		  	    	return usuarioD();
		  	 	}
      break;              
      }
}
void menu(){
	system("color f6");
	
   char opcion, letra, volver;
   system("cls");
   gotoxy(-50,1);
   fecha();
   cout<<endl;
   cout<<"\t\t\t SERVICIOS ESPECIALES"<<endl;  
   cout<<"g) RECORRIDOS DEL CONDUCTOR\n";
   cout<<"i) VOLVER AL MENU PRINCIPAL."<<endl;
   cin>>opcion;
   system("cls");
   
   letra = toupper(opcion);
   switch(letra)
{
      case 'G':
      	system("PERSONAS.txt");
      break;
      case 'I': 
            menuP();
      break;
	  default: cout<<"se esperaba una opcion valida."<<endl;
   }
	cout<<"volver al men"<<char(163)<<".   S/N";
	cin>>volver;
	system("cls");
	
	letra = toupper(volver);
	if(letra == 'S')
	{
		return menu();
	}
	else
	{
	   exit(0);
	}  system("pause");
}
void AD(){
	system("color f6");
	
   char opcion, letra, volver;
   system("cls");
   gotoxy(-50,1);
   fecha();
   cout<<endl;
   cout<<"\t\t\t SERVICIOS ESPECIALES"<<endl;  
   cout<<"h) sERVICIOS HECHOS\n";
   cout<<"i) VOLVER AL MENU PRINCIPAL."<<endl;
   cin>>opcion;
   system("cls");
   
   letra = toupper(opcion);
   switch(letra)
{
      case 'H':
      	system("ADMIN.txt");
      break;
      case 'I': 
            menuP();
      break;
	  default: cout<<"se esperaba una opcion valida."<<endl;
   }
	cout<<"volver al men"<<char(163)<<".   S/N";
	cin>>volver;
	system("cls");
	
	letra = toupper(volver);
	if(letra == 'S')
	{
		return menu();
	}
	else
	{
	   exit(0);
	}  system("pause");
}
void admin(){
	int ver;
	for(int i=0;i<ver;i++){		
		cout<<"\nNombre:"<<dato.nombre<<endl;
        cout<<"\napellido:"<<dato.apellido<<endl;
        cout<<"\ndocumento:"<<dato.documento<<endl;
        cout<<"\ncorreo:"<<dato.correo<<endl;
        
		cout<<"\nregistro N"<<char(248)<<"  "<<dato.documento<<"";
		float valor_tiquete = (100000+rand()%(500000-100000));
		cout<<"\nvalor del viaje:      "<<valor_tiquete;
		cout<<"\nCiudad inicial "<<dato.ciudad_actual;
		cout<<"\nCiudad destino "<<dato.destino;
		if(dato.vehiculo==1){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Sedan\n";
									                   }
									                   else if(dato.vehiculo==2){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Van\n";
									                   }
									                   else if(dato.vehiculo==3){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Camioneta\n";
									                   }
									                   else if(dato.vehiculo==4){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Bus\n";
									                   }
									                   else if(dato.vehiculo==5){
									                   	cout<<"veh"<<char(161)<<"culo de reserva : Coupe\n";
									                   }
	}
	system("pause");
	return menu();	
}
void archivo(){
	 //Entrada a un archivo de texto "PERSONAS.txt"
   ofstream archivo; // funcion de la clase ofstream
   archivo.open("PERSONAS.txt", ios::app); //ios::app Operaciones de añadidura. añade la informacion a un archivo txt o bloc de notas mejor conocido
                   archivo<<"Vehiculo:\t\t";
                   archivo<<dato.vehiculo;
                   archivo<<"Nombre:\t\t";
                   archivo<<dato.nombre;
                   archivo<<"Ciudad:\t\t";
                   archivo<<dato.ciudad_actual;
   				archivo.close(); //pausa el registro y lo cierra 
   //Salida a archivo de texto "PERSONAS.txt"
}
void archivoA(){
	 //Entrada a un archivo de texto "PERSONAS.txt"
   ofstream archivo; // funcion de la clase ofstream
   archivo.open("ADMIN.txt", ios::app); //ios::app Operaciones de añadidura. añade la informacion a un archivo txt o bloc de notas mejor conocidos
   	archivo<<"Nombre:\t\t";
	archivo<<dato.nombre;
    archivo<<"Apellido:\t";
    archivo<<dato.apellido;
    archivo<<"Documento:\t";
    archivo<<dato.documento;
    archivo<<"Celular:\t";
    archivo<<dato.celular;
    archivo<<"N"<<char(167)<<" fijo:\t";
    archivo<<dato.celular;
    archivo<<"Correo:\t\t";
    archivo<<dato.correo;
   	archivo.close(); //pausa el registro y lo cierra 
   //Salida a archivo de texto "ADMIN.txt"
}
void marco()
{
	
	for(int i=1;i<=13;i++)
	{
		 pant(19,i+6);cout<<char(186);
		 pant(64,i+6);cout<<char(186);	
	}
		
 	pant(19,19);cout<<char(200);
	pant(64,19);cout<<char(188);
	pant(19,6);cout<<char(201);
	pant(64,6);cout<<char(187);
	
	for(int i=19;i<=62;i++)
	{
	 pant(i+1,19);cout<<char(205);
	 pant(i+1,6);cout<<char(205);
	}
	
	for(int i=39;i<=63;i++)  //marco perqueño
	{
	  pant(i+1,4);cout<<char(205);	 
	}
	
	for(int i=5;i<=5;i++)  
	{
	  pant(39,i);cout<<char(186);
	 pant(64,i);cout<<char(186);	 
	}
 	pant(39,4);cout<<char(201);
	pant(39,6);cout<<char(202);
 	pant(64,4);cout<<char(187);
	pant(64,6);cout<<char(185);
	
}

void imagen1()
{
	system("cls");
	marco();
	 pant(47,5);
	cout<<"Integrantes"<<endl<<endl;
	 pant(39,11);
	cout<<"Dina Rinc"<<char(162)<<"n";
	 pant(39,12);
    cout<<"11231411598"; 
     pant(39,14);
    cout<<"Emmanuel Florez";
	 pant(39,15);
    cout<<"10451515241" ; 
     pant(32,17);
    cout<<"Docente: Tania Rodr"<<char(161)<<"guez";
     pant(39,18);
    cout<<"Grupo: 1"<<endl<<endl<<endl;
}
void imagen2()
{
	system("cls");
	marco();
	 pant(40,5);cout<<"SERCICIOS ESPECIALES"<<endl<<endl;
	 pant(22,8);cout<<"Descripci"<<char(162)<<"n: ";
	 pant(22,10);cout<<"programa de f"<<char(160)<<"cil acceso para el"<<endl;
	 pant(22,11);cout<<"usuario,conductor y admisnistrador"<<endl;
 	 pant(22,12);cout<<"donde pondr"<<char(160)<<"n encontrar informacion"<<endl;
	 pant(22,13);cout<<"dependiendo de la persona que ejecute el "<<endl;
	 pant(22,14);cout<<"programa"<<endl;
	 pant(22,15);cout<<" ";

	 pant(22,17);cout<<" "<<endl;
	 pant(22,18);cout<<" ";
}
void  pant(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
void fecha()
{
	time_t t,i;
     char *p;
     i = time (&t);
     p = ctime (&i);
     cout<<"          "<<p;						
}
// DEFINICIÓN letra U
void letra1()
{ // abrir llave de la función letra1
	int l=0, c;// declarando variables l igual a cero, c, de tipo entero "int"
 	for(l=1;l<=7;l++)//
	{ // abrir llave del for anidado 
	 	if (l!=7)//	Si l es diferente de 7 ???????????
	   	{ // abrir llave del if anidado
	   		c=1;// asignación c igual a 1
			while(c<=7)// Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
		   	  	if ((c==1) ||(c==7))//
		        { // abrir llave del if anidado 
					gotoxy((25+c),(4+l)) ;  //Coordenas   	  	  
					cout <<char(178); //Impresión en pantalla "&&" para el relleno de la letra 1
				} // cerrar llave del if anidado
				c++;	   	//Incremento c++
	   		}	// cerrar llave del while
	    }  	 	  	 // cerrar llave del if anidado
		else //
		{ // abrir llave del else
			c=1;  // Asignando c=1
		  	while(c<=7) //Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
	   	  		gotoxy((25+c),(4+l)) ; // Posicionamiento de coordenadas  	  	  
			  	cout <<char(178); //Impresión en pantalla "&&" para el relleno de la letra 1
			 	c++;	   	//Incremento c++
	   	  	}	// cerrar llave del while
		}  	// cerrar llave del else
	} // cerrar llave del for
}  // cerrar llave de la función letra1
void letra2()// DEFINICIÓN letra a 
{ // abrir llave de la función letra2
	int l=0, c;//declarando variables l igual a cero , c de tipo entero "int"
 	for(l=1;l<=7;l++)//
 	{ // abrir llave del for anidado
	 	if (l!=7)	// Si l es diferente de 7 ???????????
	   	{ // abrir llave del if anidado
	   		c=1; // asignación c igual a 1
			while(c<=7) // Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
		   	  	if ((c==1) ||(c==7)) //
		        { // abrir llave del if anidado
					gotoxy((45+c),(5+l)) ; // Posicionamiento de coordenadas  	  	  
					cout <<char(178); // Impresión en pantalla "&&" para el relleno de la letra 2
				} // cerrar llave del if anidado
				c++;  // Incremento c++
	   		}	// cerrar llave del while 
	    }  	 	  	 // cerrar llave del  if anidado
		else  //
		{  // abrir llave del else
			c=1; // asignación c igual a 1
		  	while(c<=7) // Cuando  c es igual o menor  a 7
	   	  	{  // abrir llave del while
	   	  		gotoxy((45+c),(-2+l)) ; // Posicionamiento de coordenadas   	  	  
			  	cout <<char(178); // Impresión en pantalla "&&" para el relleno de la letra 2
			 	c++;	   	// Incremento c++
	   	  	}	// cerrar llave del while
		}  	// cerrar llave del else
	} // cerrar llave del for anidado
}  // cerrar llave de la función letra2

void letra3()// DEFINICIÓN letra n
{ // abrir llave de la función letra2
	int l=0, c; // declarando variables l igual a cero , c de tipo entero "int"
 	for(l=1;l<=7;l++) //
 	{ // abrir llave del for anidado
	 	if (l!=7)	// Si l es diferente de 7 ???????????
	   	{ // abrir llave del if anidado
	   		c=1; // asignación c igual a 1
			while(c<=7) // Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
		   	  	if ((c==1) ||(c==7)) //
		        { // abrir llave del if anidado
					gotoxy((35+c),(5+l)) ; // Posicionamiento de coordenadas  
					cout <<char(178); // Impresión en pantalla "&&" para el relleno de la letra 3
				} // llave para cerrar el if
				c++;	   	// Incremento c++
	   		}	// cerrar llave del while
	    }  	 // cerrar llave del if	  	 	
        else //
		{ // abrir llave del else
			c=1; // asignación c igual a 1
		  	while(c<=7) // Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
	   	  		gotoxy((35+c),(-2+l)) ;  // Posicionamiento de coordenadas  	  	  
			  	cout <<char(178); // Impresión en pantalla "&&" para el relleno de la letra 3
			 	c++;	   	// Incremento c++
	   	  	} // cerrar llave del while
	   	  	c=1;  // asignación c igual a 1
                 while(c<=7) // Cuando  c es igual o menor  a 7
	   	  	{ // abrir llave del while
	   	  		gotoxy((35+c),(1+l)) ;  // Posicionamiento de coordenadas   	  	  
			  	cout <<char(178);  // Impresión en pantalla "&&" para el relleno de la letra 3
			 	c++;	   	// Incremento c++
	   	  	}		// cerrar llave del while
		}  // cerrar llave del else
 	 } // cerrar llave del for
 	 cout<<"\n\n\n\n";
}  // cerrar llave de la función void letra3
void carga()
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
