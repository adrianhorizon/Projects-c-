#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int g,oxigeno;
	int ph,calidad,ValorTurbidez;
    do
    {
    system("cls");
    system("color f5");  
     cout<<"1.    INGRESAR DATOS  "<<endl;
     cout<<"2.    CONSULTAR CALIDAD DEL AGUA  "<<endl;
     cout<<"3.    CONSULTAR OXIGENO PRESENTE EN EL AGUA "<<endl;
     cout<<"4.    CONSULTAR ACIDES DEL AGUA Y SU Ph "<<endl;
     cout<<"5.    CONSULTAR SI CONSUMIBLE  "<<endl;
     cout<<"9.    salir"<<endl<<endl;
     cout<<"Digite una opcion:"<<endl;
     cin>>g;
         switch(g)
           {
        case 1:
                system("cls");   
               
                cout<<"INGRESAR DATOS"<<endl;
               
                cout<<"Digite el PH del agua (0-14)"<<endl;
                cin>>ph;
                cout<<"Digite el porcentaje de Calidad De Agua ( 0-100%)"<<endl;
                cin>>calidad;
               
                cout<<"Digite el oxigeno presente en el agua (0-100)"<<endl;
                cin>>oxigeno;
                cout<<"Datos Registrados satisfactoriamente"<<endl;
                system("pause");
           
        break;
        case 2:
                system("cls");
                cout<<"CONSULTAR CALIDAD DEL AGUA"<<endl;
               
                if(calidad>0 && calidad<=29){
                    cout<<"Agua Altamente Contaminada"<<endl;
                }   
                if(calidad>29 && calidad<=49){
                    cout<<"Agua Contaminada"<<endl;
                }   
                if(calidad>49 && calidad<=69){
                    cout<<"Agua poco Contaminada"<<endl;
                }   
                if(calidad>69 && calidad<=84){
                    cout<<"Agua aceptable"<<endl;   
                }   
                if(calidad>84 && calidad<=100){
                    cout<<"Agua sin contaminar"<<endl;
                }   
                system("pause");
        break;
        case 3:
                   system("cls");
                cout<<"CONSULTAR OXIGENO PRESENTE EN EL AGUA"<<endl;
               
                    if(oxigeno>0 && oxigeno<=29){
                    cout<<"Agua Altamente Contaminada"<<endl;
                }   
                if(oxigeno>29 && oxigeno<=49){
                    cout<<"Agua Contaminada"<<endl;
                }   
                if(oxigeno>49 && oxigeno<=69){
                    cout<<"Agua poco Contaminada"<<endl;
                }   
                if(oxigeno>69 && oxigeno<=84){
                    cout<<"Agua aceptable"<<endl;   
                }   
                if(oxigeno>84 && oxigeno<=100){
                    cout<<"Agua sin contaminar"<<endl;
                }
                system("pause");
                   break;
        case 4:
               system("cls");
               cout<<"CONSULTAR ACIDES DEL AGUA"<<endl;
               
                if(ph>=0 && ph<=6){
                    cout<<"El PH es Acido "<<endl;
                }   
                if(ph == 7){
                cout<<"El PH es Neutro"<<endl;
                }   
                if(ph>=8 && ph<=14 ){
                    cout<<"El PH es Basico "<<endl;
                }         
                system("pause");
               break;
        case 5:
                system("cls");
              
                   cout<<"CONSULTAR SI ES CONSUMIBLE"<<endl;
                   if(calidad>84 && ph == 7){
                   cout<<"El agua es consumible :) "<<endl;
                   }else{
                   cout<<"El agua requiere la aplicacion de un coagulante (Alumbre) al 15%"<<endl;
                   }
                    cout<<"CONSULTAR SI ES CONSUMIBLE"<<endl;
                   if(calidad<84 && ph == 7){
                   cout<<"El agua no es consumible :) "<<endl;
                   }else{
                   cout<<"El agua requiere la aplicacion de soda ash al 20% "<<endl;
                   }
                    cout<<"CONSULTAR SI ES CONSUMIBLE"<<endl;
                   if(calidad<84 && ph < 7){
                   cout<<"El agua no es consumible :) "<<endl;
                   }else{
                   cout<<"El agua requiere el desarrollo de CRIBADO"<<endl;
                   }
                    cout<<"CONSULTAR SI ES CONSUMIBLE"<<endl;
                   if(calidad>84 && ph > 7){
                   cout<<"El agua no es consumible :) "<<endl;
                   }else{
                   cout<<"El agua requiere el desarrolo de desinfeccion y se dimentacion"<<endl;
                   }
                system("pause");
               break;

        case 0:
        	exit(0);
        break;
    default : cout<<" opcion no valida ";
    }            
  }while(g!=9);
}

