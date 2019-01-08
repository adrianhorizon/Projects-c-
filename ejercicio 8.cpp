#include<iostream> 
#include<cstdlib> 

using namespace std;

int main() 
{ 
int num,cont=0; 

cout<<"Ingrese el numero ";
cin>>num; 
 for(int i=1;i<=num;i++) 
 { 
 if(num%i==0) 
 cont=cont+1; 
 } 
 if(cont==2) 
 { 
  cout<<"el numero es primo\n"; 
  } 
   else 
  { 
   cout<<"El numero no es primo\n"; 
  } 
system("PAUSE");
return 0;
}
