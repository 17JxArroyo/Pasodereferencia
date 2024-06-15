//Autor: Joseph Arroyo
//Fecha: 2024-06-15
//Temaa: Paso de parametros por Referencia
#include<iostream>
using namespace std;

double Division (double n1, int n2)

{
    return n1/n2;
}

double Division (double n1, int n2)

{
    return n1/n2;
}

double Division(int n1, double n2)
{
    return n1/n2;
}
int main()
{
    cout<<endl<<"100/30 es " <<Division(100,30);
    cout<<endl<<"100/30 es " <<Division(100.0,30.0);
    cout<<endl<<"100/30 es " <<Division(100.0,30);
    cout<<endl<<"100/30 es " <<Division(100,30.0);

    return 0;
}