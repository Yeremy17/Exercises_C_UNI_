#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	// inicializar
	int array[3] = {};
	array[0] = 2;
	array[1] = 5;
	array[2] = 9;

	// imprimir
	cout << "Valores del array: ";
	for (int i = 0; i < 3; i++)
		cout << array[i] <<  "  ";

	// entrada
	cout << endl << endl << "Ingresa valor para array: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Array[" << i << "]: "; cin >> array[i];
	}
	cout << endl;

	// salida
	cout << "Valores nuevos del array: ";
	for (int i = 0; i < 3; i++)
		cout << array[i] << "  ";

	system("pause>0");
	return 0;
}