#include<iostream>
#include<cstdlib>
#include<String>

using namespace std;

int main(){
    
    int op;
    float registros,estrato,edad,m,e,puntaje,p;
    string nombre,t;
    
    do{
        cout<<"|----------------------------------|"<<endl;
        cout<<"|      Bienvenido                  |"<<endl;
        cout<<"|----------------------------------|"<<endl;
        cout<<"|[1]Cargar datos                   |"<<endl;
        cout<<"|[2]Becados para los andes         |"<<endl;
        cout<<"|[3]Becados para la nacional       |"<<endl;
        cout<<"|[4]Salir del programa             |"<<endl;
        cout<<"|----------------------------------|"<<endl;
        cout<<"Digite opcion:"<<endl;
        cin>>op;
        switch(op){
                   case 1:
                        cout<<"cuantos registros va ingresar:";
                        cin>>registros;                   
                        for(int i=1; i<=registros ;i++){
                         for(int j=0; j<4; j++){ 
                           if(j==0){
                           cout<<"\nDigite nombre: "; 
                           cin>>nombre;
                           t=t+nombre;
                           } 
                           if(j==1){ 
                           cout<<"\nDigite edad: "; 
                           cin>>edad;
                           m=m+edad/registros; 
                           } 
                           if(j==2){ 
                           cout<<"\nDigite puntaje icfes: "; 
                           cin>>puntaje;
                           p=p+puntaje/registros; 
                           }
                           if(j==3){ 
                           cout<<"\nDigite estrato: "; 
                           cin>>estrato;
                           e=e+estrato/registros; 
                          }  
                         }
                        }
                        cout<<"\n\npresione dos veces volver al menu"<<endl;
                   break;
                   case 2:
                        if((e > 4)&&(estrato < 5)){
                        if((m > 22)&&(edad < 26)){
                        if(p > 900){
                           cout<<"aplica para la beca en la universiad de los andes"<<endl;
                           cout<"entran:"<<registros<<" dos estudiantes"<<endl;
                          }
                         }
                        }
                        else{
                             cout<<"no aplica para la beca en la universidad de los andes"<<endl;
                             }
                   break;
                   case 3:
                        if((e > 0)&6(estrato < 3)){
                        if((m > 16)&&(edad < 23)){
                        if(p > 920){
                           cout<<"aplica para la beca en la universiad nacional"<<endl;
                           cout<"entran:"<<registros<<" dos estudiantes"<<endl;
                          }
                         }
                        }
                        else{
                             cout<<"no aplica para la beca en la universidad nacional"<<endl;
                             }
                   break;
                   case 4:
                        return EXIT_SUCCESS;
                   break;
                   default: 
                            cout<<"\nopcion mal digitada"<<endl;
                            cout<<"\nPresione enter"<<endl; 
                   break;
                   }
        if(op!=4){
              system("PAUSE");
              } 
    }while(op != 4); 
    system("PASUE");
    return 0;
}
