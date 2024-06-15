//Autor: Joseph Arroyo
//Fecha: 2024-06-15
//Temaa: Ecuacion cuadratica usando paso por referencia
/*Dise;e la funcion que resuelve el problema de la ecuacion cuadratica.
la funcion debe recibir en total 5 parametros: Los 3 primeros son
los valor a, b y c que representan los coeficientes de la ecuacion.
los 2 parametros restantes representan los valores resultantes de la 
ecuacion, en este caso x1, y x2 que se deben pasar como referencias.
la funcion debuelve falso, si la ecuacion presenta errores;
caso contrario devuelve verdadero
x1 = (-b raiz(b*b - 4*a*c))/(2*a)
x2 + (-b -raiz(b*b -4*a*c))/(2*a)
*/
#include<iostream>
#include<math.h>
using namespace std;

bool EcuacionCuadratica(double a, double b, double c, double& x1, double& x2)
{
    if(a==0) //division por 0
        return false;
    
    //calculo disciminante
    double d = (b*b) - (4*a*c);
    if(d < 0) //raiz cuadrada negativa
        return false;

    //calcular x1 y x2
    x1 =(d + sqrt(b*b) - (4*a*c))/(2*a);
    x2 =(d - sqrt(b*b) - (4*a*c))/(2*a);

    return true; //ecuacion correcta
}


int main()
{
    double x1, x2;
    bool res = EcuacionCuadratica(1, 2, 2, x1, x2);
    if(res)
    {
        cout<<endl<<"x1 = "<<x1;
        cout<<endl<<"x2 = "<<x2;
    }
    else
    {
        cout<<endl<<"Error: Division por cero o raiz cuadrada negativa";
    }

}