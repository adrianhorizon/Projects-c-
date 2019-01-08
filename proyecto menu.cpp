 #include <iostream>
#include <cstdlib>
#include <Cmath>
#include <iomanip>
#define pi 3.1416

using namespace std;

class Matematica{
      public:
             void Calculadora();
             void Triangulos();
             void Triangulo();
             void Numeros();
             void Cuadratica();
             void Primos();
             void Romanos();
             void Adivinar();
             void Palindromo();
             void Tablas();
             void Factorial();              
};

class Programacion{
      public:
             void PintarAjedrez();
             void CreditoU();
             void NotasAyuda();
             void Fotocopias();
             void Fibonacci();
             void Rombo();
             void Magico();
             void Empresa();
             void Cedula();
             void Pintar();
             void Flecha();
};

class Juegos{
      public:
             void Triki();
             void Ahorcado();
};

void Matematica::Calculadora(){
     
int op,s,total=0,num,num2,result;

             system("cls");
            cout<<"   |-----------------------------------------|\n";
            cout<<"   |     [1] - Suma                          |\n";
            cout<<"   |     [2] - Resta                         |\n";
            cout<<"   |     [3] - Multiplicacion                |\n";
            cout<<"   |     [4] - Division                      |\n";
            cout<<"   |-----------------------------------------|\n";
            cout<<"         Digite opcion:"; 
             cin>>op;
             
     switch(op){
                
      case 1:
             system ("cls");
             
             cout<<"Ha seleccionado suma\n";
             cout<<"Cuantos numeros desea calcular:";
             cin>>s;
                    for (int i=1; i<s ;i++)
                    {
                    cout<<"Digite el numero "<<i<<": ";
                    cin>>num;
                    total = total + num;
                    }
                    cout<<"El resultado es: "<<total<<endl;
                    cout<<"\n\n\nPRESIONE ENTER PARA VOLVER AL MENU";
      break;
      case 2:
             system ("cls");
             
             cout<<"Ha seleccionado resta\n";
             cout<<"Digite un numero 1: ";
             cin>>num;
             cout<<"Digite un numero 2: ";
             cin>>num2;
           
            result = num - num2;
           
            cout<<"El resultado es: "<< result <<endl;
            cout<<"\n\n\nPRESIONE ENTER PARA VOLVER AL MENU";
      break;  
      case 3:
             system ("cls");
             
      		 cout<<"Ha seleccionado Multiplicacion\n";
      		 cout<<"Digite un numero 1:";
      		 cin>>num;
      		 cout<<"Digite un numero 2:";
      		 cin>>num2;
      		
      		 result = num * num2;
      		
      		 cout<<"El resultado es: "<<result<<endl;
      		 cout<<"\n\n\nPRESIONE ENTER PARA VOLVER AL MENU";
      break;
      
      case 4:
             system ("cls");
             
      	     cout<<"Ha seleccionado division\n";
      	     cout<<"Digite un numero 1:";
   		     cin>>num;
   		     cout<<"Digite un numero 2:";
      		 cin>>num2;
      		
      		 result = num / num2;
      		
      		 cout<<"El resultado es: "<<result<<endl;
      		 cout<<"\n\n\nPRESIONE ENTER PARA VOLVER AL MENU";
      break;
      default: cout<<"\nOpcion mal ingresada\n";
      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
      break;
                  }
};
     
void Matematica::Triangulos(){
     
double base,altura,perimetro,area,radio,a,b,c;
int op;
       system("cls");
         cout<<"   |-----------------------------------------|\n";
         cout<<"   |     [1] - Circulo                       |\n";
         cout<<"   |     [2] - Triangulo                     |\n";
         cout<<"   |     [3] - Rectangulo                    |\n";
         cout<<"   |-----------------------------------------|\n";
         cout<<"         Digite opcion:"; 
         cin >> op;
         
     switch (op){
            
     case 1:
            system ("cls");
            cout <<"Digite el radio: "; 
            cin >> radio;
            
            perimetro = 2 * pi * radio;
            area = pi * radio * radio ;
            
            cout << "\nEl area del circulo es: "<< area <<endl;
            cout << "El perimetro del circulo es: " << perimetro <<endl;
            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     case 2:
            system ("cls");
            cout<<"Digite la base del triangulo: "; 
            cin>>base;
            cout<<"Digite la altura del rectangulo: "; 
            cin>>altura; 
            cout<<"Digite lado 1: ";
            cin>>a; 
            cout<<"Digite lado 2: ";
            cin>>b;
            cout<<"Digite lado 3: ";
            cin>>c;
            
            perimetro = a + b + c;
            area = base * altura / 2;
            
            cout<<"\nEl area del triangulo es: "<< area <<endl; 
            cout<<"El perimetro del triangulo es: "<< perimetro <<endl;
            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     case 3:
            system ("cls");
            cout<<"Digite la base del rectangulo: "; 
            cin>>base; 
            cout<<"Digite la altura del rectangulo: "; 
            cin>>altura;
            
            area = base * altura; 
            perimetro = base * 2 + altura * 2;
            
            cout<<"\nEl area del rectangulo es: "<< area <<endl; 
            cout<<"El perimetro del rectangulo es: "<< perimetro <<endl;
            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     default: cout<<"\nOpcion mal ingresada\n";
     cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
           }
};

