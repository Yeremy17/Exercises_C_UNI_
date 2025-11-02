/*6. Ubicación en arrays mediante búsqueda lineal:*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	int array[5] = {};
	int buscador = 0;
	bool encontrado = false;
	int pos = 0;
	cout << "Enter numbers for you array: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array[" << i + 1 << "]: "; cin >> array[i];

	}

	cout << endl << endl << "Enter your search number: "; cin >> buscador;

	for (int i = 0; i < 5; i++)
	{
		if (buscador == array[i])
		{
			encontrado = true;
			pos = i + 1;
			break;
		}

	}

	encontrado ? cout << endl<< buscador << " Encontrado en posicion " << pos << endl 
		: cout << endl << buscador << " No existe" << endl;

	system("pause>0");
	return 0;
}