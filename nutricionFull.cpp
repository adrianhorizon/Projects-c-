#include<fstream> //liberio para utlizar archivos
#include<cstdlib>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h> //librería para la fecha del sistema
#include<windows.h>
#include<math.h>
#include<ctype.h>
#include <iomanip>//Librería que establece la presición de los valores de punto flotante

#define USER "aura" //usuario 
#define PASS "123456" //contraseña
#define ENTER 13 //define que la tecla enter vale 13
#define BACKSPACE 8 //define que la tecla espacio vale 8

using namespace std;

void Marco();//funcion para imprimir el marco que se muestra en pantalla
void letraU(); //funcion para imprimir la letra U
void letraA(); //funcion para imprimir la letra A
void letraN(); //funcion para imprimir la letra N
void integrantes();
void informacion();
void a();
void carga();
void menu();
void marcoTeorico();  //funcion para imprimir el marco con las letras UAN
void fecha(); //funcion para imprimir la fecha del computador
void gotoxy(short x, short y);//funcion para plano cartesiano ubicar atributos en la consola
void Usuario();
void EliminarRegistro(); //funcion para eliminar una persona
void ModificarRegistro(); //funcion para editar el formulario de la persona existente
void Visualizar(); //funcion para mostrar la informacion de una persona
void Todo(); //funcion para mostrar todos las personas creadas
void archivo();
void Login();
void error();//DECLARACIÓN
void IMC();
void ClasifiacionIMC();
void Recetas();
void RecetasPer();
void ingesta();
void GastoDepo();

struct informacion{//struct para almacenar vectores 
   string cedula;//char de un vector que almacena 25 caracteres o datos
   string nombre; //char de un vector que almacena 25 caracteres o datos
   string apellido; //char de un vector que almacena 25 caracteres o datos
   string alimento;
   int nacimiento;
   int dia;
   int mes; //char de un vector que almacena 25 caracteres o datos
   double estatura,peso,IMC;
   int edad;
}persona[100]; //llama un vector para utilizar struct
int opcion; //opcion de tipo entero/numeros
int registro = 0; //registro para almacenar el numero de registros almacenados
char eliminarContacto[10]; //char tipo vector que almacena 10 caracteres o datos

