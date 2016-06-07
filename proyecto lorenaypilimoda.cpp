#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <time.h>

#define USER "industrial"
#define PASS "123456"
#define ENTER 13 
#define BACKSPACE 8

using namespace std;
void gotoxy (int x, int y);//funcion para ubicacion en plano cartesiano
void fecha(); //funcion que muestr la fecha en la consola
void letra1();//letra u
void letra2();//letra a
void letra3();//letra n
void letrasTot();//imprime marco y uan
void cuadro();//imprime margen
void informacion();
void menu();
void Datos();
void TipoRopa();
void ModificarRegistro();
void EliminarRegistro();
void Ocasion();
void Estaciones();
void Dias();
void OcasionMujer();
void EstacionesM();
void DiasM();
void Hombre();
void Mujer();


struct informacion
 {	//struct para almacenar vectores 
   	char nombre[25]; //char de un vector que almacena 25 caracteres o datos
   	char apellido[25]; //char de un vector que almacena 25 caracteres o datos
   	char nacimiento[25]; //char de un vector que almacena 25 caracteres o datos

 }
persona[25]; //llama un vector para utilizar struct
int registro = 0; //registro para almacenar el numero de registros almacenados

struct Rhombre
  {
	char ocasion[25];
	char estacion[25];
	char dia[25];
  }
RopaMen[25];
int men=0;
int opcion; //opcion de tipo entero/numeros
char eliminarContacto[10]; //char tipo vector que almacena 10 caracteres o datos

