#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)//Defino la busqueda lineal, 1er elemento es el array, 2do es el tamaño del array, 3ro es el numero ingresado por el usuario
{
  for(int i = 0; i < size; i++)//ciclo for, toma el primer elemento del array que sea menor al tamaño del mismo, y empieza a sumar 1 por 1
    {
      if (searchValue == array[i])//Si el valor buscado es igual al numero en la posicion i del array, entonces retorne i
	{
	  return i;//retorna i
	}
    }
  return -1;//Si no retorne -1(despues en el main, defino que si el valor es negativo arroje error explicito en la ejecucion del programa
}

int main()
{
  int a[] = {15, 23, 7, 45, 87, 16, 48, 84, 32, 14, 1, 54, 12, 98, 78, 25, 41, 37, 65, 51, 9, 64, 85, 38, 63, 49, 89, 69, 40, 73, 91, 19, 80, 39, 44, 61, 4, 82, 60, 8};//array de en este caso 6 elementos

  int userValue; //Valor que el usuario ingresa
  
  cout << "Ingrese un entero entre 1 y 100: " << endl;//El programa pregunta explicitamente que ingrese un numero
  cin >> userValue;//al ingresar un numero el programa lo detecta como el valor que el usuarioo ingresa

  int result = linearSearch(a, 50, userValue);//llamo al comando linearSearch y le doy valores, 6 es el valor del array

  if(result >= 0)//aqui va lo del return -1. Si es negativo va en el "else"
    {
      cout << "El numero " << a[result] << " esta en la posicion: " << result << endl;//escribo textualmente lo que va aparecer si el valor esta dentro del array
    }
  else
    {
      cout << "El numero " << userValue << " no fue encontrado" << endl;//escribo textualmente lo que aparece si el valor no esta dentro del array
    }

}
