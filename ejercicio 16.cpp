#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
 int n,b,d,n1,n2,n3,n4;
 
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
 }
 else
 cout<<"No es palindromo"<<endl;
 
 system("PAUSE");
 return EXIT_SUCCESS;
}