void Matematica::Triangulo(){
     
int a,b,c;
     
         system ("cls");
         cout<<"Digite lado A:";
         cin>>a;
         cout<<"Digite lado B:";
         cin>>b;
         cout<<"Digite lado C:";
         cin>>c;
         
                if(a+b<c||a+c<b||b+c<a){                       
                cout<<"\nNo forma un Triangulo\n";
                } 
                else{
                     if(a==b&&a==c&&b==c)
                     cout<<"\nTriangulo equilatero\n";
                     else{
                          if(a==b||a==c||b==c)
                          cout<<"\nTriangulo isoceles\n";
                          else{
                               if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
                               cout<<"\nTriangulo rectangulo\n";
                               else
                               cout<<"\nTriangulo escaleno\n";
                               }
                          }
                     }
                     cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
                     system("PAUSE");
};

void Matematica::Numeros(){
     
int a,b,c,aux;
     
         system("cls");
         cout<<"Digite un numero:"; 
         cin>>a; 
         cout<<"Digite un numero:"; 
         cin>>b;
         cout<<"Digite un numero:";  
         cin>>c; 
         
                 if(a<b) 
                 {
                  aux=a; 
                  a=b; 
                  b=aux; 
                  } 
                    if(a<c) 
                    {
                     aux=a; 
                     a=c; 
                     c=aux; 
                     } 
                       if(b<c) 
                       {
                        aux=b; 
                        b=c; 
                        c=aux; 
                        } 
cout<<"\nLos numeros son:"; 
cout<<a<<"  "<<b<<"  "<<c<<" "<<"\n"<<endl; 
cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";

system("PAUSE");
};
     
void Matematica::Cuadratica(){
     
float a,b,c,x,x1,x2;

      system("cls");
      cout <<"Ingresar el valor de a:";
      cin >>a;
      cout <<"ingresar el valor de b:";
      cin >>b;
      cout <<"ingresar el valor de c:";
      cin >>c;
          x = pow(b,2)-(4*a*c);
    
          if(x<0){
          cout <<"\nTiene raices imaginarias\n"<<endl;
               }
           else if(x>0){ 
           cout<<"\nLa raiz es real\n"<<endl;
                       }
                        else{
                        cout<<"\nLa raiz no puede ser cero\n"<<endl;
                        }
                         x1 =-b+(sqrt(pow(b,2))-(4*a*c))/2*a;
                         x2 =-b-(sqrt(pow(b,2))-(4*a*c))/2*a;
                         
           cout <<"el discriminante: "<< x <<endl;
           cout <<"el valor de X1: "<< x1 <<endl;
           cout <<"el valor de x2: "<< x2 <<"\n"<<endl;
           cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
           
           system("PAUSE"); 
};  

void Matematica::Primos(){
     
int num,cont=0;
 
    system("cls");
    cout<<"Ingrese el numero ";
    cin>>num; 
              for(int i=1;i<=num;i++){ 
                if(num%i==0) 
                cont=cont+1; 
                } 
                  if(cont==2){
                               cout<<"el numero es primo\n"; 
                               } else{ 
                                       cout<<"El numero no es primo\n"; 
                                       }
                                       cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU"; 
                                       system("PAUSE");
};
     
