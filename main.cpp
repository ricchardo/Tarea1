#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)
    {
        return a;
    }
    else
        return b;

}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c)//Compara a con b y c:
       return a;// a es <
    else if(b>a && b>c)//Compara b con a y c
        return b;//b es <
    else
        return c; //c es <
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]= valor;
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int temp=0;
    for(int i=0; i<tamano-1; i++) //recorremos el arreglo
       {
          for(int j=0; j < tamano-i-1; j++)
          {
            if(arreglo[j] > arreglo[j+1])
            {
                temp= arreglo[j+1];
                arreglo[j+1]= arreglo[j];
                arreglo[j]=temp;

            }

          }
    }
        return arreglo[tamano-1];
    }


//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int temp=0;
    int menor=0;
    for(int i=0; i<tamano-1; i++) //recorremos el arreglo
       {
          for(int j=0; j < tamano-i-1; j++)
          {
            if(arreglo[j] > arreglo[j+1])
            {
                temp= arreglo[j+1];
                arreglo[j+1]= arreglo[j];
                arreglo[j]=temp;

            }

          }
    }
        return arreglo[menor];
    }

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int suma = 0;
	int promedio = 0;
	for(int i = 0; i < tamano; i++)
	{
	suma = suma + arreglo[i];//suma todos los elementos del arreglo
	promedio= suma/tamano;//luego dividimos la suma /cantidad de elementos
	}
    return promedio;

}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
