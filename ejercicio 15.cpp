#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int n1,n2,n3,n4,n5,n6,promedio,total,desc;
    
    cout<<"Digite la nota final 1:";
    cin>>n1;
    cout<<"Digite la nota final 2:";
    cin>>n2;
    cout<<"Digite la nota final 3:";
    cin>>n3;
    cout<<"Digite la nota final 4:";
    cin>>n4;
    cout<<"Digite la nota final 5:";
    cin>>n5;
    cout<<"Digite la nota final 6:";
    cin>>n6;
    
    promedio = n1 + n2 + n3 + n4 + n5 + n6;
    total = promedio / 6;
    
    if(total > 3.2)
    {
     cout<<"El alumno podra matricularse el siguiente semestre paso mas del 70% de las asignaturas"<<endl;
     cout<<"Nota final: "<<total<<endl;
    }
    else
    {
        cout<<"No se puede matricular el siguiente semestre perdio con menos del 70& de las asignaturas"<<endl;
        cout<<"Nota final: "<<total<<endl;
        }
    
    
    system("PAUSE");
    return 0;
}