int main()
{
	system ("color fd");
    letrasTot();
	cuadro();
	system ("pause");
    system("cls"); 
       
    informacion();
    cuadro();	
	system ("pause");
	system("cls");

	string usuario, password;
   	int contador = 0;
   	bool ingresa = false;
 	char caracter;
 	
	do
	{
		system("cls");
		fecha();
	    cout << "\n\tUsuario: ";
	    cin>>usuario;
	    cout << "\tPassword: ";
	    caracter = getch();
	 	password = "";
	 	
    	while(caracter != ENTER)
		{
 			if(caracter != BACKSPACE)
			{
			 	password.push_back(caracter);
	         	cout << "*";
			}
			else if(password.length() > 0)
			{
				cout << "\b \b";
				password = password.substr(0, password.length() - 1);
			}
			caracter = getch();
	    }
      	
		if(usuario == USER && password == PASS) 
		{
        	ingresa = true;
      	}
		else
		{
		  	cout << "\n\n\tEl usuario y/o contrase"<<char(164)<<"a son incorrectos" << endl;
         	cout << "\n\n\tPresione ENTER" << endl;
         	system("pause");
         	contador++;
      	}
      	
   }while(ingresa == false && contador < 3);
   
   if(ingresa == false) 
   {
    	cout << "\n\tERROR EN EL USUARIO" << endl;
   }
   else
   {
      	system("cls");
 		menu();
   }	
}
void menu()
{
	int opcion;
	system("cls");
	system ("color f5");
	cuadro();
	gotoxy(26,3);
	cout<<"\t BIENVENIDO \n\n";
	gotoxy(26,8);
	cout <<"\n\n\t   1) - Agregar usuario                              ";
	gotoxy(26,9);
	cout <<"\n\n\t   2) - Modificar datos                              ";
	gotoxy(26,10);
	cout <<"\n\n\t   3) - Eliminar usuario                             ";
	gotoxy(26,11);
	cout <<"\n\n\t   4) - Tipo de ropa para la ocasi\xA2n                 ";
	gotoxy(26,12);
	cout <<"\n\n\t   5) - Ver usuarios archivos txt                    ";
	gotoxy(26,13);
	cout <<"\n\n\t   6) - Salir                                        ";
	gotoxy(26,14);
	cout << "  ";
	gotoxy(26,17);
	cout <<"\tIngrese opci"<<char(162)<<"n: ";
	cin >> opcion;
	system ("cls");
	
	switch(opcion)
	{
					case 1:
							Datos();
							break;
					case 2:
							ModificarRegistro();
							break;
					case 3:
							EliminarRegistro();
							break;
					case 4:
						    TipoRopa();
							break;
					case 5:
							system("cls");
      						system("PERSONAS.txt");//llama el archivo de los datos guardas y los abre en un archivo txt o bloc de notas
							break;		 
					case 6:
						    exit (0);
							break;
			 		default: 
					 		cout<<"Opci\xA2n mal digitada"<<endl;
					 		system("pause");
					 		system("cls");
					 		return menu();
			 				break;
	}
	system("PAUSE");
}
void Datos()
{
	system("cls");
   fecha();
   cuadro();  
   gotoxy(26,8);
   cout<<"FORMULARIO\n";  
   gotoxy(26,9);
   cout<<"Nombre: ";
   cin>>persona[registro].nombre; //guarda en la estructura persona el nombre y en vector el registro con valor 1
   gotoxy(26,10);
   cout<<"Apellido: ";
   cin>>persona[registro].apellido; //guarda en la estructura persona el apellido y en vector el registro con valor 1
   gotoxy(26,11);
   cout<<"Fecha nacimiento: ";
   cin>>persona[registro].nacimiento; //guarda en la estructura persona la fecha de nacimiento y en vector el registro con valor 1
   {
    	//Entrada a un archivo de texto "PERSONAS.txt"
   	ofstream archivo; // funcion de la clase ofstream
   	archivo.open("PERSONAS.txt", ios::app); //ios::app Operaciones de añadidura. añade la informacion a un archivo txt o bloc de notas mejor conocido
   	archivo<< "Nombre:  "<<persona[registro].nombre<<endl;
   	archivo<< "Apellido: "<<persona[registro].apellido<<endl;
   	archivo<< "Fecha nacimiento: "<<persona[registro].nacimiento<<endl;
   	archivo.close(); //pausa el registro y lo cierra 
   	//Salida a archivo de texto "PERSONAS.txt"
   	registro++;
   	system("pause");
   	cout << endl << "Contacto a"<<char(164)<<"adido." << endl;
   	menu();
   }
   system("cls");
}
void ModificarRegistro()
 {
	system("cls");
	fecha();
	cuadro();
   int opEditar,infoEditar;
   cout << "Numero de registro a editar: ";
   cin >> opEditar;
   	gotoxy(26,7);
   opEditar--;  //disminuye en 1 cuando se edita un contacto
   	gotoxy(26,8);
   if (opEditar < registro)
   { //verifica que los numeros de opcion editar sean menores al registro para poder editar la persona
   	cout << "\n 2) - Nombre: ";
   	cout << persona[opEditar].nombre;
   	gotoxy(26,9);
   	cout << "\n 3) - Apellido: ";
   	cout << persona[opEditar].apellido;
   	gotoxy(26,10);
   	cout << "\n 4) - Fecha nacimiento : ";
   	cout << persona[opEditar].nacimiento;
   	gotoxy(26,11);
   	cout << "\n 5) modificar todo ";
   	gotoxy(26,12);
   	cout << "\n 6) no modificar nada ";
   	gotoxy(26,13);
   	cout << "\n Informaci\xA2n a modificar: ";
   	cin >> infoEditar;
   	
	   switch (infoEditar)
	   {
   	
   		case 1:
   		cout << "\nNombre: ";
   		cin >> persona[opEditar].nombre;//lee el caso y en la funcion persona llama la opcion editar el atributo nombre
   		cout << "\nApellido: ";
   		cin >> persona[opEditar].apellido;//lee el caso y en la funcion persona llama la opcion editar el atributo apellido
	    cout << "\nNombre: ";
	    cin >> persona[opEditar].nombre;
	    cout << "\nApellido: ";
	    cin >> persona[opEditar].apellido;
	    cout << "\nFecha nacimiento: ";
	    cin >> persona[opEditar].nacimiento;
   		break;
   		case 2:
   		menu();
   		break;
   		default:
        cout << "Opci\xA2n mal digitada";
   		ModificarRegistro(); //vuelve a funcion modificar persona
  		 break;
      }
    menu();
   }
  
}
void EliminarRegistro()
 {
   int eliminar;
   system("cls");
   cuadro();
   cout<<"NUMERO DE PERSONA A ELEMINAR: ";
   cin>>eliminar;
   	gotoxy(26,8);
   eliminar--; //disminuye en 1 cuando se elemina un contacto
   if (eliminar<registro)
   {
 
   	cout << "\nNombre: ";
   	cout << persona[eliminar].nombre; //imprime en la estructura persona el nombre y en vector el registro con valor 1 para eliminarlo
   	gotoxy(26,9);
   	cout << "\nApellido: ";
   	cout << persona[eliminar].apellido; //imprime en la estructura persona el apellido y en vector el registro con valor 1 para eliminarlo
   		gotoxy(26,10);
   	cout << "\nFecha nacimiento: ";
   	cout << persona[eliminar].nacimiento;
  
   	do
	 { // condicional do while para validar la informacion y poder eliminarla
   		cout<<"Eliminar contacto de la agenda? [S/N]: "; 
   		cin>>eliminarContacto; //lee dato tipo caracter para eliminar un contacto
   		if((strcmp(eliminarContacto,"s")==0)||(strcmp(eliminarContacto,"S")==0))
		{ //funcion strcmp es validar dos datos digamos "eliminarcontacto" es igual "s" entonces valida la opcion
   			persona[eliminar]=persona[registro];//dice que la estructura persona con un vector 1 en eliminar si es igual a persona con 1 valor en registro
   			cout<<"\nRegistro eleminado eliminado"<<endl;//confirma que ha sido eliminado el registro o persona
   			system("pause");
   			menu();
   		}
   		if((strcmp(eliminarContacto,"n")==0)||(strcmp(eliminarContacto,"N")==0))
		{ //funcion strcmp es validar dos datos digamos "eliminarcontacto" es igual "N" entonces valida la opcion
   			cout<<"Registro no ha sido eliminado";//confirma que ha no sido eliminado el registro o persona
   			system("pause");	
   			menu(); //llama funcion para volver al menu principal
   		}
   	}while((eliminarContacto!="S")||(eliminarContacto!="s")||(eliminarContacto!="N")||(eliminarContacto!="n"));//la funcion while dice que si son iguales la opcion eliminarContacto a las letras en mayuscula o minuscula entonces dice que el registro no existe
  }
  else
  {
   	cout<<"El registro no existe";
   	system("pause");	
   	menu();
  }
}

