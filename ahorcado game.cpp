#include<cstdlib>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<math.h>
#include<ctype.h>

using namespace std;

void menu();
void carga();
void palabrasAdivinar();
void juego(char palabra[50][20], int n);
void rotulo(int e);
void pieder();
void pieizq();
void made();
void maiz();
void base();
void cuerpo();
void cabeza();
void gotoxy(short x, short y);
 
//Funcion principal se encarga de llamar a la funciones carga y menu
int main(){
 carga();//llamada de la funcion "carga"
 menu();//llamada de la funcion "menu"
 system("pause");
return 0;
}// Termina la funcion principal
void carga(){//funcion encargada de de mostrar la barra de carga del programa
 int c, m=6;
 system("cls");
    gotoxy (30,5);
	cout<<"Cargando";
 Sleep(200);
 for(c=15;c<=75; c++){
  m++;
     gotoxy (m,10);
	 cout<<char(219);
  Sleep(100);
 }  
 cout<<"\a";
 system("cls");
}
void menu(){
 char op;
 do{//imprime el menu principal varias veces hasta que sea necesareo
   system("cls");
   gotoxy (30,1); //dibuja como un plano cartesiano para ubicar las palabras o simbolos
   cout<<"JUEGO DEL AHORCADO";
   gotoxy (30,4); 
   cout<<"1.Palabras";
   gotoxy (30,6); 
   cout<<"2.Salir";
   gotoxy (30,8); 
   cout<<"Digite opcion:";
   cin>>op;
   
  }while(op<'1'||op>'2');//evalua los datos ingresados por el usuario
 switch(op){//seleeciona el caso ingresado por el usuario
  case '1': palabrasAdivinar();break;// llamado a la funcion animales
  case '2':cout<<("\n\nAdios\n\n");
  break;
 }
}
void palabrasAdivinar(){
 char palabra[50][20]={
 						"hola","loco","camion","estructura"
 };
 //asignacion de palabras a una lista
 int n=0, i;
 char op;
 fflush(stdin);
 do{// muestra el menu si no se cumple la condicion
  fflush(stdin);
  system("cls");
  gotoxy (30,4);  
  cout<<"1.Jugar con palabras en lista";
  gotoxy (30,6); 
  cout<<"2.Volver al menu principal";
  gotoxy (30,8); 
  cout<<"    Digite opcion: ";
  cin>>op;
 }while(op<'1'||op>'2');//evaluacion de las datos ingresados por el usuario
  switch(op){
  case'1':
  		juego(palabra,n);break;//llama al funcion juego y le manda la lista con las palabras asignadas
  case'2':menu();break;// llama a la funcion menu
 }
}
 
