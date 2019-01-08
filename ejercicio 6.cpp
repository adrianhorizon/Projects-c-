#include<iostream>
#include<cstdlib>
 
using namespace std;
 
int main ()
 
{
float n1,n2,n3,nota;
cout<<"digite nota:";
cin>>n1;
cout<<"digite nota:";
cin>>n2;
cout<<"digite nota:";
cin>>n3;

nota = (n1*0.20)+(n2*0.30)+(n3*0.50);

 if(nota>=3.0)
 {
  cout<<"El estudiante Aprobo "<<endl;
  }
  else
  cout<<"EL estudiante Reprobo"<<endl;
  
 system("PAUSE");
 return 0;
}
