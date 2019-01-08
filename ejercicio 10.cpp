#include <iostream>
#include <cstdlib>  
#include <Cmath>  //libreria para ecuaciones matematicas como pow y sqrt

using namespace std;  

int main()
{
 float a,b,c,x,x1,x2;

    cout <<"Ingresar el valor de a:";
    cin >>a;
    cout <<"ingresar el valor de b:";
    cin >>b;
    cout <<"ingresar el valor de c:";
    cin >>c;
    x = pow(b,2)-(4*a*c);//pow es potencia y d el discriminante
    
    if(x<0)
    {
     cout <<"\nTiene raices imaginarias\n"<<endl;
     }
      else if(x>0) 
      { 
       cout<<"\nLa raiz es real\n"<<endl;
       }
        else
        {
         cout<<"\nLa raiz no puede ser cero\n"<<endl;
         }
         x1 =-b+(sqrt(pow(b,2))-(4*a*c))/2*a;//sqrt son raiz
         x2 =-b-(sqrt(pow(b,2))-(4*a*c))/2*a;

         cout <<"el discriminante: "<< x <<endl;
         cout <<"el valor de X1: "<< x1 <<endl;
         cout <<"el valor de x2: "<< x2 <<endl;
         
system("PAUSE");
return 0;
}

