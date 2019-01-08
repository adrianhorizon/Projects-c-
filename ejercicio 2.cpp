#include <cstdlib>
#include <iostream>
  
using namespace std;
  
int main()
{
 int num;
  
  cout<<"Escriba un numero: ";
  cin>>num;
  
  if(num%7==1)
  {
   cout<<"El numero no es divisible\n"<<endl;
        }
    else
    {
     cout<<"El numero es divisible\n"<<endl;
     }
     system("PAUSE");
     return 0;
}
