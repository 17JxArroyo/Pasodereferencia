//Autor: Joseph Arroyo
//Fecha: 2024-06-15
//Tema:Disene un sistema que imprima las 52 cartas de naipe 

#include<iostream>
#include<time.h>
#include <cstdlib>
using namespace std;
void ImprimeCarta(int numero, string tipoCarta)
{
      cout<<endl;
  if(numero==1 && tipoCarta=="brillo")
  {
    cout<<"╔════════════╗"<<endl; //201  205   187
    cout<<"║          ♦ ║"<<endl;  //186
    cout<<"║            ║"<<endl;  //186
    cout<<"║     A      ║"<<endl;  //186
    cout<<"║            ║"<<endl;  //186
    cout<<"║ ♦          ║"<<endl;  //186
    cout<<"╚════════════╝"<<endl;  //200   205   188
  }
  else if (numero==1 && tipoCarta=="corazón")
  {
    cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl; //201  205   187
    cout<<"▓          ♥ ▓"<<endl;  //186
    cout<<"▓            ▓"<<endl;  //186
    cout<<"▓     A      ▓"<<endl;  //186
    cout<<"▓            ▓"<<endl;  //186
    cout<<"▓ ♥          ▓"<<endl;  //186
    cout<<"▓▄▄▄▄▄▄▄▄▄▄▄▄▓"<<endl;  //200   205   188
  }
  else if(numero==1 && tipoCarta=="trébol")
  {
    cout<<"╔════════════╗"<<endl; //201  205   187
    cout<<"║          ♣ ║"<<endl;  //186
    cout<<"║            ║"<<endl;  //186
    cout<<"║     A      ║"<<endl;  //186
    cout<<"║            ║"<<endl;  //186
    cout<<"║ ♣          ║"<<endl;  //186
    cout<<"╚════════════╝"<<endl;  //200   205   188
  }
  else if (numero==1 && tipoCarta=="negro")
  {
    cout<<"▄▄▄▄▄▄▄▄▄▄▄▄▄▄"<<endl; //201  205   187
    cout<<"▓          ♠ ▓"<<endl;  //186
    cout<<"▓            ▓"<<endl;  //186
    cout<<"▓     A      ▓"<<endl;  //186
    cout<<"▓            ▓"<<endl;  //186
    cout<<"▓ ♠          ▓"<<endl;  //186
    cout<<"▓▄▄▄▄▄▄▄▄▄▄▄▄▓"<<endl;  //200   205   188
  }
  else if(numero==7 && tipoCarta=="brillo")
    {
        cout<<"╔══════════════╗"<<endl;//201, 205, 187
        cout<<"║             ♦║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║       7      ║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║♦             ║"<<endl;//186
        cout<<"╚══════════════╝"<<endl<<endl;//200, 205, 188
    }
    else if (numero==7 && (tipoCarta=="corazon" || tipoCarta=="corazón"))
    {
        cout<<"╔══════════════╗"<<endl;//201, 205, 187
        cout<<"║             ♥║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║       7      ║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║♥             ║"<<endl;//186
        cout<<"╚══════════════╝"<<endl<<endl;//200, 205, 188
    }
 
    else if (numero==7 && (tipoCarta=="trebol" || tipoCarta=="trébol"))
    {
        cout<<"╔══════════════╗"<<endl;//201, 205, 187
        cout<<"║             ♣║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║       7      ║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║♣             ║"<<endl;//186
        cout<<"╚══════════════╝"<<endl<<endl;//200, 205, 188
    }
 
    else if (numero==7 && tipoCarta=="negro")
    {
        cout<<"╔══════════════╗"<<endl;//201, 205, 187
        cout<<"║             ♠║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║       7      ║"<<endl;//186
        cout<<"║              ║"<<endl;//186
        cout<<"║♠             ║"<<endl;//186
        cout<<"╚══════════════╝"<<endl<<endl;//200, 205, 188
    }
  else if(numero==6 && tipoCarta=="brillo")
    {
        cout<<"╔════════════╗"<<endl;
        cout<<"║          ♦ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     6      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ ♦          ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }
    else if(numero==6 && tipoCarta=="negro")
    {
        cout<<"╔════════════╗"<<endl;
        cout<<"║          ♠ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     6      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ ♠          ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }
    else if(numero==6 && tipoCarta=="corazón")
    {
        cout<<"╔════════════╗"<<endl;
        cout<<"║          ♥ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     6      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ ♥          ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }
    else if(numero==6 && tipoCarta=="trébol")
    {
        cout<<"╔════════════╗"<<endl;
        cout<<"║          ♣ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     6      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ ♣          ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }
  ///////////////99999999999999999999
  else if(numero==9 && tipoCarta =="brillo"){ //CARTA 9
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║9      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 186
        cout<<"║ ▒   ▒ ║"<<endl; // 176
        cout<<"║   ♦   ║"<<endl; // 186
        cout<<"║ ▒   ▒ ║"<<endl; // 176
        cout<<"║       ║"<<endl; // 186
        cout<<"║      9║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }else if(numero == 9 && tipoCarta == "corazón"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║9      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 186
        cout<<"║ ╦   ╦ ║"<<endl; // 203
        cout<<"║   ♥   ║"<<endl; // 3
        cout<<"║ ╦   ╦ ║"<<endl; // 203
        cout<<"║       ║"<<endl; // 186
        cout<<"║      9║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    else if(numero == 9 && tipoCarta == "trébol"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║9      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 186
        cout<<"║ ┤   ├ ║"<<endl; // 180 - 195
        cout<<"║   ♣   ║"<<endl; // 5
        cout<<"║ ┤   ├ ║"<<endl; // 180 - 195
        cout<<"║       ║"<<endl; // 186
        cout<<"║      9║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    else if(numero == 9 && tipoCarta == "negro"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║9      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 186
        cout<<"║ ¥   ¥ ║"<<endl; // 190
        cout<<"║   ♠   ║"<<endl; // 2
        cout<<"║ ¥   ¥ ║"<<endl; // 190
        cout<<"║       ║"<<endl; // 186
        cout<<"║      9║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    //////////////12     12      12
    else if(numero == 12 && tipoCarta == "corazón"){ //CARTA 12
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║Q      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 4
        cout<<"║       ║"<<endl; // 190
        cout<<"║   ♥   ║"<<endl; // 2
        cout<<"║       ║"<<endl; // 190
        cout<<"║       ║"<<endl; // 186
        cout<<"║      Q║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }else if(numero == 12 && tipoCarta == "trébol"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║Q      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 4
        cout<<"║       ║"<<endl; // 190
        cout<<"║   ♣   ║"<<endl; // 2
        cout<<"║       ║"<<endl; // 190
        cout<<"║       ║"<<endl; // 186
        cout<<"║      Q║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    else if(numero == 12 && tipoCarta == "negro"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║Q      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 4
        cout<<"║       ║"<<endl; // 190
        cout<<"║   ♠   ║"<<endl; // 2
        cout<<"║       ║"<<endl; // 190
        cout<<"║       ║"<<endl; // 186
        cout<<"║      Q║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    else if(numero == 12 && tipoCarta == "brillo"){
        cout<<"╔═══X═══╗"<<endl; //201 - 205 - 187
        cout<<"║Q      ║"<<endl; // 186
        cout<<"║       ║"<<endl; // 4
        cout<<"║       ║"<<endl; // 190
        cout<<"║   ♦   ║"<<endl; // 2
        cout<<"║       ║"<<endl; // 190
        cout<<"║       ║"<<endl; // 186
        cout<<"║      Q║"<<endl; // 186
        cout<<"╚═══════╝"<<endl; // 200 - 188
    }
    ///////////// 10       10      10
    else if(numero==10 && tipoCarta=="brillo")
    {
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║10           ║"<<endl;/*186*/
    cout<<"║ ♦           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♦      ║"<<endl;
    cout<<"║      ♦      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           10║"<<endl;
    cout<<"║           ♦ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}  
else if(numero==10 && tipoCarta=="corazón")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║10           ║"<<endl;/*186*/
    cout<<"║ ♥           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♥      ║"<<endl;
    cout<<"║      ♥      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           10║"<<endl;
    cout<<"║           ♥ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
else if(numero==10 && tipoCarta=="negro")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║10           ║"<<endl;/*186*/
    cout<<"║ ♠           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♠      ║"<<endl;
    cout<<"║      ♠      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           10║"<<endl;
    cout<<"║           ♠ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
else if(numero==10 && tipoCarta=="trébol")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║10           ║"<<endl;/*186*/
    cout<<"║ ♣           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♣      ║"<<endl;
    cout<<"║      ♣      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           10║"<<endl;
    cout<<"║           ♣ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
////////////// 11     11              11
else if( numero==11 && tipoCarta=="brillo")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║ J           ║"<<endl;/*186*/
    cout<<"║ ♦           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♦      ║"<<endl;
    cout<<"║      ♦      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           J ║"<<endl;
    cout<<"║           ♦ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
else if( numero==11 && tipoCarta=="corazón")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║ J           ║"<<endl;/*186*/
    cout<<"║ ♥           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♥      ║"<<endl;
    cout<<"║      ♥      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           J ║"<<endl;
    cout<<"║           ♥ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
else if( numero==11 && tipoCarta=="negro")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║ J           ║"<<endl;/*186*/
    cout<<"║ ♠           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♠      ║"<<endl;
    cout<<"║      ♠      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           J ║"<<endl;
    cout<<"║           ♠ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
}
else if( numero==11 && tipoCarta=="trébol")
{
    cout<<"╔═════════════╗"<<endl;/*201;205;187*/
    cout<<"║ J           ║"<<endl;/*186*/
    cout<<"║ ♣           ║"<<endl;/*186*/
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║      ♣      ║"<<endl;
    cout<<"║      ♣      ║"<<endl;
    cout<<"║   ┤     ├   ║"<<endl;
    cout<<"║           J ║"<<endl;
    cout<<"║           ♣ ║"<<endl;
    cout<<"╚═════════════╝"<<endl;
    }
    /////////////////////5       5     5
    else if(numero==5 && tipoCarta=="brillo"){
        cout<<"╔════════════╗"<<endl;
        cout<<"║         5♦ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     5      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ 5♦         ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }else if(numero==5 && tipoCarta=="trébol"){
        cout<<"╔════════════╗"<<endl;
        cout<<"║         5♣ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     5      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ 5♣         ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }else if(numero==5 && tipoCarta=="corazón"){
        cout<<"╔════════════╗"<<endl;
        cout<<"║         5♥ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     5      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ 5♥         ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }else if(numero==5 && tipoCarta=="negro"){
        cout<<"╔════════════╗"<<endl;
        cout<<"║         5♠ ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║     5      ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║            ║"<<endl;
        cout<<"║ 5♠         ║"<<endl;
        cout<<"╚════════════╝"<<endl;
    }
    /////////// 3      3           3
    else if(numero==3 && tipoCarta=="corazón")
   {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♥ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    3    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♥       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
   }
    else if(numero==3 && tipoCarta=="trébol")
    {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║        ♣║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    3    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║♣        ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  else if(numero==3 && tipoCarta=="negro")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♠ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    3    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♠       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  else if(numero==3 && tipoCarta=="brillo")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♦ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    3    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♦       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  ///////////// 4     4     4
  else if(numero==4 && tipoCarta=="brillo")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♦ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    4    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♦       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  else if(numero==4 && tipoCarta=="corazón")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♥ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    4    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♥       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
    else if(numero==4 && tipoCarta=="trébol")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♣ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    4    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♣       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  else if(numero==4 && tipoCarta=="negro")
  {
    cout<<"╔═════════╗"<<endl; //201 205 187
    cout<<"║       ♠ ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║    4    ║"<<endl; //186
    cout<<"║         ║"<<endl; //186
    cout<<"║ ♠       ║"<<endl; //186
    cout<<"╚═════════╝"<<endl; //200 205 188
  }
  /////// 2        2            2
  if(numero==2 && tipoCarta=="brillo")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♦ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     2      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♦          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==2 && tipoCarta=="corazón")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♥ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     2      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♥          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }
    else if(numero==2 && tipoCarta=="trébol")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♣ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     2      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♣          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==2 && tipoCarta=="negro")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♠ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     2      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♠          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }
    //// 8         8          8
      if(numero==8 && tipoCarta=="brillo")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♦ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     8      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♦          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==8 && tipoCarta=="corazón")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♥ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     8      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♥          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }
    else if(numero==8 && tipoCarta=="trébol")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♣ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     8      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♣          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==8 && tipoCarta=="negro")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♠ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     8      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♠          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
    }
    //////// K      K      K
      if(numero==13 && tipoCarta=="brillo")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♦ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     K      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♦          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==13 && tipoCarta=="corazón")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♥ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     K      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♥          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }
    else if(numero==13 && tipoCarta=="trébol")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♣ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     K      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♣          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }      
    else if(numero==13 && tipoCarta=="negro")
    {
        cout<<"╔════════════╗"<<endl; //201  205   187
        cout<<"║          ♠ ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║     K      ║"<<endl;  //186
        cout<<"║            ║"<<endl;  //186
        cout<<"║ ♠          ║"<<endl;  //186
        cout<<"╚════════════╝"<<endl;  //200   205   188
 
    }
}

int GeneraNumero()
{
    int numero = 1 + rand() % 13;
    return numero;
}

//Genera la palabra brillo - corazon - trebol - negro
string GeneraTipoCata()
{
    int numero = 1 + rand() % 4;
    if(numero==1)
        return "brillo";
    else if (numero==2)
        return "coazon";
    else if (numero==3);
        return "trebol";
    else if (numero==4);
        return "negro";

}

int main()
{
    srand(time(NULL));

    ImprimeCarta(GeneraNumero(), GeneraTipoCarta());
    ImprimeCarta(GeneraNumero(), GeneraTipoCarta());
    ImprimeCarta(GeneraNumero(), GeneraTipoCarta());
    ImprimeCarta(GeneraNumero(), GeneraTipoCarta());

}