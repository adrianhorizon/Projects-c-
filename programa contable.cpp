#include <iostream>
#include <cstdlib>
#include <dos.h>
#include <time.h>
#include <String>

using namespace std;

class Categoria{
  public:
         void SaldosIniciales();
         void Fecha();    
};

void Categoria::SaldosIniciales(){
     
    int op,categoria,producto,cantidad,total;
    float ValorUnitario,promedio;
    string fechas,fecha,fechaC;
     
    system("cls");
    Categoria::Fecha();
            cout<<"\n\n";          
            cout<<"Digite Categoria: ";
            cin>>categoria;
            cout<<"\nDigite Producto: ";
            cin>>producto;
            cout<<"\nDigite Cantidad: ";
            cin>>cantidad;
            cout<<"\nDigite Valor unitario: ";
            cin>>ValorUnitario;
            cout<<"\nFecha inicio: ";
            cin>>fecha;
            cout<<"\nFecha final: ";
            cin>>fechas;
            cout<<"\nFecha Corte: ";
            cin>>fechaC;
            
            system("cls");
            cout<<"   |-----------------------------------------|\n";
            cout<<"   |     [1] - Consultar saldos              |\n";
            cout<<"   |     [2] - Consultar ventas              |\n";
            cout<<"   |     [3] - Consultar costo de venta      |\n";
            cout<<"   |     [4] - Consultar saldo promedio      |\n";
            cout<<"   |-----------------------------------------|\n";
            cout<<"         Digite opcion:"; 
            cin>>op;
              
     switch(op){
                case 1:
                     system("cls");
                     cout<<"\n\n";
                     cout<<"La categoria pertence: "<<categoria<<endl;
                     cout<<"Fecha Corte: "<<fechaC<<endl;
                     cout<<"La cantidad del saldo: "<<(cantidad*ValorUnitario)<<endl;
                     cout<<"\n\n";
                     cout<<"Presione enter volver al menu\n\n";
                break;
                case 2:
                     system("cls");
                     cout<<"\n\n";
                     cout<<"La categoria pertence: "<<categoria<<endl;
                     cout<<"Fecha inicio: "<<fecha<<endl;
                     cout<<"Fecha final: "<<fechas<<endl;
                     cout<<"Las ventas fueron: "<<(producto*cantidad)<<endl;
                     cout<<"\n\n";
                     cout<<"Presione enter volver al menu\n\n";
                break;  
                case 3:
                     system("cls");
                     cout<<"\n\n";
                     cout<<"La categoria pertence: "<<categoria<<endl;
                     cout<<"Fecha inicio: "<<fecha<<endl;
                     cout<<"Fecha final: "<<fechas<<endl;
                     total=(producto*cantidad);
                     cout<<"Costo de la ventas: "<<(ValorUnitario*total)<<endl;
                     cout<<"\n\n";
                     cout<<"Presione enter volver al menu\n\n";
                break;
                case 4:
                     system("cls");
                     cout<<"\n\n";
                     cout<<"La categoria pertence: "<<categoria<<endl;
                     promedio=(cantidad*ValorUnitario)/producto;
                     cout<<"Saldo promedio: "<<promedio<<endl;
                     cout<<"\n\n";
                     cout<<"Presione enter volver al menu\n\n";
                break;
                default: 
                      cout<<"\nOpcion mal ingresada\n";
                      cout<<"\n\n\nPRESIONE DOS VECES ENTER PARA VOLVER AL MENU";
                break;
                  }
};

void Categoria::Fecha(){
     
     time_t t,i;
     char *p;
	 i = time (&t);
	 p = ctime (&i);  /* igual a: p = ctime (&t); */
	 cout<<"           "<<p;
};

int main(){
    
    int op;
    Categoria newCategoria;
    system("cls");
    
    do{ 
        system("cls"); 
        newCategoria.Fecha();
        cout<<"   |-----------------------------------------|\n";
        cout<<"   |       Bienvenido                        |\n";
        cout<<"   |-----------------------------------------|\n";
        cout<<"   |     [1] - Consultar datos               |\n";
        cout<<"   |     [2] - salir del programa            |\n";
        cout<<"   |-----------------------------------------|\n";
        cout<<"          Digite opcion:"; 
        cin>>op; 
                 switch(op){ 
                             case 1: newCategoria.SaldosIniciales();
                             break; 
                             case 2: 
                                  return EXIT_SUCCESS;
                             break;
                             default:
                                     cout<<"\nOpcion mal ingresada\n";
                                     cout<<"\nPresione enter\n"; 
                             break; 
                             }if(op != 2){
                                    system("pause");
                                    } 
                                    }while(op != 2); 
                                    system("pause");
                                    return 0;
}

                                    