void Matematica::Romanos(){
     
       int x;
       system("cls");
       
       cout<<"Digite un numero: "<<endl;
       cin>>x;
              if((x<1)||(x>1000))
              cout<<" ";
              else
              {
              if(x>=1000)  {cout<<"M"    ;x=x-1000;}
              if(x>=900)   {cout<<"CM"   ;x=x-900; }
              if(x>=500)   {cout<<"D"    ;x=x-500; }
              if(x>=400)   {cout<<"CD"   ;x=x-400; }
              if(x>=300)   {cout<<"C"    ;x=x-100; }
              if(x>=200)   {cout<<"C"    ;x=x-100; }
              if(x>=100)   {cout<<"C"    ;x=x-100; }
              if(x>=90)    {cout<<"XC"   ;x=x-90;  }
              if(x>=50)    {cout<<"L"    ;x=x-50;  }
              if(x>=40)    {cout<<"XL"   ;x=x-40;  }
              if(x>=30)    {cout<<"X"    ;x=x-10;  }
              if(x>=20)    {cout<<"X"    ;x=x-10;  }
              if(x>=10)    {cout<<"X"    ;x=x-10;  }
              if(x>=9)     {cout<<"IX"   ;x=x-9;   }
              if(x>=5)     {cout<<"V"    ;x=x-5;   }
              if(x>=4)     {cout<<"IV"   ;x=x-4;   }
              if(x>=3)     {cout<<"III"  ;x=x-3;   }
              if(x>=2)     {cout<<"II"   ;x=x-2;   }
              if(x>=1)     {cout<<"I"    ;x=x-1;   }
              }
              cout<<" "<<endl;
              cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
system ("PAUSE");  
};
        
void Matematica::Adivinar(){
     
     int num, num2, opcion=0;
     
    system("cls");
         cout<<"   |-----------------------------------------|\n";
         cout<<"   |     [1] - Comenzar                      |\n";
         cout<<"   |     [2] - salir                         |\n";
         cout<<"   |-----------------------------------------|\n";
         cout<<"         Digite opcion:";
    cin>>opcion;
  
    while (opcion!=2)
    {
        num = rand() % 100;
       
        cout<<"\nDigite un numero: ";
        cin>>num2;
       
        while(num!=num2)
        {
            if (num>num2)
               cout<<"Es mayor";
            else
                 cout<<"Es menor";
                
            cout<<"\n Introduce numero: ";
            cin>>num2;
        }
         cout<<"   |            HAS ACERTADO                 |\n";
         cout<<"   |-----------------------------------------|\n";
         cout<<"   |     [1] - Comenzar                      |\n";
         cout<<"   |     [2] - salir                         |\n";
         cout<<"   |-----------------------------------------|\n";
         cout<<"         Digite opcion:";
         cin>>opcion;
         cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
    }
    system("PAUSE"); 
};
     
void Matematica::Palindromo(){
     
      int n,b,d,n1,n2,n3,n4;
      
      system("cls");
      cout<<"Digite un numero de 3 cifras:";
      cin>> n;
  
      n1=n/100;
      b=n/10;
      n2=b%10;
      d=n/10;
      n3=d%10;
      n4=n%10;
  
      if((n1==n4)&&(n2==n3))
      {
       cout<<"Es palindromo"<<endl;
       cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
       }
       else
      cout<<"No es palindromo"<<endl;
      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
  
 system("PAUSE");
};

void Matematica::Tablas(){
     
int mul(int a,int b);
int y,x; 
        system("cls");
        cout<< "Digite que tabla de multiplicar desea ver:"; 
        cin >> x;
          for(y=1;y<=10;y++) {
             cout<< x << " * " << y << " = " << mul(x,y)<< endl;
           }
   cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";      
   system("PAUSE");
   }
     int mul(int a,int b)
      {
        return (a * b);   
};

void Matematica::Factorial(){
     
int tu(int a,int b);
int num,fac,con;
fac=1;
con=1;
         system("cls");
         cout << "Digite un numero: ";
         cin >> num;
           while(con<=num) {  
              fac=tu(fac,con);
              con=con+1;
            }
             cout << "\nEl factorial de " <<num<<  " es "  <<fac<<"\n"<<endl;
             
             cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU"; 
             system("PAUSE");
   }
     int tu(int a,int b){
        return (a * b);
};
     
