#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int num,resul=0,i;
    
    cout<<"Digite un numero:";
    cin>>num;
    if(num < 1){
    cout<<"no es valido"<<endl;
    }
    else{
    for(i=5; i<num; i+=5){
            resul=resul+i;
    cout<<i<<" + ";
               }
    }
    cout<<"\nel resultado:"<<resul<<endl;
system("pause");
return 0;    
}