void juego(char palabra[50][20], int n){
 int contador,longitud,i,j, e,error, m=13;
 char palabras[30], respuesta[30], letra, res, res1;
 do{
 	system("cls");
	  gotoxy (30,1); 
	  cout<<"JUEGO DEL AHORCADO     ";
	  base();//lama a la funcion base
	  rotulo(0);//llama ala funcion rotulo para ver el numero de oportunidades restantes
	  srand (time (NULL));
	  longitud=rand()%(m+n);//genera un numero aleatorio y lo almacena en la variable longitud
	  e=0;
	  contador=0;
	  strcpy(palabras,palabra[longitud]);//copia en la variable una variable de la lista
	  longitud=strlen(palabras);//se obtiene el tamaño de la palabra y  se almacena en longitud
	  gotoxy(4,30);
	  for (i=0; i<longitud ; i++){fflush(stdin);
	   respuesta[i]='*';//se almacena * en un vector
	   cout<<respuesta[i];// se imprime * en el lugar de las letras
  }
  do{
   fflush (stdin);
   gotoxy (4,32); 
   cout<<"Digite una letra:";
   cin>>letra;//captura   una letra
   letra=tolower(letra);//convierte unna letra mayuscula en minuscula
   gotoxy (21,32);printf("     ");
   error=0;//se inicializa en 0
   gotoxy(4,30);
   for(j=0; j<longitud; j++)  {
    if (letra==palabras[j]){/*compara si la letra ingresada por el usuario corresponde a una posicion de la
     palabra*/
     if(letra!=respuesta[j]){
      respuesta[j]=letra;// la susttituye por el *
      contador++;//aumenta contador en uno
     }
    }
    else{
     error++;//aumenta error en uno
    }
    cout<<respuesta[j];//imprime la letra correcta
   }
   if(error==longitud){//entra si la letra ingresada no corresponde a ninguna de la palabra a adivinar
    e++;//segun la cantidad de letras erroneas aumenta en 1
   }
   rotulo(e);//llama ala funcien rotunlo y le envia e
     switch (e){//segun nel numero de errores selecciona un caso
      case 1:cabeza();
	  break;//llama a la funcion que dibuja la cabeza
      case 2:cuerpo();
	  break;//llama a la funcion que dibuja el cuerpo
      case 3:made();
	  break;//llama a la funcion que dibuja la mano derecha
      case 4:maiz();
	  break;//llama a la funcion que dibuja la mano izquierda
      case 5:pieizq();
	  break;//llama a la funcion que dibuja la piena izquierda
      case 6:pieder();
	  break;//llama a la funcion que dibuja la piena derecha
     } 
  }while(contador<longitud && e<6);
  
  if(e==6){//entra si ninguna de las letras corresponden ala palabra o se cometieron 6 errores
   gotoxy(4,32);
   cout<<"HA PERDIDO. PRESIONE ENTER PARA VER LA PALABRA SECRETA";
   getch();//es como un system pause
   gotoxy(4,30);
   for(j=0; j<longitud; j++){ 
    cout<<palabras[j];//imprime la palabra
   }
  }
  if(contador==longitud){//entra si todas las letras ingresadas corresponden a la palabra o se cometieron menos de 6 errores
   
   if(e==0){//si no se cometio ningun error
    gotoxy(4,32);
	cout<<"HA GANADO     ";
   }
   else{//si se cometirooon pocos errores
    gotoxy(4,32);
	cout<<"HA GANADO     "<<e;
   }
  }
  fflush(stdin);
  gotoxy(4,35);
  cout<<"Digite S para jugar de nuevo:";
  cin>>res;
  fflush(stdin);
 }while(res=='S' || res=='s');//si el caracter ingresado es S repite el juego 
}
/*funcion que muestra el rotulo en donde menciona el numero
 de oportunidades que quedan*/
void rotulo(int e){
 int f=0;
 f=6-e;
 gotoxy (40,3); 
 cout<<"|-----------------------------";
 gotoxy (40,4); 
 cout<<"|                             ";
 gotoxy (40,5); 
 cout<<"|    Usted tiene "<<f<<"              ";
 gotoxy (40,6); 
 cout<<"|    Oportunidades            ";
 gotoxy (40,7); 
 cout<<"|-----------------------------";
}
//Funcion que imprime la  mano derecha
void made( void){
 int j;
 for(j=0;j<3;j++){
  gotoxy(19-j,10+j);
  cout<<"*";
 }
}

void maiz(void){
 int i;
 for(i=0;i<3;i++) {
  gotoxy(23-i,12-i);
  cout<<"*";
 }
}

void cuerpo(){
 int i;
 for(i=0;i<9;i++) {
  gotoxy(20,9+i);
  cout<<"*";
 }
}

void base(){
 int x,y;
    system("mode 80");    
 for(x=2;x<=27;x++){
  gotoxy(10,x);
  cout<<"*";
 }
 for(y=11;y<=20;y++){
  gotoxy(y,2);
  cout<<"*";
 }
 for(y=5;y<=15;y++){
  gotoxy(y,28);
  cout<<"*";
 }
 gotoxy(20,3);
 cout<<"*";
 gotoxy(20,4);
 cout<<"*";
 }

void pieizq(void){
 int i;
 for(i=0;i<3;i++) {
  gotoxy(21+i,18+i);
  cout<<"*";
 }
}

void pieder(void){
 int i;
 for(i=0;i<3;i++) {
  gotoxy(19-i,18+i);
  cout<<"*";
 }
}

void cabeza(){
 int i,j;
 for(i=0;i<5;i++){
  gotoxy(18+i,4);
  cout<<"*";
  gotoxy(18+i,8);
  cout<<"*";
 } 
 gotoxy(19,5);

 for(j=0;j<3;j++){
  gotoxy(18,5+j);
  cout<<"*";
  gotoxy(22,5+j);
  cout<<"*";
 }
}

void gotoxy(short x, short y) {
 HANDLE hConsoleOutput;
 COORD Cursor_Pos = {x, y};
 hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
