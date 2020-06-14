#include "iostream"

using namespace std;

void prueba1(){ //esta funcion realiza la primera prueba matematica para comprobar que un año es o no bisiesto
    int date1; // variable en entero para guardar el año
    cout<<"\nEn esta prueba se comprobara que el ano digitado es divisible entre 400"<<endl;
    cout<<"si el ano es divisible entre 400 es bisiesto"<<endl;
    cout<<"Ingrese el ano a evaluar"<<endl;
    cin>>date1;                                       //pide el año a ingresar para proceder al procedimiento
	if(date1%400==0) cout<<"El ano es bisiesto"<<endl;//primera condicion para ver si el año es  bisiesto
    else cout<<"El ano no es bisiesto"<<endl;         //si el procedimiento anterior no fue cierto solo manda un texto en pantalla
	
}
void prueba2(){ //esta funcion realiza la segunda prueba matematica para comprobar que un año es o no bisiesto
    int date2;  // variable en entero para guardar el año
    cout<<"\nEn esta prueba se comprobara que el ano sea divisible entre 4 y no sea divisible entre 100"<<endl;
    cout<<"si el caso se da es bisiesto"<<endl;
    cout<<"Ingrese el ano a evaluar"<<endl;
    cin>>date2;
	if((date2%4==0)&&(date2%100 != 00)) cout<<"El ano es bisiesto:"<<endl; //primera condicion para ver si el año es  bisiesto

    else cout<<"El ano no es bisiesto:"<<endl;                //si el procedimiento anterior no fue cierto solo manda un texto en pantalla
 }
int main ()
{
    int prueba=0;//variable ocupada para que el usuario elija que prueba hacer primero para el año bisiesto
   
    do{ //denuevo do while para mostrar un menu al usuario y que el salga hasta que lo decida
      cout<<"\nBienvenido\ningresa a una prueba para conocer si un ano es bisiesto"<<endl;
      cout<<"1----Prueba1"<<endl;
      cout<<"2----Prueba2"<<endl;
      cout<<"3----salir"<<endl;
      cout<<"Digite el numero de la prueba a realizar"<<endl;
      cin>>prueba;
    
      switch(prueba){//aqui se manda a llamar a las funciones en cada caso que el usuaeio elija
          case 1:prueba1();
          break;
          case 2:prueba2();
          break;
          default: cout<<"ingrese una opcion valida"<<endl;
      }
 }while (prueba!=3);
 cout<<"gracias vuelva pronto"<<endl<<endl;
 return 0;
}
    