void Programacion::PintarAjedrez(){
     
       int x,y;
       system("cls");
    for (x=0;x<8;x++){
        for (y=0;y<8;y++){
            //peones
            if (x==1 || x==6){
             cout<<"P";
            }
            //torres
            else if ((x==0 && y==0)||(x==7 && y==0)||(x==0 && y==7)||(x==7 && y==7)){
             cout<<"T";
            }
            //caballos
            else if ((x==0 && y==1)||(x==7 && y==1)||(x==0 && y==6)||(x==7 && y==6)){
             cout<<"C";
            }
            //alfiles
            else if ((x==0 && y==2)||(x==7 && y==2)||(x==0 && y==5)||(x==7 && y==5)){
             cout<<"A";
            }
            //reina
            else if ((x==0 && y==3)||(x==7 && y==3)){
             cout<<"M";
            }
            //rey
            else if ((x==0 && y==4)||(x==7 && y==4)){
             cout<<"R";
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
    system("PAUSE"); 
};     

void Programacion::CreditoU(){
     
double creditos,total,descuento,valor;
int opcion;
         
          system("cls");
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |         CARRERAS ESTUDIANTILES          |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |     [1] - Ingenierias                   |\n";
          cout<<"   |     [2] - Licenciaturas                 |\n";
          cout<<"   |     [3] - Tecnologias                   |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |      Digite opcion:";
          cin>>opcion;
     
    switch(opcion)
    {
     case 1:
          system("cls");
          cout<<"Ha seleccionado ingenierias\n";
          cout<<"Digite cuantos creditos quiere ver: ";
          cin>>creditos;
          total = creditos * 300000;
          if(total>=5000000)
          {
                    descuento = total * 0.05;
                    valor = total - descuento;
                    cout<<"el descuento del 5% es: "<<descuento<<endl;
                    cout<<"el valor de la matricula es: "<<valor<<endl;
                    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";      
                           }
          else
              cout<<"el valor de la matricula es: "<<total<<endl;
              cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     case 2:
          system("cls");
          cout<<"Ha seleccionado licenciaturas\n";
          cout<<"Digite cuantos creditos quiere ver: ";
          cin>>creditos;
          total = creditos * 176000;
          if(total>=4000000)
          {
                    descuento = total * 0.05;
                    valor = total - descuento;
                    cout<<"el descuento del 5% es: "<<descuento<<endl;
                    cout<<"el valor de la matricula es: "<<valor<<endl;
                    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";      
                           }
          else
              cout<<"el valor de la matricula es: "<<total<<endl;
              cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     case 3:
          system("cls");
          cout<<"Ha seleccionado Tecnologias\n";
          cout<<"Digite cuantos creditos quiere ver: ";
          cin>>creditos;
          total = creditos * 200000;
          if(total>=4500000)
          {
                    descuento = total * 0.05;
                    valor = total - descuento;
                    cout<<"el descuento del 5% es: "<<descuento<<endl;
                    cout<<"el valor de la matricula es: "<<valor<<endl;
                    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";      
                           }
          else
              cout<<"el valor de la matricula es: "<<total<<endl;
              cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
     break;
     default: cout<<"\nOpcion mal ingresada\n";
     cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU"; 
     break;
     } 
     system("PAUSE");
};

void Programacion::NotasAyuda(){
     
float notaMayor,notaMenor,notaMedia,notaMedia2,aux,promedio,total;
      
      system("cls");
      cout<<"Digite la nota 1:";
      cin>>notaMenor;
      cout<<"Digite la nota 2:";
      cin>>notaMedia;
      cout<<"Digite la nota 3:";
      cin>>notaMedia2;
      cout<<"Digite la nota 4:";
      cin>>notaMayor;
 
                     if(notaMenor > notaMedia){
                     aux=notaMedia;
                     notaMedia=notaMenor;
                     notaMenor=aux;
                     }
                      if(notaMenor > notaMedia2){
                      aux=notaMedia2;
                      notaMedia2=notaMenor;
                      notaMenor=aux;
                      }
                       if(notaMedia > notaMayor){
                       aux=notaMayor;
                       notaMayor=notaMedia;
                       notaMedia=aux;
                       }
                        if(notaMedia2 > notaMayor){
                        aux=notaMayor;
                        notaMayor=notaMedia2;
                        notaMedia2=aux;
                        }
                         if(notaMenor > notaMedia){
                         aux=notaMedia;
                         notaMedia=notaMenor;
                         notaMenor=aux;
                         }
 cout<<"La nota mayor es:"<<notaMayor<<endl;
 cout<<"La nota normal es:"<<notaMedia<<endl;
 cout<<"La nota normal es:"<<notaMedia2<<endl;
 cout<<"La nota que toca eliminar es:"<<notaMenor<<endl;
  
 promedio = notaMayor + notaMedia + notaMedia2;
 total = promedio / 3;
  
 cout<<"\nla nota final es: "<<total<<endl;
 cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
  
 system("PAUSE");    
};

void Programacion::Fotocopias(){
     
int hojas,paginas,total,pesos;
  
 system("cls");    
 cout<<"Digite las hojas a fotocopiar: ";
 cin>>hojas;
  
 paginas = hojas * 2;
 if(paginas<50)
 {
            total = paginas * 100;
            cout<<"El valor a pagar es: "<<total<<endl;
            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
            }
 else if((paginas>50)&&(paginas<100)){
      total = paginas * 80;
      cout<<"El valor a pagar es: "<<total<<endl;
      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
      }
 else if((paginas>100)&&(paginas<200)){
      total = paginas * 65;
      cout<<"El valor a pagar es: "<<total<<endl;
      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
      }
 else if(paginas>200){
      total = paginas * 50;
      cout<<"El valor a pagar es: "<<total<<endl;
      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
      }
      system("PAUSE");   
};

void Programacion::Fibonacci(){
     
int num,i,acum=0,acumt=0,i1,i2,i3;
                                  
     system("cls");
     cout<<"Digite la serie a realizar: ";
     cin>>num;
     cout<<0<<" "<<1<<" "<<1<<" ";i1=0;i2=1;i3=1;

           for (i=2;acum<=num;i++){
           acumt=i1+i2+i3+acum;
           acum=acum+acumt;
           cout<<acum<<" ";
           }
            cout<<endl;
            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
            
system("PAUSE");
};

void Programacion::Rombo(){
     
int n ;

    system("cls");  
    cout << "Digite un numero: " ;  
    cin >> n ;  
    for (int j = 0; j < n ; ++j) {  
        for (int i = 0; i < n-j-1; ++i)  
            cout << " ";  
        for (int i = 0; i < 2*j+1; ++i)  
             cout << "*" ;  
        cout << endl ;  
    }  
  
    for (int j=n-2; j>=0; --j) {  
        for (int i=0; i<n-j-1; ++i)  
            cout << " " ;  
        for (int i=0; i<2*j+1; ++i)  
            cout << "*" ;  
        cout << endl ;  
    }
    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
    system("PAUSE");     
};

void Programacion::Magico(){
     
int m[11][11]; 
int i=1; 
int a=0; 
int b=0;
int n=0;
          system("cls");
           
         do{
           cout << "Ingrese un  numero impar entre 3 y 11:";
           cin >> n;
         }
         while (!(n%2));
    
        for(int x=0;x< n;x++)
          for(int y=0;y< n;y++)
            m[x][y]=0;
            b=n/2; 
              while(i<=(n*n)){
                  if(a < 0) 
                    a=n-1;
                      if(b==n)
                        b=0;
                          if((m[a][b] >=1) && (m[a][b] <= (n*n)))  {
                            a=a+2;
                            b--;
                              if(!(a< n)) 
                                a=a-n;
                                  if(b< 0)
                                    b=n-1;
                                    m[a][b]=i;                 
                          }else{
                               m[a][b]=i;                   
                             }  
                               --a;
                               ++b;
                               i++; 
               }
                 for(int x=0;x < n;x++){
                    for(int y=0;y < n;y++){
                       cout << setw(3) << m[x][y];
                     }  
                       cout << endl;
                  }
                  cout<<"\n\n\nPRESIONE ENTER PARA VOLVER AL MENU";
   system("PAUSE");  
};

void Programacion::Empresa(){
     
int matriz[12][8];
                       
           system("cls");
            for(int i=0;i < 12;i++)
              for(int j=0;j < 8;j++)
                matriz[i][j]=(j+1)*10;
                  for(int i=0;i < 12;i++){
                     for(int j=0;j < 8;j++){
                        cout << setw(3) << matriz[i][j];
                      }
                        cout << endl;
                   }       
            for(int i=0;i < 12;i++){   
               int totalMes=0; 
                 for(int j=0;j < 8;j++){
                    totalMes += matriz[i][j];
                  } 
                    cout << "total Mes:" << totalMes << endl;
             }        
           int totalProducto1=0;
           int totalProducto2=0;
             for(int i=0;i < 12;i++){   
                for(int j=0;j < 8;j++){
                   if(j%2==0){
                     totalProducto1 +=matriz[i][j];           
                   }else{
                        totalProducto2 +=matriz[i][j];               
                      }
                 }
              }   
                cout << "Total anual producto 1:" << totalProducto1 << endl;
                cout << "Total anual producto 2:" << totalProducto2 << endl;
                cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
                system("PAUSE");
     
};

void Programacion::Cedula(){
     
int cedula[10];
int i=0,eldoble=0,valorsuma=0,decena=0,digito=0;
        
        system("cls");
        for (i=0;i<10;i++){
           cout << "Digite el " << i << " numero:";
           cin >> cedula[i];  
         }
           for(i=0;i<9;i++){
              if(i%2==0){ 
                eldoble=cedula[i]*2;
                  if(eldoble >9){
                    eldoble=eldoble-9;        
                  }            
              }else{
                   eldoble=cedula[i]; 
                 }
                   valorsuma=valorsuma+eldoble;
             }
               cout << "suma total:" << valorsuma << endl;
               decena=((valorsuma/10)+1)*10; 
               cout << "decena superior:" << decena << endl;
               digito=decena-valorsuma;
                 if(digito == 10)
                   digito=0;
                     if(digito == cedula[9])
                       cout << "\ncedula correcta" << endl;
                         else
                           cout <<"\ncedula incorrecta" << endl;
                            cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";      
   system("PAUSE");
     
};

void Programacion::Pintar(){
     
int i,j;
        system("cls");
        cout << "linea en diagonal marcada por +\n\n";
          for(i=1;i<=10;i++){
             for(j=10;j>=1;j--){
                if(i==j){
                  cout<< "+";
                } else{
                   cout<< "*";
                 }
              } 
                cout<<endl;
            }
   cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU"; 
   system("PAUSE");  
};

void Programacion::Flecha(){
     
int matriz[5][5];

        system("cls");
        cout <<"Dibujando una flecha en una matriz\n\n";
          for(int i=0;i<5;i++){
             for(int j=0;j< 5;j++){
                matriz[i][j]=0;
              }
           }
             matriz[0][2]=1;
             matriz[1][1]=1;
             matriz[1][2]=1;
             matriz[1][3]=1;
             matriz[2][0]=1;
             matriz[2][1]=1;
             matriz[2][2]=1;
             matriz[2][3]=1;
             matriz[2][4]=1;
             matriz[3][2]=1;
             matriz[4][2]=1;
               for(int i=0;i<5;i++){
                  for(int j=0;j<5;j++){
                     cout<<setw(1)<<matriz[i][j];
                   }
                     cout<<endl;
                }
   cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";             
   system("PAUSE");   
};

void Juegos::Triki(){
     
int jugador=1,error,empate=0,ganar=0;
char c1='1',c2='2',c3='3',c4='4',c5='5',c6='6',c7='7',c8='8',c9='9',tiro,marca,respuesta='y';

        do{
          error=1;
          system("cls");
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c1<<" | "<<c2<<" | "<<c3<<" |\n";                                
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c4<<" | "<<c5<<" | "<<c6<<" |\n";
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c7<<" | "<<c8<<" | "<<c9<<" |\n";
                  cout<<"|---+---+--|\n";
          if(jugador==1){
           marca='X';
          }else{
           marca='O';
          }
          cout<<"\nTurno del Jugador "<<jugador;
          cout<<"\nDigite la posicion donde va a atacar:";
          fflush(stdin);
          cin>>tiro;

          if (tiro=='1' && c1=='1') {c1=marca;}
          else if (tiro=='2' && c2=='2') {c2=marca;}
          else if (tiro=='3' && c3=='3') {c3=marca;}
          else if (tiro=='4' && c4=='4') {c4=marca;}
          else if (tiro=='5' && c5=='5') {c5=marca;}
          else if (tiro=='6' && c6=='6') {c6=marca;}
          else if (tiro=='7' && c7=='7') {c7=marca;}
          else if (tiro=='8' && c8=='8') {c8=marca;}
          else if (tiro=='9' && c9=='9') {c9=marca;}
          else {cout<<"Error! Movimiento No Valido\n";error=2;}

          if(c1=='X'||c1=='O'){
           if(c2==c1&&c3==c1){
              ganar=1;
             }
            if(c4==c1&&c7==c1){
              ganar=1;
             }
          }
          if(c5=='X'||c5=='O'){
                   if (c1 == c5 && c9 == c5)
                           {ganar=1;}
                   if (c2 == c5 && c8 == c5)
                           {ganar=1;}
                   if (c4 == c5 && c6 == c5)
                           {ganar=1;}
                   if (c3 == c5 && c7 == c5)
                           {ganar=1;}
            }
          if(c9=='X'||c9=='O'){
                     if (c6 == c9 && c3 == c9)
                             {ganar=1;}
                     if (c7 == c9 && c8 == c9)
                            {ganar=1;}
          }
          if ((c1!='1'&&c2!='2'&&c3!='3'&&c4!='4'&&c5!='5'&&c6!='6'&&c7!='7'&&c8!='8'&&c9!='9')&&ganar==0)
          {
              empate=1;
          }
          if (ganar==1||empate==1){
              system("cls");
              if (ganar==1){
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c1<<" | "<<c2<<" | "<<c3<<" |\n";                                
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c4<<" | "<<c5<<" | "<<c6<<" |\n";
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c7<<" | "<<c8<<" | "<<c9<<" |\n";
                  cout<<"|---+---+--|\n";
              }
              if (empate==1){
                  cout<<"Empate!\n"<<jugador;
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c1<<" | "<<c2<<" | "<<c3<<" |\n";                                
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c4<<" | "<<c5<<" | "<<c6<<" |\n";
                  cout<<"|---+---+--|";
                  cout<<"\n|"<<c7<<" | "<<c8<<" | "<<c9<<" |\n";
                  cout<<"|---+---+--|\n";   
              }
              cout<<"Jugar de Nuevo: Y/N ?\n";
              fflush(stdin);
              cin>>respuesta;

              if (respuesta=='y'||respuesta=='Y'){
                      empate=0;
                      jugador=2;
                      ganar=0;
                      c1='1';
                      c2='2';
                      c3='3';
                      c4='4';
                      c5='5';
                      c6='6';
                      c7='7';
                      c8='8';
                      c9='9';
              }
          }
          if(error==1){
              if (jugador==1){
               jugador=2;
              }else{
               jugador=1;
              }
          }
  }while(respuesta=='y'||respuesta=='Y');
  cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU"; 
  system("PAUSE");    
};

void Juegos::Ahorcado(){
     
char frase[60],rep[100],temporal[100];
char pal;
int longitud,i,j,inicial,acertado=0,temp=0,oportunidades=5;
int repetido=0,gano=0;
   
    system("cls");
    cout<<"Digite la palabra a adivinar: ";
    cin>>frase;
   
    system("cls");
   
    longitud = 0;
    inicial = 0;
    j = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';

    do {
                system("cls");
        temp=0;
        if(inicial == 0){
         for(i=0;i<strlen(frase);i++){
          if(frase[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }else{
             temporal[i] = '_';       
             longitud++;
          }
         }
        }
        inicial = 1;
        temporal[longitud] = '\0';
       
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;
            break;
          }else {
           repetido = 0;
         }
        }
        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }
        if(repetido == 0) {
         if(temp == 0) {
           oportunidades = oportunidades - 1;
         }
        }else {
        cout<<"Ya ha digitado esta letra";
        cout<<"\n\n";
        }
        cout<<"\n";
        for(i=0;i<strlen(temporal);i++) {
        cout<<temporal[i];
        }
        cout<<"\n";
        if(strcmp(frase,temporal) == 0) {
            gano = 1;
            break;
        }
        cout<<"\n";
        cout<<"\nLetras Acertadas: "<<acertado;
        cout<<"\n";
        cout<<"\nOportunidades Restantes: "<<oportunidades;
        cout<<"\n";
   
        rep[j] = pal;
        j++;
        if (oportunidades==0)
        {
           break;
        }
        cout<<"Digite una letra:";
        cin>>pal;
      
    }while(oportunidades != 0);
   
    if(gano){
                cout<<"\n\n";
        cout<<"Exitos has ganado";
    }else{
        cout<<"\n\n";
         cout<<"Loser has perdido";
    } 
    cout<<"\n\n";
    cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
    system("PAUSE");
     
};

int main(){ 
      int op,opcion; 
      
          Matematica newMate;
          Programacion newProg; 
          Juegos newJuego;
          system("cls");
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |                  MENU                   |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |  DESARROLLADO: ADRIAN CAMILO P. CAMINOS |\n";
          cout<<"   |          INGENIERIA DE SISTEMAS         |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |     [1] - Matematicas                   |\n";
          cout<<"   |     [2] - Programacion                  |\n";
          cout<<"   |     [3] - Juegos                        |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |     [4] - Salir                         |\n";
          cout<<"   |-----------------------------------------|\n";
          cout<<"   |      Digite opcion:";                    
          cin>>opcion;
          switch(opcion)
          {
                    case 1:
                         do{ 
                         system("cls"); 
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |       HA SELECCIONADO MATEMATICAS       |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [1] - Calculadora                   |\n";
                      cout<<"   |     [2] - Areas y perimetros            |\n";
                      cout<<"   |     [3] - Que tipo de triangulo es      |\n";
                      cout<<"   |     [4] - Ordenar 3 numeros             |\n";
                      cout<<"   |     [5] - Cuadratica                    |\n";
                      cout<<"   |     [6] - Saber si es numero primo o no |\n";
                      cout<<"   |     [7] - Convertir a numeros romanos   |\n";
                      cout<<"   |     [8] - Adivinar numeros              |\n";
                      cout<<"   |     [9] - Palindromo                    |\n";
                      cout<<"   |     [10] - Tablas de multiplicar        |\n";
                      cout<<"   |     [11] - Factorial                    |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [12] - Volver al menu principal     |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |      Digite opcion:";
                      cin>>op; 
                         switch(op){ 
                              case 1: newMate.Calculadora();
                              break; 
                              case 2: newMate.Triangulos();
                              break; 
                              case 3: newMate.Triangulo();
                              break; 
                              case 4: newMate.Numeros();
                              break;
                              case 5: newMate.Cuadratica();
                              break;
                              case 6: newMate.Primos();
                              break;
                              case 7: newMate.Romanos();
                              break;
                              case 8: newMate.Adivinar();
                              break;
                              case 9: newMate.Palindromo();
                              break;
                              case 10: newMate.Tablas();
                              break;
                              case 11: newMate.Factorial();
                              break;
                              case 12: return main();
                              break;
                              default: cout<<"\nOpcion mal ingresada\n"; 
                              break; 
                              }
                                 if(op != 12){ 
                                           system("PAUSE"); 
                                           }
                                           }while(op != 12); 
                                           system("PASUE");
                                           return 0;
                    break;
                    
                    case 2:
                         do{ 
                         system("cls"); 
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |       HA SELECCIONADO PROGRAMACION      |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [1] - Dibujar un ajedrez            |\n";
                      cout<<"   |     [2] - Valor de matricula universidad|\n";
                      cout<<"   |     [3] - Notas promedio saca la menor  |\n";
                      cout<<"   |     [4] - Valor Fotocopias              |\n";
                      cout<<"   |     [5] - Fibonacci                     |\n";
                      cout<<"   |     [6] - Dibujar un rombo              |\n";
                      cout<<"   |     [7] - Cuadrado magico               |\n";
                      cout<<"   |     [8] - Empresa matriz total productos|\n";
                      cout<<"   |     [9] - Verifica si cedula es correcta|\n";
                      cout<<"   |     [10] - Pinta un cuadro con * y +    |\n";
                      cout<<"   |     [11] - Dibuja una flecha            |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [12] - Volver al menu principal     |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |      Digite opcion:"; 
                      cin>>op; 
                         switch(op){ 
                              case 1: newProg.PintarAjedrez();
                              break; 
                              case 2: newProg.CreditoU();
                              break; 
                              case 3: newProg.NotasAyuda();
                              break; 
                              case 4: newProg.Fotocopias();
                              break;
                              case 5: newProg.Fibonacci();
                              break;
                              case 6: newProg.Rombo();
                              break;
                              case 7: newProg.Magico();
                              break;
                              case 8: newProg.Empresa();
                              break;
                              case 9: newProg.Cedula();
                              break;
                              case 10: newProg.Pintar();
                              break;
                              case 11: newProg.Flecha();
                              break;
                              case 12: return main();
                              break;
                              default: cout<<"\nOpcion mal ingresada\n"; 
                              break; 
                              }
                                 if(op != 12){ 
                                           system("PAUSE"); 
                                           }
                                           }while(op != 12); 
                                           system("PASUE");
                                           return 0;
                    break;
                    
                    case 3:
                          do{ 
                         system("cls"); 
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |       HA SELECCIONADO JUEGOS            |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [1] - Triki                         |\n";
                      cout<<"   |     [2] - El ahorcado                   |\n";
                      cout<<"   |     [3] -                               |\n";
                      cout<<"   |     [4] -                               |\n";
                      cout<<"   |     [5] -                               |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |     [6] - Volver al menu principal      |\n";
                      cout<<"   |-----------------------------------------|\n";
                      cout<<"   |      Digite opcion:"; 
                      cin>>op; 
                         switch(op){ 
                              case 1: newJuego.Triki();
                              break; 
                              case 2: newJuego.Ahorcado();
                              break; 
                              case 3: 
                              break; 
                              case 4: 
                              break;
                              case 5: 
                              break;
                              case 6: return main();
                              break;
                              default: cout<<"\nOpcion mal ingresada\n"; 
                              break; 
                              }
                                 if(op != 6){ 
                                           system("PAUSE"); 
                                           }
                                           }while(op != 6); 
                                           system("PASUE");
                                           return 0;
                    break;
                    
                    case 4:
                    break;
                    }
}     
        




                                           

