#include <iostream> 
#include <cstdlib>
#include <Cmath>

using namespace std;
 
int main() 
{
    int a,b,c,aux; 

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
cout<<"Los numeros son:"; 
cout<<a<<"  "<<b<<"  "<<c<<" "<<endl; 

system("PAUSE");
return 0; 
}
