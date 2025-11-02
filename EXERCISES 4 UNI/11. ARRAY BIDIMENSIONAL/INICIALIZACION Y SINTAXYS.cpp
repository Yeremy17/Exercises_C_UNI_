/*11. Declare un array 3 por 4 , Asignar valores a los elementos de la matriz, Imprimir Elementos*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

void imprimir(int matrizz[][4])
{
	//	imprimir
	cout << endl << endl << "Valores de Array Bidimensional o Matriz: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << endl << "Matriz [" << i + 1 << "][" << j + 1 << "]: " << matrizz[i][j];
		}
	}
}

int main()
{
	//	declarar
	int matriz[3][4] = {};
	
	//	asignar
	Random azar;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matriz[i][j] = azar.Next(1, 11);
		}
	}

	// imprimir
	imprimir(matriz);
	cout << endl;

	system("pause>null");
	return 0;
}