int main(){
	system ("color F5"); //funcion para color en la consola el F hace referencia al fondo de la consola y el 5 al color del texto
	system("cls"); //limpia la pantalla
	marcoTeorico(); //llama funcion que imprime el marco con las letras UAN
	Marco(); //llama funcion que imprime el marco
	cout<<"\n"; // atributo que da un espacio
	Sleep(1000); //funcion para pausar en milisegundos 3000 = 3 segundos de espera
    system("cls"); //limpia la pantalla
    
    integrantes(); //llama funcion que muestra informacion de los integrantes
    Marco();
    Sleep(1500);
    system("cls"); //limpia la pantalla
	
	informacion(); 
    Marco();
    Sleep(3000);
    system("cls"); //limpia la pantalla
	
	carga();
    system("cls"); //limpia la pantalla
	   
    Login();
    Sleep(500);
    system("cls"); //limpia la pantalla
    menu();
}
void menu(){
	system("color f5");
	system("cls");
	fecha(); //llama funcion que imprime la fecha del computador
	cout<<"   |-----------------------------------------------|\n";
    cout<<"   |     [1] - A"<<char(164)<<"adir un usuario                   |\n";
    cout<<"   |     [2] - Calcular el IMC                     |\n";
    cout<<"   |     [3] - Recetas                             |\n";
    cout<<"   |     [4] - Ingestas recomendadas               |\n";
    cout<<"   |     [7] - Gasto energitico actividad fisica   |\n";
    cout<<"   |     [8] - Eliminar un usuario                 |\n";
    cout<<"   |     [9] - Editar un usuario                   |\n";
    cout<<"   |     [10] - Ver informacion de un usuario      |\n";
    cout<<"   |     [11] - Ver todos los usuario              |\n";
    cout<<"   |     [12] - Ver Personas archivo txt           |\n";
    cout<<"   |     [13] - Manual de usuario                  |\n";
    cout<<"   |-----------------------------------------------|\n";
    cout<<"   |     [14] - Salir                              |\n";
    cout<<"   |-----------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   switch (opcion){ //accede a un menu de opciones
      case 1:
	  		Usuario();
      break;
      case 2:
      		IMC();
      break;
      case 3:
      		Recetas();
      break;
      case 4:
      		ingesta();
      break;
      case 7:
      		GastoDepo();	
      break;
      case 8:
      		EliminarRegistro();
      break;
      case 9:
      		ModificarRegistro();
      break;
      case 10:
      		Visualizar();
      break;
      case 11:
      		Todo();
      break;
      case 12:
      	system("cls");
      	fecha();
      	system("PERSONAS.txt");//llama el archivo de los datos guardas y los abre en un archivo txt o bloc de notas
      	main();
      break;
      case 13:
      	system("manual.docx");
      break;
      case 14:
      	exit(0);//cierra el programa
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	menu();
      break;
   }
}
void Usuario(){
   system("cls");
   fecha();  
   cout<<"FORMULARIO PERSONA NATURAL\n\n";  
   cout<<"\nDigite su documento de identificacion: ";
   cin>>persona[registro].cedula; //guarda en la estructura persona la cedula y en vector el registro con valor 1
   cout<<"Digite edad: ";
   cin>>persona[registro].edad;
   cout<<"Digite Nombre: ";
   cin>>persona[registro].nombre; //guarda en la estructura persona el nombre y en vector el registro con valor 1
   cout<<"Digite Apellido: ";
   cin>>persona[registro].apellido; //guarda en la estructura persona el apellido y en vector el registro con valor 1
   cout<<"Digite Fecha de ingreso YY/MM/DD: ";
   cin>>persona[registro].nacimiento>>persona[registro].mes>>persona[registro].dia; //guarda en la estructura persona la fecha de nacimiento y en vector el registro con valor 1
   cout<<"Digite Estatura (cm):";
   cin>>persona[registro].estatura;
   cout<<"DigitePeso (kg):";
   cin>>persona[registro].peso;
   {
   registro++;
   system("pause");
   cout << endl << "Contacto anadido." << endl;
   menu();
   }
}
void IMC(){
	system("cls");
	int d=6,ver; // variable declarando para mover todo el texto 
    gotoxy((5),(4)); // Posicionamiento de coordenadas 
    cout << "El IMC se utiliza para clasificar el estado ponderal de la persona, "; //
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "se calcula a partir de la f"<<char(224)<<"rmula: peso (kg)/m2)"; //
    d=d+2; //
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "Se trata de un c"<<char(160)<<"lculo com"<<char(163)<<"n tanto para hombres como para mujeres."; //  
    d=d+2; 
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "Introduzca el valor del peso en la primera fila."; //
    d=d+2;//
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "Puede obtenerlo usted mismo/a con una buena balanza";
    d=d+2;
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "a primera hora de la ma"<<char(164)<<"ana, con la vejiga, el recto vac"<<char(161)<<"os";
    d=d+2;
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "en ayunas con ropa interior."<<endl<<endl;
    system("pause");
    system("cls");
    cout << "Numero de persona natural a ver: ";
   	cin >> ver;
   	ver--; //disminuye en 1 cuando se digita opcion
   	if(ver < registro)
   	{
	    cout<<"\n\tPeso (Kg): "<<persona[ver].peso;
	    cout<<"\n\tEstatutra (Cm): "<<persona[ver].estatura;
	    persona[ver].IMC=persona[ver].peso/pow(persona[ver].estatura,2)*10000;
	    cout<<"\n\tSu IMC es de: "<<persona[ver].IMC<<endl<<endl;
	    persona[registro].IMC=persona[ver].IMC;
		system("pause");
		if(persona[registro].IMC<18.5){
			system("cls");
			cout<<"Peso insuficiente"<<endl;
			Sleep(1000);
			ClasifiacionIMC();
		}else if(persona[registro].IMC>18.5 && persona[registro].IMC<24.9){
			system("cls");
			Sleep(1000);
			cout<<"Peso normal"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>25 && persona[registro].IMC<29.9){
			system("cls");
			Sleep(1000);
			cout<<"Sobre peso grado I"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>27 && persona[registro].IMC<29.9){
			system("cls");
			Sleep(1000);
			cout<<"Sobre peso grado II (preobesidad)"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>30 && persona[registro].IMC<34.9){
			system("cls");
			Sleep(1000);
			cout<<"Obesidad de tipo I"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>35 && persona[registro].IMC<39.9){
			system("cls");
			Sleep(1000);
			cout<<"Obesidad de tipo II"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>40 && persona[registro].IMC<49.9){
			system("cls");
			Sleep(1000);
			cout<<"Obesidad de tipo III (morbida)"<<endl;
			ClasifiacionIMC();
		}else if(persona[registro].IMC>50 && persona[registro].edad<18){
			system("cls");
			Sleep(1000);
			cout<<"Obesidad de tipo IV (Extrema)"<<endl;
			ClasifiacionIMC();
		}else{
			cout<<"ERROR"<<endl;
		}
	}
}
void ClasifiacionIMC()//DEFINICIÓN de la función, lo envia a una página donde contiene la alimentación y ejercicios para mantener el peso deseado
{ //abrir llave de la función void mantenerpeso
	system("cls");
	
} //cerrar llave de la función void mantener peso
void GastoDepo(){
	int ver,nm;
	float tmb;
	system("cls");
    cout << "Numero de persona natural a ver: ";
   	cin >> ver;
   	ver--; //disminuye en 1 cuando se digita opcion
   	if(ver < registro)
   	{
   		cout<<"[1] - Hombre\n";
   		cout<<"[2] - Mujer\n";
   		cout<<"\nDigite opcion: ";
   		cin>>nm;
   		if(nm==1){
   		cout<<"\nSu nombre: "<<persona[ver].nombre;
   		cout<<"\nSu edad: "<<persona[ver].edad;
   		cout<<"\nSu estatura: "<<persona[ver].estatura;
   		cout<<"\nSu peso: "<<persona[ver].peso;
   		tmb=(10*persona[ver].peso)+(6.25*persona[ver].estatura)-(5*persona[ver].edad)+5;
   		cout<<"\nGasto diario aproximado es: "<<tmb<<" Calorias"<<endl;
		}
		else if(nm==2){
			cout<<"\nSu nombre: "<<persona[ver].nombre;
   			cout<<"\nSu edad: "<<persona[ver].edad;
   			cout<<"\nSu estatura: "<<persona[ver].estatura;
   			cout<<"\nSu peso: "<<persona[ver].peso;
   			tmb=(10*persona[ver].peso)+(6.25*persona[ver].estatura)-(5*persona[ver].edad)-161;
   			cout<<"\nGasto diario aproximado es: "<<" Calorias"<<endl;;	
		}
		else{
			cout<<"ERROR"<<end;
			menu();
		}
   	}
   	else{
   		cout<<"Numero de registro no existe"<<endl;
   		system("pause");
   		menu();	
	}
}
void ingesta(){
	int ver;
	float calorias,calTo=0,proteina=0;
	system("cls");
    cout << "Numero de persona natural a ver: ";
   	cin >> ver;
   	ver--; //disminuye en 1 cuando se digita opcion
   	if(ver < registro)
   	{
   		cout<<"\nSu nombre: "<<persona[ver].nombre;
   		cout<<"\nSu edad: "<<persona[ver].edad;
   		cout<<"\nSu estatura: "<<persona[ver].estatura;
   		cout<<"\nSu peso: "<<persona[ver].peso;
   		if(persona[ver].edad < 25){
   			calorias = persona[ver].peso*25;
   			calTo=calorias+300;
   			cout<<"\nCalorias que debe consumir: "<<calTo;
   			proteinas=persona[ver].peso*0.8;
   			cout<<"\nProteinas que debe consumir: "<<proteinas<<" gr"<<endl;
   			system("pause");
   			return menu();
		}
		else if(persona[ver].edad > 25 && persona[ver].edad < 45){
			calorias = persona[ver].peso*25;
   			calTo=calorias+300;
   			cout<<"\nCalorias que debe consumir: "<<calTo;
   			proteinas=persona[ver].peso*0.8;
   			cout<<"\nProteinas que debe consumir: "<<proteinas<<" gr"<<endl;
   			system("pause");
   			return menu();
		}
   		else if(persona[ver].edad > 45 && persona[ver].edad < 55){
   			calorias = persona[ver].peso*25;
   			calTo=calorias-100;
   			cout<<"\nCalorias que debe consumir: "<<calTo;
   			proteinas=persona[ver].peso*0.6;
   			cout<<"\nProteinas que debe consumir: "<<proteinas<<" gr"<<endl;
   			system("pause");
   			return menu();
		}
		else if(persona[ver].edad > 55 && persona[ver].edad < 65){
			calorias = persona[ver].peso*25;
   			calTo=calorias-200;
   			cout<<"\nCalorias que debe consumir: "<<calTo;
   			proteinas=persona[ver].peso*0.6;
   			cout<<"\nProteinas que debe consumir: "<<proteinas<<" gr"<<endl;
   			system("pause");
   			return menu();
		}
		else if(persona[ver].edad > 65){
			calorias = persona[ver].peso*25;
   			calTo=calorias-300;
   			cout<<"\nCalorias que debe consumir: "<<calTo;
   			proteinas=persona[ver].peso*0.6;
   			cout<<"\nProteinas que debe consumir: "<<proteinas<<" gr"<<endl;
   			system("pause");
   			return menu();
		}
		else{
			cout<<"ERROR";
			return ingesta();
		}
   	}
   	else{
   		cout<<"Numero de registro no existe"<<endl;
   		system("pause");
   		menu();
	}
}
void Recetas(){
	system("cls");
	fecha(); //llama funcion que imprime la fecha del computador
	cout<<"   |-----------------------------------------------|\n";
    cout<<"   |     [1] - Recetas                             |\n";
    cout<<"   |-----------------------------------------------|\n";
    cout<<"   |     [2] - Volver al menu principal            |\n";
    cout<<"   |-----------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
    switch (opcion){ //accede a un menu de opciones
   		case 1:
   			RecetasPer();
   		break;
		case 2:
			menu();
		break;  
      	default: cout << "Opcion mal digitada ";
	  	Recetas();
     	break;
   	}
}
void RecetasPer(){
	system("cls");
	int o;
	char rec,letra;
	fecha();
	cout<<"Recetas alfabeticamente\n\n";
	cout<<"Digite una letra para ver recetas: ";
	cin>>rec;
	letra = toupper(rec);
	switch(letra){
		case 'A':
			system("cls");
			cout<<"   |-----------------------------------------------|\n";
		    cout<<"   |     [1] - Alcachofa con jamon                 |\n";
		    cout<<"   |     [2] - Alcachofas estofadas                |\n";
		    cout<<"   |     [3] - Alcachofas rehogadas                |\n";
		    cout<<"   |     [4] - Almejas a la marinera               |\n";
		    cout<<"   |     [5] - Alubias a la vinagreta              |\n";
		    cout<<"   |     [6] - Alubias con almejas                 |\n";
		    cout<<"   |     [7] - Alubias con arroz                   |\n";
		    cout<<"   |     [8] - Alubias con patatas                 |\n";
		    cout<<"   |     [9] - Alubias estofadas                   |\n";
		    cout<<"   |     [10] - Arroz al ajillo                    |\n";
		    cout<<"   |-----------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("a.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("b.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("c.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("d.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("e.doc");
		    		return Recetas();
		    	break;
		    	case 6:
		    		system("f.doc");
		    		return Recetas();
		    	break;
		    	case 7:
		    		system("g.doc");
		    		return Recetas();
		    	break;
		    	case 8:
		    		system("h.doc");
		    		return Recetas();
		    	break;
		    	case 9:
		    		system("i.doc");
		    		return Recetas();
		    	break;
		    	case 10:
		    		system("j.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'B':
			system("cls");
			cout<<"   |-----------------------------------------------|\n";
		    cout<<"   |     [1] - Berenjenas al horno                 |\n";
		    cout<<"   |     [2] - Berenjenas fritas                   |\n";
		    cout<<"   |     [3] - Berenjenar rellenas                 |\n";
		    cout<<"   |     [4] - Brol con patatas                    |\n";
		    cout<<"   |-----------------------------------------------|\n";
		     cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("aa.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("ab.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("ac.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("ad.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'C':
			system("cls");
			cout<<"   |-----------------------------------------------|\n";
		    cout<<"   |     [1] - Caldereta de bonito con mejillones  |\n";
		    cout<<"   |     [2] - Caldereta de rape                   |\n";
		    cout<<"   |     [3] - Caldo gallego                       |\n";
		    cout<<"   |     [4] - Canelones con carne                 |\n";
		    cout<<"   |     [5] - Cardos con bechamel                 |\n";
		    cout<<"   |     [6] - Cocido                              |\n";
		    cout<<"   |     [7] - Crema purde                         |\n";
		    cout<<"   |-----------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ba.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("bb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("bc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("bd.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("be.doc");
		    		return Recetas();
		    	break;
		    	case 6:
		    		system("bf.doc");
		    		return Recetas();
		    	break;
		    	case 7:
		    		system("bg.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'E':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Endibias al roquefort                |\n";
		    cout<<"   |     [2] - Ensalada de lechuga,tomate y cebolla |\n";
		    cout<<"   |     [3] - Ensalada de mariscos                 |\n";
		    cout<<"   |     [4] - Ensalda de paste                     |\n";
		    cout<<"   |     [5] - Ensalda de patatas                   |\n";
		    cout<<"   |     [6] - Ensalada de pollo                    |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ca.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("cb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("cc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("cd.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("ce.doc");
		    		return Recetas();
		    	break;
		    	case 6:
		    		system("cf.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'F':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Fabada                               |\n";
		    cout<<"   |     [2] - Fabada asturiana                     |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("da.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("db.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'G':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Garbanzos con arroz                  |\n";
		    cout<<"   |     [2] - Garbanzos con bacalao                |\n";
		    cout<<"   |     [3] - Garbanzos con espinacas              |\n";
		    cout<<"   |     [4] - Gazpacho                             |\n";
		    cout<<"   |     [5] - Guisantes con calamares              |\n";
		    cout<<"   |     [6] - Guisantes con jamon                  |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ea.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("eb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("ec.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("ed.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("ee.doc");
		    		return Recetas();
		    	break;
		    	case 6:
		    		system("ef.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'H':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Habas a la catalana                  |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("fa.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'J':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Judias verdes con huevo duro         |\n";
		    cout<<"   |     [2] - Judias verdes con jamon              |\n";
		    cout<<"   |     [3] - Judias verdes con patatas            |\n";
		    cout<<"   |     [4] - Judias verdes rehagodas              |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ga.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("gb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("gc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("gd.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'L':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Lacon con grelos                     |\n";
		    cout<<"   |     [2] - Lasa con espinacas                   |\n";
		    cout<<"   |     [3] - Lentejas estofadas                   |\n";
		    cout<<"   |     [4] - Lentejas guisadas                    |\n";
		    cout<<"   |     [5] - Lentejas zamoranas                   |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ha.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("hb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("hc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("hd.doc");
		    		return RecetasPer();
		    	break;
		    	case 5:
		    		system("he.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'M':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Macarrones al ajillo                 |\n";
		    cout<<"   |     [2] - Macarrones bolosa                    |\n";
		    cout<<"   |     [3] - Macarrones con ajo y gambas          |\n";
		    cout<<"   |     [4] - Macarrones con setas                 |\n";
		    cout<<"   |     [5] - Macarrones con tomate                |\n";
		    cout<<"   |     [6] - Macarrones gratinados                |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ia.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("ib.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("ic.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("id.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("ie.doc");
		    		return Recetas();
		    	break;
		    	case 6:
		    		system("if.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'P':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Paella                               |\n";
		    cout<<"   |     [2] - Paella mixta                         |\n";
		    cout<<"   |     [3] - Panache de verduras                  |\n";
		    cout<<"   |     [4] - Patatas asadas                       |\n";
		    cout<<"   |     [5] - Pizza frutti di mari                 |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("ka.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("kb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("kc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("kd.doc");
		    		return Recetas();
		    	break;
		    	case 5:
		    		system("ke.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'R':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Repollo con jamon y pines            |\n";
		    cout<<"   |     [2] - Repollo con patatas                  |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("la.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("lb.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'S':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Salmorejo                            |\n";
		    cout<<"   |     [2] - Sopa de almejas y arroz              |\n";
		    cout<<"   |     [3] - Sopa de mariscos                     |\n";
		    cout<<"   |     [4] - Sopa de pasta                        |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("za.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("zb.doc");
		    		return Recetas();
		    	break;
		    	case 3:
		    		system("zc.doc");
		    		return Recetas();
		    	break;
		    	case 4:
		    		system("zd.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		case 'T':
			system("cls");
			cout<<"   |------------------------------------------------|\n";
		    cout<<"   |     [1] - Tallos de almejas                    |\n";
		    cout<<"   |     [2] - Truchas a la navarra                 |\n";
		    cout<<"   |     [3] - Sopa de mariscos                     |\n";
		    cout<<"   |     [4] - Sopa de pasta                        |\n";
		    cout<<"   |------------------------------------------------|\n";
		    cout<<"   |Digite opcion: ";
		    cin>>o;
		    switch(o){
		    	case 1:
		    		system("aaa.doc");
		    		return Recetas();
		    	break;
		    	case 2:
		    		system("aab.doc");
		    		return Recetas();
		    	break;
		    	default: cout<<"opcion mal digitada";
		    	Recetas();
		    	break;
			}
		break;
		default: cout<<"opcion mal digitada"<<endl;
		system("pause");
		RecetasPer();
	}
}
void archivo(){
	 //Entrada a un archivo de texto "PERSONAS.txt"
   ofstream archivo; // funcion de la clase ofstream
   archivo.open("PERSONAS.txt", ios::app); //ios::app Operaciones de añadidura. añade la informacion a un archivo txt o bloc de notas mejor conocido
   archivo<< "Cedula: "<<persona[registro].cedula<<endl;
   archivo<< "Edad:"<<persona[registro].edad<<endl;
   archivo<< "Nombre:  "<<persona[registro].nombre<<endl;
   archivo<< "Apellido: "<<persona[registro].apellido<<endl;
   archivo<< "Fecha ingreso YY/MM/DD: "<<persona[registro].nacimiento<<" "<<persona[registro].mes<<" "<<persona[registro].dia<<endl;
   archivo<< "Estatura (cm): "<<persona[registro].estatura;
   archivo<<" Peso (kg): "<<persona[registro].peso;
   archivo.close(); //pausa el registro y lo cierra 
   //Salida a archivo de texto "PERSONAS.txt"
}
void EliminarRegistro(){
   int eliminar;
   system("cls");
   cout<<"NUMERO DE PERSONA A ELEMINAR: ";
   cin>>eliminar;
   eliminar--; //disminuye en 1 cuando se elemina un contacto
   if (eliminar<registro){
   cout << "\nCedula: ";
   cout << persona[eliminar].cedula; //imprime en la estructura persona la cedula y en el  vector el registro con valor 1 para eliminarlo
   cout << "\nEdad: ";
   cout << persona[eliminar].edad;
   cout << "\nNombre: ";
   cout << persona[eliminar].nombre; //imprime en la estructura persona el nombre y en vector el registro con valor 1 para eliminarlo
   cout << "\nApellido: ";
   cout << persona[eliminar].apellido; //imprime en la estructura persona el apellido y en vector el registro con valor 1 para eliminarlo
   cout << "\nFecha nacimiento: ";
   cout << persona[eliminar].nacimiento<<persona[eliminar].mes<<persona[eliminar].dia;
   cout << "\nEstatura: ";
   cout << persona[eliminar].estatura;
   cout << "\nPeso: ";
   cout << persona[eliminar].peso;
   do{ // condicional do while para validar la informacion y poder eliminarla
   		cout<<"Eliminar contacto de la agenda? [S/N]: "; 
   		cin>>eliminarContacto; //lee dato tipo caracter para eliminar un contacto
   		if((strcmp(eliminarContacto,"s")==0)||(strcmp(eliminarContacto,"S")==0)){ //funcion strcmp es validar dos datos digamos "eliminarcontacto" es igual "s" entonces valida la opcion
   		persona[eliminar]=persona[registro];//dice que la estructura persona con un vector 1 en eliminar si es igual a persona con 1 valor en registro
   		cout<<"\nRegistro eleminado eliminado"<<endl;//confirma que ha sido eliminado el registro o persona
   		system("pause");
   		menu();
   		}
   		if((strcmp(eliminarContacto,"n")==0)||(strcmp(eliminarContacto,"N")==0)){ //funcion strcmp es validar dos datos digamos "eliminarcontacto" es igual "N" entonces valida la opcion
   		cout<<"Registro no ha sido eliminado";//confirma que ha no sido eliminado el registro o persona
   		system("pause");	
   		menu(); //llama funcion para volver al menu principal
   		}
   	}while((eliminarContacto!="S")||(eliminarContacto!="s")||(eliminarContacto!="N")||(eliminarContacto!="n"));//la funcion while dice que si son iguales la opcion eliminarContacto a las letras en mayuscula o minuscula entonces dice que el registro no existe
   	}else{
   	cout<<"El registro no existe";
   	system("pause");	
   	menu();
   	}
}
void ModificarRegistro(){
	system("cls");
   int opEditar,infoEditar;
   cout << "Numero de registro a editar: ";
   cin >> opEditar;
   opEditar--;  //disminuye en 1 cuando se edita un contacto
   if (opEditar < registro){ //verifica que los numeros de opcion editar sean menores al registro para poder editar la persona
   cout << "\n[1] - Cedula: ";
   cout << persona[opEditar].cedula;
   cout << "\n[2] - Edad: ";
   cout << persona[opEditar].edad;
   cout << "\n[3] - Nombre: ";
   cout << persona[opEditar].nombre;
   cout << "\n[4] - Apellido: ";
   cout << persona[opEditar].apellido;
   cout << "\n[5] - Fecha ingreso YY/MM/DD: ";
   cout << persona[opEditar].nacimiento<<persona[opEditar].mes<<persona[opEditar].dia;
   cout << "\n[6] - Estatura: ";
   cout << persona[opEditar].estatura;
   cout << "\n[7] - Peso: ";
   cout << persona[opEditar].peso;
   cout << "\n[8] modificar todo ";
   cout << "\n[9] no modificar nada ";
   cout << "\nInformacion a modificar: ";
   cin >> infoEditar;
   switch (infoEditar){
   case 1:
   		cout << "\nCedula: ";
   		cin >> persona[opEditar].cedula;//lee el caso y en la funcion persona llama la opcion editar el atributo cedula
   break;
   case 2:
   		cout << "\nEdad: ";
   		cin >> persona[opEditar].edad;
   break;
   case 3:
   		cout << "\nNombre: ";
   		cin >> persona[opEditar].nombre;//lee el caso y en la funcion persona llama la opcion editar el atributo nombre
   break;
   case 4:
   		cout << "\nApellido: ";
   		cin >> persona[opEditar].apellido;//lee el caso y en la funcion persona llama la opcion editar el atributo apellido
   break;
   case 5:
   		cout << "\nFecha ingreso YY/MM/DD: ";
   		cin >> persona[opEditar].nacimiento>>persona[opEditar].mes>>persona[opEditar].dia;//lee el caso y en la funcion persona llama la opcion editar el atributo nacimiento
   break;
   case 6:
   		cout << "\nEstatura: ";
   		cin >> persona[opEditar].estatura;
   break;
   case 7:
   		cout << "\nPeso: ";
   		cin >> persona[opEditar].peso;
   break;
   case 8:
	   cout << "\nCedula: ";
	   cin >> persona[opEditar].cedula;
	   cout << "\nNombre: ";
	   cin >> persona[opEditar].nombre;
	   cout << "\nApellido: ";
	   cin >> persona[opEditar].apellido;
	   cout << "\nFecha ingreso: ";
	   cin >> persona[opEditar].nacimiento>>persona[opEditar].mes>>persona[opEditar].dia;
	   cout << "\nEstatura :";
	   cin >> persona[opEditar].estatura;
	   cout << "\nPeso:";
	   cin >> persona[opEditar].peso;
   break;
   case 9:
   		menu();
   break;
   default:
   		cout << "Opcion mal digitada";
   		ModificarRegistro(); //vuelve a funcion modificar persona
   break;
   }
   menu();
   }
   else{ //si es falso dice que no existe registro o persona
   cout << "No existe persona natural";
   system("pause");
   menu();
   }
}
void Visualizar(){
	system("cls");
   int visualizar;
   cout << "Numero de persona natural a ver: ";
   cin >> visualizar;
   visualizar--; //disminuye en 1 cuando se digita opcion
   if (visualizar < registro){ //verifica que los numeros de opcion visualizar sean menores al registro para poder editar la persona
   cout << "\nCedula: ";
   cout << persona[visualizar].cedula;//imprime en pantalla la cedula con un valor en el vector visualizar 1
   cout << "\nEdad: ";
   cout << persona[visualizar].edad;
   cout << "\nNombre: ";
   cout << persona[visualizar].nombre;
   cout << "\nApellido: ";
   cout << persona[visualizar].apellido;
   cout << "\nFecha ingreso YY/MM/DD: ";
   cout << persona[visualizar].nacimiento<<" "<<persona[visualizar].mes<<" "<<persona[visualizar].dia;
   cout << "\nEstatura: ";
   cout << persona[visualizar].estatura;
   cout << "\nPeso: ";
   cout << persona[visualizar].peso;
   system("pause");
   menu();
   }else{
   cout << "Numero de registro no existente.";
   system("pause");
   menu();
   }
}
void Todo(){
   system("cls");
   int visualizarTodo;
   for (visualizarTodo=0;visualizarTodo<registro;visualizarTodo++){ //utiliza un for para validar cuantas personas han sido creadas y imprimirlas todas en pantalla
   cout << "\nCedula: ";
   cout << persona[visualizarTodo].cedula; //imprime en pantalla todos las cedulas registradas 
   cout << "\nEdad: ";
   cout << persona[visualizarTodo].edad;
   cout << "\nNombre: ";
   cout << persona[visualizarTodo].nombre;
   cout << "\nApellido: ";
   cout << persona[visualizarTodo].apellido;
   cout << "\nFecha ingreso: ";
   cout << persona[visualizarTodo].nacimiento<<" "<<persona[visualizarTodo].mes<<" "<<persona[visualizarTodo].dia;
   cout << "\nEstatura: ";
   cout << persona[visualizarTodo].estatura;
   cout << "\nPeso: ";
   cout << persona[visualizarTodo].peso;
   }
   system("pause");
   menu();
}

void Login()//DEFINICIÓN
{ // abrir llave de la función void pass
       string usuario, password;
       int contador = 0;
       bool ingresa = false;
     
       do{
            gotoxy(30,4); // Posicionamiento de coordenadas  
            cout << "INICIAR SESI"<<char(224)<<"N";
            gotoxy(30,5); // Posicionamiento de coordenadas  
            cout << "--------------";
            gotoxy(30,8); // Posicionamiento de coordenadas  
            cout << "Usuario: ";
            getline(cin, usuario);
            gotoxy(30,10); // Posicionamiento de coordenadas  
            cout << "Password: ";
            // getline(cin, password);
            char caracter;
            caracter = getch();
     
            password = "";
          while (caracter != ENTER) 
          {
                if (caracter != BACKSPACE){
                password.push_back(caracter);//valida para convertir en *
                cout << "*"; // impresión en pantalla "*"
                }else{
    				if (password.length() > 0){
    					cout << "\b \b";
    					password = password.substr(0, password.length() - 1);//substr es para validar para letra de la contraseña la vuelve numeros y resta 1 cuando es verdad sino manda un error
    				}
    			}
    			caracter = getch();//system pause
          }  
          if(usuario == USER && password == PASS){
             ingresa = true;
          }else{
          	 error();
             exit(0);
             contador++;
          }
       } 
       while (ingresa == false && contador < 3);
     
       if(ingresa == false){
          Marco();//margenes 
          gotoxy(30,6); // Posicionamiento de coordenadas               
          cout << "HA EXCEDIDO EL LIMITE DE INTENTOS"; // Impresión en pantalla
          exit(0); // Llamado de función exit en 0
       }else{
            system("cls"); // Borrar pantalla
            Marco();//margenes 
            system ("color F5");
            gotoxy(25,7); // Posicionamiento de coordenadas  
            cout << "BIENVENIDO AL SISTEMA"<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"; // Impresión en pantalla
       } 
} // cerrar llave de la función void pass
void error()//DEFINICIÓN
{ // abrir llave de la función void error
	system("cls"); // Borrar pantalla
	Marco();//Llamado de función cuadro
	system("color f5"); //Cambia el color de fondo y el texto, en este caso es Blanco/Negro
	gotoxy(5,8); // Posicionamiento de coordenadas  
	cout<<"ALGUNOS DATOS FUERON MAL ESCRITOS, POR FAVOR INICIAR DE NUEVO";
	Sleep(1000); // Llamado de función Sleep con tienpo de 1000 
	system("cls"); // Borrar pantalla 
} // cerrar llave de la función void error
void integrantes() //DEFINICIÓN
{ // abrir llave de la función void integrantes
     int d=0,h=0;  //
     gotoxy((33),(4+d)); // Posicionamiento de coordenadas  
     cout << " INTEGRANTES " ; //
     d=0;  //
     gotoxy((5),(7+d));  // Posicionamiento de coordenadas  
     cout << " Aura Jazm"<<char(161)<<"n Hern"<<char(160)<<"ndez Acu"<<char(164)<<"a  "; //
     d=d+3; //
     gotoxy((5),(7+d)); // Posicionamiento de coordenadas  
     cout << " C" <<char(224)<< "DIGO: 11231515931" ; //
     d=d+6; //
     gotoxy((43),(7+h)); // Posicionamiento de coordenadas  
     cout << "Silvia Carolina Herrera Sarmiento  ";
     h=h+3; //
     gotoxy((42),(7+h)); // Posicionamiento de coordenadas  
     cout << " C" <<char(224)<< "DIGO:10481511772 " ;
     d=d+3; //
     gotoxy((33),(4+d)); //Posicionamiento de coordenadas  
     cout << " DOCENTE:  "; //
     d=d+2; //
     gotoxy((30),(4+d));// Posicionamiento de coordenadas  
     cout << " TANIA RODR" <<char(214)<<"GUEZ "; //
     d=d+2; //
     gotoxy((25),(4+d)); // Posicionamiento de coordenadas  
     cout << " UNIVERSIDAD ANTONIO NARI" <<char(165)<<"O "; //
     d=d+2; //
} // cerrar llave de la función void integrantes

 void informacion()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((5),(4)); // Posicionamiento de coordenadas 
    cout << "**********************  TU NUTRICI"<<char(224)<<"N PERFECTA   ********************** "; //
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "programa que ayudar a mejorar su salud y h"<<char(160)<<"bitos de nutrici"<<char(162)<<"n diaria"; //
    d=d+2; //
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "te va pedir digitar nombre, edad, peso en kg, altura en cm"; //  
    d=d+2; //
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "el programa muestra su IMC, s"<<char(161)<<" su IMC, se encuentra en sobrepeso"; //
    d=d+2;//
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "Tiene un men"<<char(163)<<" en el cual el usuario escoge opciones para su uso";
    d=d+2;
    gotoxy((5),(2+d)); // Posicionamiento de coordenadas  
    cout << "estado de salud, se le guiara y ayudara para mejorar su nutrici"<<char(162)<<"n.";
    
} // cerrar llave de la función void información
void Marco(){
	int i=0, j=0;	
	
	for	(i=0; i<=23;i++){
		if((i==0)||(i==23)){
			for	(j=0; j<=77;j++){
				gotoxy(j,i) ; 
				cout<<char(220);
			}
		}else  		 {
		   	gotoxy(0,i) ; 
		   	cout<<char(220);
    		gotoxy(77,i) ; 
		   cout<<char(220);  
	   	}
	}	
}
// definición letra U
void letraU(){
	int l=0, c;
 	for(l=1;l<=7;l++){
	 	if (l!=7)	{
	   		c=1;
			while(c<=7){
		   	  	if ((c==1) ||(c==7)){
					gotoxy((25+c),(4+l)) ;   	  	  
					cout <<char(178);
				} 
				c++;	   	
	   		}	
	    }else{ 
			c=1;
		  	while(c<=7){
	   	  		gotoxy((25+c),(4+l)) ;   	  	  
			  	cout <<char(178);
			 	c++;	   	
	   	  	}	
		}  	
 	 }
}
// definición letra a{
void letraA(){
	int l=0, c;
 	for(l=1;l<=7;l++){
	 	if (l!=7)	{
	   		c=1;
			while(c<=7){
		   	  	if ((c==1) ||(c==7)){
					gotoxy((35+c),(5+l)) ;   	  	  
					cout<<char(178);
				} 
				c++;	   	
	   		}	
	    }else{ 
			c=1;
		  	while(c<=7){
	   	  		gotoxy((35+c),(-2+l)) ;   	  	  
			  	cout<<char(178);
			 	c++;	   	
	   	  	}
	   	  	c=1;
                 while(c<=7){
	   	  		gotoxy((35+c),(1+l)) ;   	  	  
			  	cout<<char(178);
			 	c++;	   	
	   	  	}		
		}  
 	 }
}
// definición letra n
void letraN(){
	int l=0, c;
 	for(l=1;l<=7;l++){
	 	if (l!=7)	{
	   		c=1;
			while(c<=7){
		   	  	if ((c==1) ||(c==7))
		        {
					gotoxy((45+c),(5+l)) ;   	  	  
					cout <<char(178);
				} 
				c++;	   	
	   		}	
	    }else{ 
			c=1;
		  	while(c<=7){
	   	  		gotoxy((45+c),(-2+l)) ;   	  	  
			  	cout<<char(178);
			 	c++;	   	
	   	  	}	
		}  	
 	 }
}
void fecha(){
	time_t t,i;
    char *p;//define constrante un caracter p
    i = time (&t);//dice que i es igual a tiempo es exclusivo de la libreria time.h
    p = ctime (&i);//lee que p es igual a tiempo 
     cout<<"          "<<p;		//imprime la fecha dia año actual que tenga el computador a usar 				
}
void marcoTeorico(){
	letraU();
	letraA();
	letraN();
}
void carga(){//funcion encargada de de mostrar la barra de carga del programa
 int c, m=10,i=0, j=0;	
	system("cls");
	for	(i=0; i<=23;i++){ //
		if((i==0)||(i==23)){ 
			for	(j=0; j<=77;j++){//crea el lado horizontal osea el tamaño
				gotoxy(j,i) ; 
				cout<<char(220);//codigo ASCII en forma de cuadro para imprimir la barra de carga
			}
		}else{
		   	gotoxy(0,i) ; //ubica en plano carteaiano la ubicacion de la barra de carga en X y en Y
		   	cout<<char(220);
    		gotoxy(77,i) ; //ubica en plano carteaiano la ubicacion de la barra de carga en X y en Y
		   cout<<char(220); 
	   	}
	}
    gotoxy (30,5);//ubica en plano carteaiano la ubicacion de la barra de carga en X y en Y
    cout<<"LOADING...";
    Sleep(50);//funcion para realentizar la funcion de imprimir la barra de carga
    for(c=15;c<=75;c++){ //bucle para hacer el menu de carga
    m++;
    gotoxy (m,10);
    cout<<char(219);//el caracter que va mostrar la barra de la carga
  Sleep(50);//funcion para realentizar la funcion de imprimir la barra de carga
}  
 cout<<"\a";
 system("cls");
}
void gotoxy(short x, short y){
 HANDLE hConsoleOutput;
 COORD Cursor_Pos = {x, y};//asigna las coordenadas de X y Y para utlizarlas en consola
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
