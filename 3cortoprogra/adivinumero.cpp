#include "iostream"
#include "stdlib.h"
#include "time.h"

using namespace std;
//estas funciones dan un total de 5 y cada una representa el numero de intentos para adivinar el numero
void intento1(int alm){
    int num;
 cout<<"\nDigite el numero: "<<endl; // cada funcion tiene un if similar a este           
 cin>>num;                           // para indicarle tres cosas al usuario:
 if (num<alm) cout<<"Ingrese un numero mayor\n4 intentos restantes "<<endl<<endl; // primero darle una pista al usuario si esta lejos o cerca
 else if (num>alm) cout<<"ingrese un numero menor\n4 intentos restantes "<<endl<<endl;// de adivinar el numero
     
 else if (num==alm)cout<<"felicidades has adivinado el numero\nintentos utilizados 1"<<endl<<endl;//segunda cosa hacerle saber al usuario si
}                          //adivino el numero y por ultimo el numero de intentos restantes y si adivino el numero mostrar intentos ocupados
void intento2(int alm){
 int num;
 cout<<"\nDigite el numero: "<<endl;
 cin>>num;
 if (num<alm) cout<<"Ingrese un numero mayor\n3 intentos restantes "<<endl<<endl;

 else if (num>alm) cout<<"ingrese un numero menor\n3 intentos restantes "<<endl<<endl;
     
else if (num==alm)cout<<"felicidades has adivinado el numero\nintentos utilizados 2"<<endl<<endl;
}
void intento3(int alm){
 int num;
 cout<<"\nDigite el numero: "<<endl;
 cin>>num;
 if (num<alm) cout<<"Ingrese un numero mayor\n2 intentos restantes "<<endl<<endl;

 else if (num>alm) cout<<"ingrese un numero menor\n2 intentos restantes "<<endl<<endl;

else if (num==alm) cout<<"felicidades has adivinado el numero\nintentos utilizados 3"<<endl<<endl;
}
void intento4(int alm){
 int num;
 cout<<"\nDigite el numero: "<<endl;
 cin>>num;
 if (num<alm) cout<<"Ingrese un numero mayor\n1 intentos restantes "<<endl<<endl;

 else if (num>alm) cout<<"ingrese un numero menor\n1 intentos restantes "<<endl<<endl;
     
else if (num==alm)cout<<"felicidades has adivinado el numero\nintentos utilizados 4"<<endl<<endl;
}
void intento5(int alm){
 int num;
 cout<<"\nDigite el numero: "<<endl;
 cin>>num;
 if (num!=alm) cout<<"has llegado a tu numero maximo de intentos\nel numero aleatorio era:"<<alm<<endl<<endl;// en esta parte indica al usuario que los intentos se han
                                                                                                             //terminado
else if (num==alm)cout<<"felicidades has adivinado el numero\nintentos utilizados 5"<<endl<<endl;
}

int main ()
{
    int intento,alm; //las variables son intento = al numero de intento que el usuario desea hacer y alm = es el numero aleatorio almacenado
    srand(time(NULL));     //esta parte del codigo genera un numero aleatorio entre 0 y 100
    alm = 1 + rand()%(100);
    do{   // do while se utilizo para un menu de intentos para que cuando el usuario termine los intentos pulse un numero para salir del menu 
      cout<<"\nBienvenido a adivina el numero\nMenu de intentos:"<<endl;
      cout<<"1----Realiza el primer intento"<<endl;
      cout<<"2----Realiza el segundo intento"<<endl;
      cout<<"3----Realiza el tercer intento"<<endl;
      cout<<"4----Realiza el cuarto intento"<<endl;
      cout<<"5----Realiza el quinto intento"<<endl;
      cout<<"6----salir"<<endl;
      cout<<"Digite el numero de intento a realizar o 6 para salir del programa"<<endl;
      cin>>intento;
      

      switch(intento){ //switch se utilizo para añadirle a cada intento su propia funcion
          case 1: intento1(alm); 
          break;
          case 2: intento2(alm);
          break;
          case 3: intento3(alm);
          break;
          case 4: intento4(alm);
          break;
          case 5: intento5(alm);
          break;

          default: cout<<"ingrese una opcion valida"<<endl;
      }
 }while (intento!=6);
 cout<<"gracias vuelva pronto"<<endl<<endl;
 return 0;
}
    

