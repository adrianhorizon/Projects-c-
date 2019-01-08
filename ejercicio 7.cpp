#include <cstdlib>
#include <iostream>
 
using namespace std;
 
int main()
{
    int num, num2, opcion=0;
    
    cout<<"\n Adivinar numero";
    cout<<"\n 1 - Comenzar.";
    cout<<"\n 2 - Salir.\n";
    cout<<"\n Introduce una opcion:";
    cin>>opcion;
    
    while (opcion!=2)
    {
        num = rand() % 100;
        
        cout<<"\nDigite un numero: ";
        cin>>num2;
        
        while(num!=num2)
        {
            if (num>num2)
               cout<<"Es mayor";
            else
                 cout<<"Es menor";
                 
            cout<<"\n Introduce numero: ";
            cin>>num2;
        }
        
        cout<<"\n Has acertado! \n";
        
        cout<<"\[1] Jugar de nuevo.";
        cout<<"\[2] Salir.";
        cout<<"\nDigite una opcion:";
        
        cin>>opcion;
    }
    system("PAUSE");     
    return 0;
    }