void TipoRopa()
{
	int opcion;
	fecha();
	cuadro();
	system("cls");
	gotoxy(26,8);
	cout <<"\n";
	gotoxy(26,9);
	cout <<"\n\n\t 1) - Hombre                                       ";
	gotoxy(26,10);
	cout <<"\n\n\t 2) - Mujer                                        ";
	gotoxy(26,11);
	cout <<"\n\n\t 3) - Si tiene dudas Para vestir (caballero)       ";
	gotoxy(26,12);
	cout <<"\n\n\t 4) - Si tiene dudas Para vestir (Dama)            ";
	gotoxy(26,13);
	cout <<"\n\n\t 5) - Men"<<char(163)<<"principal                ";
	gotoxy(26,14);
	cout <<"\n";
	gotoxy(26,15);
	cout <<"\n\n\t Digite opci\xA2n:";
	cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			Hombre();
		break;
		case 2:
			Mujer();
		break;
		case 3:
			system("Hombres.docx");
			return TipoRopa();
		break;
		case 4:
			system("Mujer.docx");
			return TipoRopa();
		break;
		case 5:
			return menu();
		break;
		default: 
			cout<<"Opci\xA2n mal digitada"<<endl;
			return TipoRopa();
			break;	
	}
}

void Hombre()
 {
	system("cls");
	Estaciones();
 } 
void Mujer() 
 {
	system("cls");
	EstacionesM();
 } 
