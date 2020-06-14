#include "iostream"

using namespace std;

void salario(float hn, float he){
  float st,sr,AFP,ISSS,ISR,RI;
  st=((hn*1.75)+(he*2.50)); //saca el salario total
  AFP=(st*0.0625);          //descuento AFP
  ISSS=(st*0.04);           //descuento del seguro social
  RI= ((st)-(AFP+ISSS));    //saca el impuesto sobre la renta
  if (RI>500)               //primera condicion si el salario menos descuentos es mayor a 500 se aplica el ISR
  {
      RI = RI- 500;
      ISR= ((RI*0.10)+(17.67));
      sr=(st-AFP-ISSS-ISR);
  }
  else                      //si no pasa la condicion anterior solo se muestra el sueldo total menos descuentos
  {
      ISR= RI;
      sr=RI;
  }
  
  cout<<"el salario total: $"<<st<<endl;// al final la funcion muestra dos respuestas salario total
  cout<<"el salario real: $"<<sr<<endl;// y salario real

}

int main()

{
    float ne,i,hn,he;// se creo una variable para numero de empleados=ne, contador=i,horas normales=hn y las horas extra=he
    cout<<endl;
    cout<<"Bienvenido al programa de salario mensual de empleados"<<endl;
    cout<<"Ingrese el numero total de empleados"<<endl;//para empezar el proceso se pide al usuario ingresar numero de empleados a evaluar
    cin>>ne;
   
    
    for (i = 0;i<ne;i++) //para esta instruccion iterativa se pide al programa repetir los comandos siguiente segun 
    {                    //el numero de empleados ingresados por el usuario
        cout<<endl;
        cout<<"empleado: "<<i+1<<endl;                    //muestra en pantalla por cual numero de empleado se encuentra
        cout<<"ingrese las horas realizadas del empleado"<<endl;
        cin>>hn;                                          //pide horas normales
        cout<<"ingrese las horas extras realizadas"<<endl;
        cin>>he;                                          //pide horas extra
        cout<<"el nombre del empleado "<<i+1<<" es:"<<endl;
        salario(hn,he);                                   //llama a la funcion salario para calcular salario mensual de c/u por separado
        cout<<endl;   
    }
}