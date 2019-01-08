#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
    float lado1,lado2,lado3;
    
    cout<<"Digite lado 1:";
    cin>>lado1;
    cout<<"Digite lado 2:";
    cin>>lado2;
    cout<<"Digite lado 3:";
    cin>>lado3;
    
        if ((lado1==lado2)||(lado1==lado3)||(lado3==lado2))
        {
            cout<<"\nEl Triangulo es Isoceles\n";
            }
        else
        {
            cout<<"El Triangulo no es Isoceles\n";
            }  
    system("PAUSE");
    return 0;
}
