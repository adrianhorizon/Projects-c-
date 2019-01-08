#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void gotoxy (int x, int y);//funcion para ubicacion en plano cartesiano
void letra1();//letra u
void letra2();//letra a
void letra3();//letra n
void letrasTot();//imprime marco y uan
void cuadro();//imprime margen
void informacion();
void informacion2();
void informacion3();
void informacion4();
void informacion5();
void informacion6();
void integrantes();
void menu();
void Fauna();
void Flora();
void Anfibios();
void Terrestres();
void Reptil();
void Mamifero();
void Aereos();

struct Datos{//struct para almacenar vectores 
   string especie;//char de un vector que almacena 25 caracteres o datos
}DatosP[25]; //llama un vector para utilizar struct
int opcion; //opcion de tipo entero/numeros
int registro = 0; //registro para almacenar el numero de registros almacenados

int main(){
	system ("color f5");
    letrasTot();
	cuadro();
	system("pause");
    system("cls"); 
    
	integrantes();
	cuadro();
	system ("pause");
    system("cls");
	   
    informacion();
    cuadro();	
	system ("pause");
	system("cls");
	
	informacion2();
    cuadro();	
	system ("pause");
	system("cls");
	
	informacion3();
    cuadro();	
	system ("pause");
	system("cls");
	
	informacion4();
    cuadro();	
	system ("pause");
	system("cls");
	
	informacion5();
    cuadro();	
	system ("pause");
	system("cls");
	
	informacion6();
    cuadro();	
	system ("pause");
	system("cls");
	menu();	
}
void menu()
{
	system("cls");
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Fauna                          |\n";
    cout<<"   |     [2] - Flora                          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [3] - Salir                          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
	  		Fauna();
      break;
      case 2:
      		Flora();
      break;
      case 3:
      	exit(0);//cierra el programa
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	main();
      break;
   }
}
void Fauna(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |                  Fauna                   |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Aereo                          |\n";
    cout<<"   |     [2] - Terrestre                      |\n";
    cout<<"   |     [3] - Anfibios                       |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
	  		Aereos();	
      break;
      case 2:
      		Terrestres();
      break;
      case 3:
      		Anfibios();
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Fauna();
      break;
   }
}
void Aereos(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |               AEREOS                     |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Pato paramuno                  |\n";
    cout<<"   |     [2] - Aguila real                    |\n";
    cout<<"   |     [3] - Gallineta azul                 |\n";
    cout<<"   |     [4] - Condor de los andes            |\n";
    cout<<"   |     [5] - Gallito de roca                |\n";
    cout<<"   |     [6] - Periquito de monta"<<char(164)<<"a           |\n";
    cout<<"   |     [7] - Colibri pechipunteado          |\n";
    cout<<"   |     [8] - Pavas                          |\n";
    cout<<"   |     [9] - Tucan                          |\n";
    cout<<"   |     [10] - Rascon andino                 |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
      		system("Fauna\\Pato.txt");
			return Aereos();
      break;
      case 2:
      		system("Fauna\\Aguila.txt");
			return Aereos();
      break;
      case 3:
      		system("Fauna\\Gallineta.txt");
			return Aereos();
      break;
      case 4:
      		system("Fauna\\Condor.txt");
			return Aereos();
      break;
      case 5:
      		system("Fauna\\Gallito.txt");
			return Aereos();
      break;
      case 6:
      		system("Fauna\\Periquito.txt");
			return Aereos();
      break;
      case 7:
      		system("Fauna\\Colibri.txt");
			return Aereos();
      break;
      case 8:
      		system("Fauna\\Pavas.txt");
			return Aereos();
      break;
      case 9:
      		system("Fauna\\Tucan.txt");
			return Aereos();
      break;
      case 10:
      		system("Fauna\\Rascon.txt");
			return Aereos();
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Aereos();
      break;
   }
}
void Terrestres(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |               TERRESTRES                 |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Reptil                         |\n";
    cout<<"   |     [2] - Mamifero                       |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
	  		Reptil();
      break;
      case 2:
      		Mamifero();
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Fauna();
      break;
   }
}
void Mamifero(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |               MAMIFERO                   |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Oso de anteojos                |\n";
    cout<<"   |     [2] - Venado colorado                |\n";
    cout<<"   |     [3] - Danta de paramo                |\n";
    cout<<"   |     [4] - Ardilla                        |\n";
    cout<<"   |     [5] - Zorro                          |\n";
    cout<<"   |     [6] - Venado cola blanca             |\n";
    cout<<"   |     [7] - Borugo de paramo               |\n";
    cout<<"   |     [8] - Puma                           |\n";
    cout<<"   |     [9] - Venado matacan                 |\n";
    cout<<"   |     [10] - Jaguar                        |\n";
    cout<<"   |     [11] - Mono churuco                  |\n";
    cout<<"   |     [12] - Mono nocturno                 |\n";
    cout<<"   |     [13] - Tigrillo                      |\n";
    cout<<"   |     [14] - Chuchas                       |\n";
    cout<<"   |     [15] - Comadreja                     |\n";
    cout<<"   |     [16] - Gato de monte                 |\n";
    cout<<"   |     [17] - Zorro gris                    |\n";
    cout<<"   |     [18] - Venado soche                  |\n";
    cout<<"   |     [19] - Raton de paramo               |\n";
    cout<<"   |     [20] - Guaches                       |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
      		system("Fauna\\Oso.txt");
			return Mamifero();
      break;
      case 2:
      		system("Fauna\\VenadoColorado.txt");
			return Mamifero();
      break;
      case 3:
      		system("Fauna\\Danta.txt");
			return Mamifero();
      break;
      case 4:
      		system("Fauna\\Ardilla.txt");
			return Mamifero();
      break;
      case 5:
      		system("Fauna\\Zorro.html");
			return Mamifero();
      break;
      case 6:
      		system("Fauna\\VenadoBlanco.txt");
			return Mamifero();
      break;
      case 7:
      		system("Fauna\\Borugo.txt");
			return Mamifero();
      break;
      case 8:
      		system("Fauna\\Puma.txt");
			return Mamifero();
      break;
      case 9:
      		system("Fauna\\VenadoMatacan.txt");
			return Mamifero();
      break;
      case 10:
      		system("Fauna\\Jaguar.txt");
			return Mamifero();
      break;
      case 11:
      		system("Fauna\\MonoChuruco.txt");
			return Mamifero();
      break;
      case 12:
      		system("Fauna\\MonoNocturno.txt");
			return Mamifero();
      break;
      case 13:
      		system("Fauna\\Tigrillo.txt");
			return Mamifero();
      break;
      case 14:
      		system("Fauna\\Chuchas.txt");
			return Mamifero();
      break;
      case 15:
      		system("Fauna\\Comadreja.txt");
			return Mamifero();
      break;
      case 16:
      		system("Fauna\\Gato.txt");
			return Mamifero();
      break;
      case 17:
      		system("Fauna\\ZorroGris.txt");
			return Mamifero();
      break;
      case 18:
      		system("Fauna\\VenadoSoche.txt");
			return Mamifero();
      break;
      case 19:
      		system("Fauna\\Raton.txt");
			return Mamifero();
      break;
      case 20:
      		system("Fauna\\Guaches.txt");
			return Mamifero();
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Mamifero();
      break;
   }
}
void Reptil(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |               REPTIL                     |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - Serpiente tierrera             |\n";
    cout<<"   |     [2] - Cucarron                       |\n";
    cout<<"   |     [3] - Mosca                          |\n";
    cout<<"   |     [4] - Abeja                          |\n";
    cout<<"   |     [5] - Hormiga                        |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
      		system("Fauna\\Serpiente.txt");
			return Reptil();
      break;
      case 2:
      		system("Fauna\\Cucarron.txt");
			return Reptil();
      break;
      case 3:
      		system("Fauna\\Mosca.txt");
			return Reptil();
      break;
      case 4:
      		system("Fauna\\Abeja.txt");
			return Reptil();
      break;
      case 5:
      		system("Fauna\\Hormiga.txt");
			return Reptil();
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Reptil();
      break;
   }
}
void Anfibios(){
	system("cls");
			cout<<"   |------------------------------------------|\n";
			cout<<"   |                 ANFIBIOS                 |\n";
			cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [1] - Rana                           |\n";
		    cout<<"   |     [2] - Salamandra                     |\n";
		    cout<<"   |     [3] - Sapo                           |\n";
		    cout<<"   |     [4] - Rana de cristal                |\n";
		    cout<<"   |     [5] - Lagartija                      |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [0] - Volver menu principal          |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |      Digite opcion:"; 
		    cin >> opcion; //lee valor de tipo entero 
		   	switch (opcion){ //accede a un menu de opciones
		      case 1:
			  		system("Fauna\\Rana.txt");
			  		return Anfibios();
		      break;
		      case 2:
		      		system("Fauna\\Salamandra.txt");
			  		return Anfibios();	
		      break;
		      case 3:
		      		system("Fauna\\Sapo.txt");
			  		return Anfibios();
		      break;
		      case 4:
		      		system("Fauna\\RanaDe.txt");
			  		return Anfibios();
		      break;
		      case 5:
		      		system("Fauna\\Lagartija.txt");
			  		return Anfibios();
		      break;
		      case 0:
		      	menu();
		      break;
		      default: 
			  	cout << "Opcion mal digitada ";
			  	Anfibios();
		      break;
		   }	
}
void Flora(){
	system("cls");
	cout<<"   |------------------------------------------|\n";
	cout<<"   |                  Flora                   |\n";
	cout<<"   |------------------------------------------|\n";
    cout<<"   |     [1] - arboreas                       |\n";
    cout<<"   |     [2] - herbaceas                      |\n";
    cout<<"   |     [3] - arbusticas                     |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |     [0] - Volver menu principal          |\n";
    cout<<"   |------------------------------------------|\n";
    cout<<"   |      Digite opcion:"; 
    cin >> opcion; //lee valor de tipo entero 
   	switch (opcion){ //accede a un menu de opciones
      case 1:
			system("cls");
			cout<<"   |------------------------------------------|\n";
			cout<<"   |                 ARBOREAS                 |\n";
			cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [1] - Aliso                          |\n";
		    cout<<"   |     [2] - Mortillo                       |\n";
		    cout<<"   |     [3] - Palma boba                     |\n";
		    cout<<"   |     [4] - Raque                          |\n";
		    cout<<"   |     [5] - Arrayan                        |\n";
		    cout<<"   |     [6] - Sauco                          |\n";
		    cout<<"   |     [7] - Urapan                         |\n";
		    cout<<"   |     [8] - Mano de oso                    |\n";
		    cout<<"   |     [9] - Arboloco                       |\n";
		    cout<<"   |     [10] - Borrachero blanco             |\n";
		    cout<<"   |     [11] - Borrachero rojo               |\n";
		    cout<<"   |     [12] - Tague                         |\n";
		    cout<<"   |     [13] - Charne                        |\n";
		    cout<<"   |     [14] - Ruque                         |\n";
		    cout<<"   |     [15] - Laurel hijopeque"<<char(164)<<"o            |\n";
		    cout<<"   |     [16] - Trompeto                      |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [0] - Volver menu principal          |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |      Digite opcion:"; 
		    cin >> opcion; //lee valor de tipo entero 
		   	switch (opcion){ //accede a un menu de opciones
		      case 1:
			  		system("Fauna\\Aliso.txt");
			  		return Flora();
		      break;
		      case 2:
		      		system("Fauna\\Mortillo.txt");
			  		return Flora();
		      break;
		      case 3:
		      		system("Fauna\\PalmaBo.txt");
			  		return Flora();
		      break;
		      case 4:
		      		system("Fauna\\Raque.txt");
			  		return Flora();
		      break;
		      case 5:
		      		system("Fauna\\Arrayan.txt");
			  		return Flora();
		      break;
		      case 6:
		      		system("Fauna\\Sauco.txt");
			  		return Flora();
		      break;
		      case 7:
		      		system("Fauna\\Urapan.txt");
			  		return Flora();
		      break;
		      case 8:
		      		system("Fauna\\ManoDe.txt");
			  		return Flora();
		      break;
		      case 9:
		      		system("Fauna\\ArboLoco.txt");
			  		return Flora();
		      break;
		      case 10:
		      		system("Fauna\\BorracheroBla.txt");
			  		return Flora();
		      break;
		      case 11:
		      		system("Fauna\\BorracheroRojo.txt");
			  		return Flora();
		      break;
		      case 12:
		      		system("Fauna\\Tague.txt");
			  		return Flora();
		      break;
		      case 13:
		      		system("Fauna\\Charne.txt");
			  		return Flora();
		      break;
		      case 14:
		      		system("Fauna\\Ruque.txt");
			  		return Flora();
		      break;
		      case 15:
		      		system("Fauna\\LaurelHo.txt");
			  		return Flora();
		      break;
		      case 16:
		      		system("Fauna\\Trompeto.txt");
			  		return Flora();
		      break;
		      case 0:
		      	menu();
		      break;
		      default: 
			  	cout << "Opcion mal digitada ";
			  	Flora();
		      break;
		   }	
      break;
      case 2:
      		system("cls");
			cout<<"   |------------------------------------------|\n";
			cout<<"   |                 HERBACEAS                |\n";
			cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [1] - Ajenjo                         |\n";
		    cout<<"   |     [2] - Junco                          |\n";
		    cout<<"   |     [3] - Lengua evaca                   |\n";
		    cout<<"   |     [4] - Lirio de paramo                |\n";
		    cout<<"   |     [5] - Alcachofa                      |\n";
		    cout<<"   |     [6] - Amapola                        |\n";
		    cout<<"   |     [7] - Paica                          |\n";
		    cout<<"   |     [8] - Toronjil                       |\n";
		    cout<<"   |     [9] - Coralito                       |\n";
		    cout<<"   |     [10] - Quinche                       |\n";
		    cout<<"   |     [11] - Diente de leon                |\n";
		    cout<<"   |     [12] - Hinojo                        |\n";
		    cout<<"   |     [13] - Kikuyo                        |\n";
		    cout<<"   |     [14] - Orquidea                      |\n";
		    cout<<"   |     [15] - Verbena                       |\n";
		    cout<<"   |     [16] - Nabo                          |\n";
		    cout<<"   |     [17] - Cardoncillo                   |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [0] - Volver menu principal          |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |      Digite opcion:"; 
		    cin >> opcion; //lee valor de tipo entero 
		   	switch (opcion){ //accede a un menu de opciones
		      case 1:
			  		system("Fauna\\Ajenjo.txt");
			  		return Flora();
		      break;
		      case 2:
		      		system("Fauna\\Junco.txt");
			  		return Flora();
		      break;
		      case 3:
		      		system("Fauna\\Lengua.txt");
			  		return Flora();
		      break;
		      case 4:
		      		system("Fauna\\Lirio.txt");
			  		return Flora();
		      break;
		      case 5:
		      		system("Fauna\\Alcachofa.txt");
			  		return Flora();
		      break;
		      case 6:
		      		system("Fauna\\Amapola.txt");
			  		return Flora();
		      break;
		      case 7:
		      		system("Fauna\\Paica.txt");
			  		return Flora();
		      break;
		      case 8:
		      		system("Fauna\\Toronjil.txt");
			  		return Flora();
		      break;
		      case 9:
		      		system("Fauna\\Coralito.txt");
			  		return Flora();
		      break;
		      case 10:
		      		system("Fauna\\Quinche.txt");
			  		return Flora();
		      break;
		      case 11:
		      		system("Fauna\\Diente.txt");
			  		return Flora();
		      break;
		      case 12:
		      		system("Fauna\\Hinojo.txt");
			  		return Flora();
		      break;
		      case 13:
		      		system("Fauna\\Kikuyo.txt");
			  		return Flora();
		      break;
		      case 14:
		      		system("Fauna\\Orquidea.txt");
			  		return Flora();
		      break;
		      case 15:
		      		system("Fauna\\Verbena.txt");
			  		return Flora();
		      break;
		      case 16:
		      		system("Fauna\\Nabo.txt");
			  		return Flora();
		      break;
		      case 17:
		      		system("Fauna\\Cardoncillo.txt");
			  		return Flora();
		      break;
		      case 0:
		      	menu();
		      break;
		      default: 
			  	cout << "Opcion mal digitada ";
			  	Flora();
		      break;
		   }		
      break;
      case 3:
      		system("cls");
			cout<<"   |------------------------------------------|\n";
			cout<<"   |                 ARBUSTICAS               |\n";
			cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [1] - Mora de zorro                  |\n";
		    cout<<"   |     [2] - Chilco                         |\n";
		    cout<<"   |     [3] - Chite                          |\n";
		    cout<<"   |     [4] - Dalia silvestre                |\n";
		    cout<<"   |     [5] - Zarzamora                      |\n";
		    cout<<"   |     [6] - Jome                           |\n";
		    cout<<"   |     [7] - Ciro                           |\n";
		    cout<<"   |     [8] - Cardon                         |\n";
		    cout<<"   |     [9] - Bombillo                       |\n";
		    cout<<"   |     [10] - Angelito                      |\n";
		    cout<<"   |     [11] - Papayuela                     |\n";
		    cout<<"   |     [12] - Romero                        |\n";
		    cout<<"   |     [13] - U"<<char(164)<<"egato                       |\n";
		    cout<<"   |     [14] - Frailejon                     |\n";
		    cout<<"   |     [15] - Pegamosco                     |\n";
		    cout<<"   |     [16] - Uva camarona                  |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |     [0] - Volver menu principal          |\n";
		    cout<<"   |------------------------------------------|\n";
		    cout<<"   |      Digite opcion:"; 
		    cin >> opcion; //lee valor de tipo entero 
		   	switch (opcion){ //accede a un menu de opciones
		      case 1:
			  		system("Fauna\\Mora.txt");
			  		return Flora();
		      break;
		      case 2:
		      		system("Fauna\\Chilco.txt");
			  		return Flora();
		      break;
		      case 3:
		      		system("Fauna\\Chite.txt");
			  		return Flora();
		      break;
		      case 4:
		      		system("Fauna\\Dalia.txt");
			  		return Flora();
		      break;
		      case 5:
		      		system("Fauna\\Zarzamora.txt");
			  		return Flora();
		      break;
		      case 6:
		      		system("Fauna\\Jome.txt");
			  		return Flora();
		      break;
		      case 7:
		      		system("Fauna\\Ciro.txt");
			  		return Flora();
		      break;
		      case 8:
		      		system("Fauna\\Cardon.txt");
			  		return Flora();
		      break;
		      case 9:
		      		system("Fauna\\Bombillo.txt");
			  		return Flora();
		      break;
		      case 10:
		      		system("Fauna\\Angelito.txt");
			  		return Flora();
		      break;
		      case 11:
		      		system("Fauna\\Papayuela.txt");
			  		return Flora();
		      break;
		      case 12:
		      		system("Fauna\\Romero.txt");
			  		return Flora();
		      break;
		      case 13:
		      		system("Fauna\\Uñegato.txt");
			  		return Flora();
		      break;
		      case 14:
		      		system("Fauna\\Frailejon.txt");
			  		return Flora();
		      break;
		      case 15:
		      		system("Fauna\\Pegamosco.txt");
			  		return Flora();
		      break;
		      case 16:
		      		system("Fauna\\Uva.txt");
			  		return Flora();
		      break;
		      case 0:
		      	menu();
		      break;
		      default: 
			  	cout << "Opcion mal digitada ";
			  	Flora();
		      break;
		   }
      break;
      case 0:
      	menu();
      break;
      default: 
	  	cout << "Opcion mal digitada ";
	  	Flora();
      break;
   }
}
void letrasTot()
{
	letra1();
	letra2();
	letra3();
	gotoxy((25),(20));//coordenadas en planos de X y Y
	cout << " ";
	gotoxy((25),(19));
    cout << " ";
	gotoxy((25),(18));
    cout << "  ";
    gotoxy((25),(17));
    cout << " ";
}
void cuadro(){
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
void integrantes() //DEFINICIÓN
{ // abrir llave de la función void integrantes
     int d=0,h=0;  //
     gotoxy((33),(4+d)); // Posicionamiento de coordenadas  
     cout << " INTEGRANTES " ; //
     d=0;  //
     gotoxy((5),(7+d));  // Posicionamiento de coordenadas  
     cout << " ASTRID YANIRA CASSIANO SARAY "; //
     d=d+3; //
     gotoxy((5),(7+d)); // Posicionamiento de coordenadas  
     cout << " CODIGO: 11231512633" ; //
     d=d+6; //
     gotoxy((43),(7+h)); // Posicionamiento de coordenadas  
     cout << " ANGIE CAROLINA DIAZ OVALLE  ";
     h=h+3; //
     gotoxy((42),(7+h)); // Posicionamiento de coordenadas  
     cout << " CODIGO:11231517663 " ;
     d=d+3; //
     gotoxy((33),(4+d)); //Posicionamiento de coordenadas  
} // cerrar llave de la función void integrantes
void informacion()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((3),(4)); // Posicionamiento de coordenadas 
    cout << "********************** PARQUE NATURAL CHINGAZA ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "se desprende de un ramal del paramo de Guasca"; //
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "cadena montañosa que nutre con sus aguas a grandes cuencas hidrograficas"; //  
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "la del rio Negro y la del rio Guavio."; //
    d=d+2;//
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "este parque se encuentran algunos de los endemismos de la flora Colombiana";
    d=d+2;
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "una de las lagunas más místicas de la region andina la Laguna de Siecha.";
    
} // cerrar llave de la función void información
void informacion2()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((5),(4)); // Posicionamiento de coordenadas 
    cout << "********************** LOCALIZACION ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "En jurisdiccion de los departamentos de Cundinamarca y Meta"; //
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "abarca sectores de diez municipios y comprende las cuencas del rio Negro"; //  
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Gualtiquia y Guavio, de la Orinoquía y de Siecha o Tomine"; //
    d=d+2;//
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "de la Hoya del Magdalena.";   
} // cerrar llave de la función void información
void informacion3()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((3),(4)); // Posicionamiento de coordenadas 
    cout << "********************** POBLACIONES CERCANAS ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Bogota, La Calera, Fomeque."; //
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "********************** AREA ********************** ";  
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "50.374 hectareas."; //
    d=d+2;//
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "********************** TEMPERATURA ********************** ";
    d=d+2;
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Segun la altura sobre nivel del mar entre 21,4 tierras \n   bajas y 4,5 en el paramo.";
    
} // cerrar llave de la función void información
void informacion4()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((3),(4)); // Posicionamiento de coordenadas 
    cout << "********************** MESES SECOS ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Entre diciembre y marzo."; //
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "********************** MESES LLUVIOSOS ********************** ";  
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Entre abril y noviembre."; //
    d=d+2;//
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "********************** PRECIPITACION PROMEDIO ********************** ";
    d=d+2;
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "4.000 mm anuales.";
    
} // cerrar llave de la función void información
void informacion5()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((3),(4)); // Posicionamiento de coordenadas 
    cout << "********************** VIAS DE ACCESO ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "La carretera que conduce al parque se toma 2Km despues de La Calera \n   por la via a Guasca"; //
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "Desde este punto a 35 km. por la carretera \n   que conduce al Reten de Piedras Gordas";  
    d=d+2; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "se encuentra la entrada al parque y al sector de las Lagunas de Siecha, \n   Fausto y Sur America"; //
    d=d+2;//
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "";
    d=d+2;
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << " ";
    
} // cerrar llave de la función void información
void informacion6()//DEFINICIÓN
{ // abrir llave de la función void información
    int d=6; // variable declarando para mover todo el texto 
    gotoxy((3),(4)); // Posicionamiento de coordenadas 
    cout << "********************** INFORMACION ********************** "; //
    gotoxy((3),(2+d)); // Posicionamiento de coordenadas  
    cout << "PODRA ENCONTRAR INFORMACION SEOBRE LA FAUNA Y FLORA DE ESTE PARQUE"; //   
} // cerrar llave de la función void información
void gotoxy (int x, int y) 
 {  
      HANDLE hcon;                               //dominio manual
      hcon = GetStdHandle (STD_OUTPUT_HANDLE);   // igual al llamado entrada y salida de los datos handle
      COORD dwPos;                               // coordenada para X y Y 
      dwPos.X = x;                               // crea un objeto
      dwPos.Y = y;  
      SetConsoleCursorPosition (hcon, dwPos);   
 }
 
