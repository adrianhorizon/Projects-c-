#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int hojas,paginas,total,pesos;
    
 cout<<"Digite las hojas a fotocopiar: ";
 cin>>hojas;
 
 paginas = hojas * 2;
 if(paginas<50)
 {
            total = paginas * 100;
            cout<<"El valor a pagar es: "<<total<<endl;
            }
 else if((paginas>50)&&(paginas<100))
 {
      total = paginas * 80;
      cout<<"El valor a pagar es: "<<total<<endl;
      }
 else if((paginas>100)&&(paginas<200))
 {
      total = paginas * 65;
      cout<<"El valor a pagar es: "<<total<<endl;
      }
 else if(paginas>200)
 {
      total = paginas * 50;
      cout<<"El valor a pagar es: "<<total<<endl;
      }
      system("PAUSE");
      return 0;
}