void Dias()
 {
	system("cls");
	cuadro();
	cout << "\n";
	gotoxy(26,7);
	cout << "\t\n               		  CLIMA                     ";
	cout << "\n";
	gotoxy(26,8);
	cout << "\n\n\t 1) - ma"<<char(164)<<"ana                        ";
	gotoxy(26,9);
	cout << "\n\n\t 2) - Mediodia                                   ";
	gotoxy(26,10);
	cout << "\n\n\t 3) - Noche                                 		";
	gotoxy(26,11);
	cout << "\n";
	gotoxy(26,12);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			Ocasion();
		break;
		case 2:
			Ocasion();
		break;
		case 3:
			Ocasion();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return Dias();
	}
}
void DiasM()
 {
	system("cls");
	cuadro();
	cout << "\n";
	gotoxy(26,7);
	cout << "\t\n               		  CLIMA                     ";
	cout << "\n";
	gotoxy(26,8);
	cout << "\n\n\t 1) - ma"<<char(164)<<"ana                        ";
	gotoxy(26,9);
	cout << "\n\n\t 2) - Mediodia                                   ";
	gotoxy(26,10);
	cout << "\n\n\t 3) - Noche                                 		";
	gotoxy(26,11);
	cout << "\n";
	gotoxy(26,12);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			OcasionMujer();
		break;
		case 2:
			OcasionMujer();
		break;
		case 3:
			OcasionMujer();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return DiasM();
	}
}
void Estaciones()
 {
	system("cls");
	cuadro();
	cout << "\n";
	gotoxy(26,7);
	cout << "\t\n\n                  ESTACI\xA2N ";
	cout << "";
	gotoxy(26,8);
	cout << "\n\n\t 1) - Invierno    ";
	gotoxy(26,9);
	cout << "\n\n\t 2) - Oto"<<char(164)<<"o ";
	gotoxy(26,10);
	cout << "\n\n\t 3) - Verano ";
	gotoxy(26,11);
	cout << "\n\n\t 4) - Primavera";
	gotoxy(26,12);
	cout << "\n";
	gotoxy(26,13);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion) 
	{ 
		case 1:
			Dias();
		break;
		case 2:
			Dias();
		break;
		case 3:
			Dias();
		break;
		case 4:
			Dias();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return Estaciones();
	}
}
void EstacionesM()
 {
	system("cls");
	cuadro();
	cout << "\n";
	gotoxy(26,7);
	cout << "\t\n\n                  ESTACI\xA2N ";
	cout << "";
	gotoxy(26,8);
	cout << "\n\n\t 1) - Invierno    ";
	gotoxy(26,9);
	cout << "\n\n\t 2) - Oto"<<char(164)<<"o ";
	gotoxy(26,10);
	cout << "\n\n\t 3) - Verano ";
	gotoxy(26,11);
	cout << "\n\n\t 4) - Primavera";
	gotoxy(26,12);
	cout << "\n";
	gotoxy(26,13);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion) 
	{ 
		case 1:
			DiasM();
		break;
		case 2:
			DiasM();
		break;
		case 3:
			DiasM();
		break;
		case 4:
			DiasM();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return EstacionesM();
	}
}
void Ocasion()
 {
	system("cls");
	cuadro();
	cout << "\n";
		gotoxy(26,7);
	cout << "\t\n               OCASI\xA2N       ";
		gotoxy(26,8);
	cout << "\n";
		gotoxy(26,9);
	cout << "\n\n\t 1) - Informal";
		gotoxy(26,10);
	cout << "\n\n\t 2) - Formal";
		gotoxy(26,11);
	cout << "\n\n\t 3) - Entrevista de trabajo ";
		gotoxy(26,12);
	cout << "\n\n\t 4) - Primera cita";
		gotoxy(26,13);	
	cout << "\n\n\t 5) - Deporte";
		gotoxy(26,14);
	cout << "\n";
		gotoxy(26,15);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion) 
	{
		case 1:
			system("cls");
			cout<<"\nINFORMAL";
			cout<<"\nCamisa";
			cout<<"\nJean (Skinny,slim)";
			cout<<"\nChaqueta (Cuero,Plumas,Slim)";
			cout<<"\nZapatos (Mocasin,Punta)";
			cout<<"\nGafas (Oscuras)";
			cout<<"\nRelog (Plata,oro,acero,carbonizado,pulido gris)";
			system("pause");
			return menu();
		break;
		case 2:
			system("cls");
			cout<<"\nFORMAL";
			cout<<"\nCamisa (Slim)";
			cout<<"\nPantalon (slim)";
			cout<<"\nBlazer (Slim)";
			cout<<"\nGaban (Slim,hombreras)";
			cout<<"\nCorbata (Slim,colores oscuros)";
			cout<<"\nZapatos (Mocasin,Punta)";
			cout<<"\nGafas (Oscuras)";
			cout<<"\nRelog (Plata,acero,pulido gris,negro mate)";
			system("pause");
			return menu();
		break;
		case 3:
			system("cls");
			cout<<"\nENTREVISTA DE TRABAJO";
			cout<<"\nCamisa (Slim)";
			cout<<"\nPantalon (Skinny,slim)";
			cout<<"\nBlazer (Slim)";
			cout<<"\nCorbata (colores oscuros)";
			cout<<"\nZapatos (Punta,cuadrados)";
			system("pause");
			cout<<"\nRelog (acero)";
			return menu();
		break;
		case 4:
			system("cls");
			cout<<"\nPRIMERA CITA";
			cout<<"\nCamisa";
			cout<<"\nJean (Skinny,slim)";
			cout<<"\nChaqueta (gotick,Slim)";
			cout<<"\nZapatos (Mocasin,Punta,tennis)";
			cout<<"\nGafas (Oscuras,deportivas)";
			cout<<"\nRelog (acero,carbonizado,pulido gris)";
			system("pause");
			return menu();
		break;
		case 5:
			system("cls");
			cout<<"\nDEPORTE";
			cout<<"\nCamisa drift";
			cout<<"\nPantaloneta";
			cout<<"\nChaqueta (slim,drift)";
			cout<<"\nTennis zapatillas";
			cout<<"\nGafas deportivas";
			system("pause");
			return menu();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return Ocasion();
	}				
}
void OcasionMujer()
 {
	system("cls");
	cout << "\n";
	gotoxy(26,7);
	cout << "\n\n\t            OCASI\xA2N     ";
	gotoxy(26,8);
	cout << "\n";
	gotoxy(26,9);
	cout << "\n\n\t 1) - Informal  ";
	gotoxy(26,10);
	cout << "\n\n\t 2) - Formal   ";
	gotoxy(26,11);
	cout << "\n\n\t 3) - Entrevista de trabajo ";
	gotoxy(26,12);
	cout << "\n\n\t 4) - Primera cita ";
	gotoxy(26,13);	
	cout << "\n\n\t 5) - Deporte";
	gotoxy(26,14);
	cout << "\n";
	gotoxy(26,15);
	cout << "\n\n\t Digite opci\xA2n: ";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			system("cls");
			cout<<"\nINFORMAL";
			cout<<"\nCamiseta (algodon,colores neutros)";
			cout<<"\nJean (Skinny,slim,vaqueros)";
			cout<<"\nChaqueta (Cuero,Plumas,Slim,saco)";
			cout<<"\nZapatos (tennis,botas)";
			cout<<"\nGafas (de sol)";
			cout<<"\nRelog (deportivo)";
			cout<<"\nComplementos (Joyas,pendientes,cartera)";
			cout<<"\nBolso (Saco,Bandolera)";
			system("pause");
			return menu();
		break;
		case 2:
			system("cls");
			cout<<"\nFORMAL";
			cout<<"\nCamisa (Slim,colores varios,mangas,sin mangas)";
			cout<<"\nFalda (slim,,media pierna)";
			cout<<"\nGaban (Slim,colores vivos)";
			cout<<"\nTacones (altos)";
			cout<<"\nGafas (Oscuras)";
			cout<<"\nBolso (Colores oscuros,vividos)";
			cout<<"\nRelog (oro,oro rosa,pulido rosa)";
			system("pause");
			return menu();
		break;
		case 3:
			system("cls");
			cout<<"\nENTREVISTA DE TRABAJO";
			cout<<"\nCamisa (Slim,colores oscuros,claros)";
			cout<<"\nFalda (tubo,media pierna,campana)";
			cout<<"\njean (drill,mesclila)";
			cout<<"\nGaban (Slim,colores oscuros)";
			cout<<"\nZapatos (flast,tacon bajo)";
			cout<<"\nRelog (oro,oro rosa,pulido rosa)";
			system("pause");
			return menu();
		break;
		case 4:
			system("cls");
			cout<<"\nPRIMERA CITA";
			cout<<"\nBlusa (top,algodon,ceda)";
			cout<<"\nJean (Skinny,slim,vaqueros)";
			cout<<"\nChaqueta (Plumas,Slim,cuero)";
			cout<<"\nZapatos (tennis,botas,tacon alto)";
			cout<<"\nGafas (Oscuras,deportivas)";
			cout<<"\nRelog (plata,oro rosa,pulido rosa,otro)";
			system("pause");
			return menu();
		break;
		case 5:
			system("cls");
			cout<<"\nDEPORTE";
			cout<<"\nCamisa drift";
			cout<<"\nshorts o sudadera";
			cout<<"\nChaqueta o busos (slim,drift)";
			cout<<"\nTennis";
			cout<<"\nGafas deportivas";
			system("pause");
			return menu();
		break;
		default: cout<<"opci\xA2n mal digitada"<<endl;
		return OcasionMujer();
	}				
}
void letrasTot()
{
	letra1();
	letra2();
	letra3();
	gotoxy((25),(20));//coordenadas en planos de X y Y
	cout << " FACULTAD DE INGENIER"<<char(161)<<"A INDUSTRIAL ";
	gotoxy((25),(19));
    cout << " Pilar Urriago Calderon ";
	gotoxy((25),(18));
    cout << " Lorena Acosta Delgado  ";
    gotoxy((25),(17));
    cout << " PROYECTO ModaOline ";
}
void cuadro()
{
    int i=0, j=0;	
	
	for	(i=0; i<=23;i++)
	{
		if((i==0)||(i==23))
		{
			for	(j=0; j<=77;j++)
			{
				gotoxy(j,i) ; 
				cout<<char(3);//margen codigo ascii
			}
		}
		else  		 
	   	  {
		 	gotoxy(0,i); 
		   	cout<<char();
    		gotoxy(76,i) ; 
		   	cout<<char(3);
	   	  }
	}	
}
void letra1() 						//letra U
{
	int l=0, c;
 	for(l=1;l<=7;l++)
 	{
	 	if (l!=7)	
	   	{
	    	c=1;
			while(c<=7)
	   	  	{
		   	  	if ((c==1) ||(c==7))
		        {
					gotoxy((25+c),(4+l)) ;   	  	  
					cout <<char(219);
			    }
				c++;	   	
	   		}	
	   }
		else
		{ 
			c=1;
		  	while(c<=7)
	   	  	{
	   	  		gotoxy((25+c),(4+l)) ;   	  	  
			  	cout <<char(219);
			 	c++;	   	
	   	  	}	
		}  	
 	}
} 
void letra2()							//  letra a 
{
	int l=0, c;
 	for(l=1;l<=7;l++)
 	{
	 	if (l!=7)	
	   	{
	   		c=1;
			while(c<=7)
	   	  	{
		   	  	if ((c==1) ||(c==7))
		        {
					gotoxy((45+c),(5+l)) ;   	  	  
					cout <<char(219);
				} 
				c++;	   	
	   		}	
	    }  	 	  	 
		else
		{ 
			c=1;
		  	while(c<=7)
	   	  	{
	   	  		gotoxy((45+c),(-2+l)) ;   	  	  
			  	cout <<char(219);
			 	c++;	   	
	   	  	}
		}  	
 	 }
}  
void letra3()						//letra n
{
	int l=0, c;
 	for(l=1;l<=7;l++)
 	{
	 	if (l!=7)	
	   	{
	   		c=1;
			while(c<=7)
	   	  	{
		   	  	if ((c==1) ||(c==7))
		        {
					gotoxy((35+c),(5+l)) ;   	  	  
					cout <<char(219);
				} 
				c++;	   	
	   		}	
	    }  	 	  	 	
        else
		{ 
			c=1;
		  	while(c<=7)
	   	  	{
	   	  		gotoxy((35+c),(-2+l)) ;   	  	  
			  	cout <<char(219);
			 	c++;	   	
	   	  	}
	   	  	c=1;
            while(c<=7)
	   	  	{
	   	  		gotoxy((35+c),(1+l)) ;   	  	  
			  	cout <<char(219);
			 	c++;	   	
	   	  	}		
		}  
 	 }
}  
 void informacion()
 {
      int d=0;
      d=d+2;
      //coordenadas en el plano de X y 
      cout<<endl;
        cout<<endl;
          cout<<endl;
      cout << "\tEl objetivo de este programa es"<<endl;
      d=d+2;
      cout << "\tayudar al usuario a elegir correctamente su "<<endl;
      cout << "\tvestir para una ocasi\xA2n "<<endl;
      d=d+2;
      cout<<endl;
      cout << "\tRegistra unos datos b\xA0sicos de un formulario"<<endl; 
      d=d+2;
      cout<<endl;
      cout << "\tnombre, edad y ocasi\xA2n"<<endl; 
      d=d+2;
}
void fecha()
 {
	time_t t,i;
    char *p;//define constrante un caracter p
    i = time (&t);//dice que i es igual a tiempo es exclusivo de la libreria time.h
    p = ctime (&i);//lee que p es igual a tiempo 
     cout<<"          "<<p;		//imprime la fecha dia año actual que tenga el computador a usar 				
 }
void gotoxy (int x, int y) 
 {  
      HANDLE hcon;                               //dominio manual
      hcon = GetStdHandle (STD_OUTPUT_HANDLE);   // igual al llamado entrada y salida de los datos handle
      COORD dwPos;                               // coordenada para X y Y 
      dwPos.X = x;                               // crea un objeto
      dwPos.Y = y;  
      SetConsoleCursorPosition (hcon, dwPos);   
 }
 
 
 
