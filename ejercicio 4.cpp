#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main ()
 
{ 
float m1,m2,m3,m4,m5,descuento,valor,total,nota ;
 
cout<<"digite nota";
cin>>m1;
 
cout<<"digite nota";
cin>>m2;
 
cout<<"digite nota";
cin>>m3;
 
cout<<"digite nota";
cin>>m4;
 
 
cout<<"digite nota";
cin>>m5;
 
nota = m1+m2+m3+m4+m5/5 ;
 
cout<<"digite el valor de la matricula";
cin>>valor;
 
if(nota>=4)
{
 descuento=valor*0.1 ;     
total = valor-descuento ;
}
 cout<<"el valor a pagar es"<<total<<endl;
  
 system("PAUSE");
 return 0 ;
