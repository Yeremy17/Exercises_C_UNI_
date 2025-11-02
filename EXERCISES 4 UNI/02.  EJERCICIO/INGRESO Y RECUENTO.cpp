/*2. Escriba un programa que ingrese elementos de un array y luego
imprima el recuento de elementos mayores a 10*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	const int mayor = 10;
	int contador = 0;
	int array[10] = {};

	cout << "//Ingresa tus 10 valores al array//" << endl << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Ingresa valor de array[" << i << "]: "; cin >> array[i];

		if (mayor < array[i])
		{
			contador++;
		}
	}

	cout << endl << "Num de elementos > 10 = " << contador;
	
	system("pause>0");
	return 0;
}