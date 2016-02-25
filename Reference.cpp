---------------------Sección entrada y salida----------------------
//Entrada
cin >> aqui va la variable o mensaje ;
scanf(); //Se tiene que dar formato de salida y entrada
//Salida
cout << aqui va la variable o mensaje ;
printf(); //Se tiene que dar formato de salida
---------------------Sección sentencia if ----------------------
//La sentencia if, evalua la condición que esta entre parentesis
//si se cumple, se realizan las instrucciones dentro de las llaves
if (condición){
  //Aquí deben de ir las instrucciones a realizar
}
----------------Sub-Sección if-else ---------------
//En esta variación de if, se puede agregar una instrucción en caso que no se cumpla la condición del if
//esto se realiza en la parte del else
if(condición){
  //Aquí deben de ir las instrucciones a realizar en caso que se cumpla la condición
}else{
  //Aquí deben de ir las instrucciones a realizar en caso que NO se cumpla la condición
}
----------------Termina Sub-Sección if else ---------------

----------------Sub-Sección if anidados ---------------
//En esta variación de if, se puede agregar un if dentro de otro if
//Ejemplo 1
if(condición){
  //Aquí deben de ir las instrucciones a realizar en caso que se cumpla la condición o incluso otro if
  if(condición){
    //Aquí deben de ir las instrucciones a realizar en caso que se cumpla la condición o incluso otro if
  }
}else{
  //Aquí deben de ir las instrucciones a realizar en caso que NO se cumpla la condición
}
//Ejemplo 2
if(condición){
  //Aquí deben de ir las instrucciones a realizar en caso que se cumpla la condición o incluso otro if
}else{
  //Aquí deben de ir las instrucciones a realizar en caso que NO se cumpla la condición
    if(condición){
    //Aquí deben de ir las instrucciones a realizar en caso que se cumpla la condición o incluso otro if
  }
}
----------------Termina Sub-Sección if anidados ---------------

Ejemplo de programa
https://omegaup.com/arena/problem/CR-Comparaciones#problems
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >>b;
    if(a>b){
        cout <<"Es mayor";
    }else{
       if(b>a){
        cout <<"Es menor";
       }else{
         cout << "Son iguales";
       }
    }
    return 0;
}
----------------Termina Sección if ---------------
