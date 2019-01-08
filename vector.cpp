#include<iostream>
#include<cstdlib>
#include<stdio.h> 
#include<conio.h>
#include<String>

using namespace std;

int main(){
    char Email[100], *Dominio[4]={".net",".com",".es"};
    string agenda[100],agendaC[100];
    int Telephone[100],Celular[100];
    int registros,i,j,op,b;
    do{
        system("cls");
        cout<<"|----------------------------------|\n";
        cout<<"|      Welcome Directory ETB       |\n";
        cout<<"|----------------------------------|\n";
        cout<<"|[1]Add natural person.            |\n";
        cout<<"|[2]Add company.                   |\n";
        cout<<"|[3]Directory show natural person. |\n";
        cout<<"|[4]Directory show company.        |\n";
        cout<<"|[5]Exit program.                  |\n";
        cout<<"|----------------------------------|\n";
        cout<<"Write option:";
        cin>>op;
        switch(op){
                   case 1:
                        system("cls");
                        cout<<"Enter how many records will be stored:";
                        cin>>registros;                   
                        for(i=1;i<=registros;i++){
                         for(j=0;j<4;j++){ 
                           if (j==0){
                           cout<<"\nWrite Name: "; 
                           cin>>agenda[i]; 
                           } 
                           if (j==1){ 
                           cout<<"\nWrite Address: "; 
                           cin>>agenda[i]; 
                           } 
                           if (j==2){ 
                           cout<<"\nWrite Telephone: "; 
                           cin>>Telephone[i]; 
                           } 
                           if (j==3){ 
                           cout<<"\nWrite Celular: "; 
                           cin>>Celular[i];
                          }
                         }
                        }
                        cout<<"\n\nPress enter two return main";
                   break;
                   case 2:
                        system("cls");
                        cout<<"Enter how many records will be stored:";
                        cin>>registros;                  
                        for(i=1;i<=registros;i++){
                         for(j=0;j<7;j++){ 
                          if (j==0){
                          cout<<"\nWrite Company: "; 
                          cin>>agendaC[i]; 
                          } 
                          if (j==1){ 
                          cout<<"\nWrite Nit: "; 
                          cin>>agendaC[i];
                          } 
                          if (j==2){ 
                          cout<<"\nWrite Address: "; 
                          cin>>agenda[i];
                          } 
                          if (j==3){ 
                          cout<<"\nWrite Telephone: "; 
                          cin>>Telephone[i];
                          }
                          if (j==4){ 
                          cout<<"\nWrite Celular: "; 
                          cin>>Celular[i];
                          }
                          if (j==5){ 
                          cout<<"\nWrite Hours Atention: "; 
                          cin>>agenda[i];
                          }
                          if (j==6){ 
                          cout<<"\nWrite Email: "; 
                          cin>>Email[i];
                          system("cls");
                          if(strchr(Email, '@') != NULL) 
                          cout<<"Sí hay arroba.\n"; 
                          else 
                          cout<<"No se encontro \'@'.\n"; 
                          for(i = 0;i<3; i++) 
                          if(strstr(Email, Dominio[i]) != NULL){ 
                          cout<<"Dominio :"<<Dominio[i]; 
                           }
                          }
                         }
                        }
                        cout<<"\n\nPress enter two return main";
                   break;
                   case 3:
                        system("cls");
                        for(i=1;i<=registros;i++){
                         for(j=0;j<4;j++){ 
                           if (j==0){
                           cout<<"\nName: "<<agenda[i]<<endl; 
                           } 
                           if (j==1){ 
                           cout<<"\nAddress: "<<agenda[i]<<endl; 
                           } 
                           if (j==2){ 
                           cout<<"\nTelephone: "<<Telephone[i]<<endl; 
                           } 
                           if (j==3){ 
                           cout<<"\nCelular: "<<Celular[i]<<endl; 
                          }
                         }
                        }
                   break;
                   case 4:
                        system("cls");
                        for(i=1;i<=registros;i++){
                         for(j=0;j<7;j++){ 
                          if (j==0){
                          cout<<"\nWrite Company: "<<agendaC[i]<<endl; 
                          } 
                          if (j==1){ 
                          cout<<"\nWrite Nit: "<<agendaC[i]<<endl;
                          } 
                          if (j==2){ 
                          cout<<"\nWrite Address: "<<agenda[i]<<endl;
                          } 
                          if (j==3){ 
                          cout<<"\nWrite Telephone: "<<Telephone[i]<<endl;
                          }
                          if (j==4){ 
                          cout<<"\nWrite Celular: "<<Celular[i]<<endl;
                          }
                          if (j==5){ 
                          cout<<"\nWrite Hours Atention: "<<agenda[i]<<endl;
                          }
                          if (j==6){ 
                          cout<<"\nWrite Email: "<<agenda[i]<<endl;
                          }
                         }
                        }
                   break;
                   case 5:
                        return EXIT_SUCCESS;
                   break;
                   default: 
                            cout<<"\nwrong option \n";
                            cout<<"\nPress enter again\n"; 
                   break;
                   }
        if(op!=5){
              system("PAUSE");
              } 
    }while(op != 5); 
    system("PASUE");
    return 0;
}
