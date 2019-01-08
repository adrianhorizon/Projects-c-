#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main ()
 
{
 int m1,m2,m3,c1,c2,c3,total,costo,icetex,banco;
 
 cout<<"Digite cuantos creditos va inscribir:";
 cin>>m1;
 cout<<"Digite cuantos creditos va inscribir:";
 cin>>m2;
 cout<<"Digite cuantos creditos va inscribir:";
 cin>>m3;
         c1=m1*180000;
         c2=m2*180000;
         c3=m3*180000;
         total=c1+c2+c3;
         cout<<"\n";
 if(total > 7000000)
 {
          costo=total*0.40;
          cout<<"pagara el 40% de la matricula:"<< costo << endl;
          icetex=total*0.30;
          cout<<"pedira al icetex el 30% : "<< icetex << endl;
          banco=total*0.20;
          cout<<"pedira al banco un 20% : "<<banco << endl;   
          }
          if(total < 7000000)
          {
                  costo=total*0.70;
                  cout<<"pagara el 70% de la matricula:"<< costo << endl;
                  icetex=total*0.30;
                  cout<<"pedira al icetex el 30% :"<< icetex << endl; 
                   }
 system("PAUSE");
 return 0;
}
