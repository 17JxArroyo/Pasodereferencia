//Autor: Joseph Arroyo
//Fecha: 2024-06-15
//Temaa: Paso de parametros por valor
#include<iostream>
using namespace std;

//Ejemplo de paso de parametros por valor 
int PasoxValor (int a)

{
    a = a * 10;
    cout<<endl<<"El valor de la variable dentro de la funcion: "<<a;
    return 1;
}

int main()
{
    int num = 2;
    cout<<endl<<"Valor de la variable antes de llamar a la funcion: "<<num;
    PasoxValor(num);
    cout<<endl<<"Valor de la variable despues de llamar a la funcion: "<<num;
    return 0;
}