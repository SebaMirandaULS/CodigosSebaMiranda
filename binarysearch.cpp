#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int searchValue)//Defino la busqueda lineal, 1er elemento es el array, 2do es el tamaño del array, 3ro es el numero ingresado por el usuario
{
  int low = 0;//defino primer termino del array
  int high = size - 1;//defino ultimo termino del array

  int mid;

  while (low <= high)//restringir de menor a mayor
    {
      mid = (low + high) / 2;// valor del medio

      if(searchValue == array[mid])//si valor buscado es igual al termino del array entonces retorne mid
	{
	  return mid;//retorna mid
	}
      else if (searchValue > array[mid])//si el valor buscado es mayor al mid,
	{
	  low = mid + 1;//redefina el valor minimo como el valor del medio mas 1
	}
      else
	{
	  high = mid -1;//si es mayor, entonces redefina el valor maximo como el valor del medio -1
	}
    }

  return -1;
}

int main()
{
  int a[] = {1, 4, 7, 8, 9, 12, 14, 15, 16, 19, 23, 25, 32, 37, 38, 39, 40, 41, 44, 45, 48, 49, 51, 54, 60, 61, 63, 64, 65, 69, 73, 78, 80, 82, 84, 85, 87, 89, 91, 98};//array de en este caso 6 elementos
  
  int userValue; //Valor que el usuario ingresa
  
  cout << "Ingrese un entero entre 1 y 100: " << endl;//El programa pregunta explicitamente que ingrese un numero
  cin >> userValue;//al ingresar un numero el programa lo detecta como el valor que el usuarioo ingresa

  int result = binarySearch(a, 40, userValue);//llamo al comando linearSearch y le doy valores, 6 es el valor del array

  if(result >= 0)//aqui va lo del return -1. Si es negativo va en el "else"
    {
      cout << "El numero " << a[result] << " esta en la posicion: " << result << endl;//escribo textualmente lo que va aparecer si el valor esta dentro del array
    }
  else
    {
      cout << "El numero " << userValue << " no fue encontrado" << endl;//escribo textualmente lo que aparece si el valor no esta dentro del array
    }

}
