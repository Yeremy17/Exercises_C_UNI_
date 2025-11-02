/*13. Suma de elementos de la diagonal*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int sumaDInversa(int[][3], int);

int sumaDPrincipal(int a[][3], int filas) {
	int s = 0;
	for (int i = 0; i < filas; i++)
		for (int j = 0 + i; j < 1 + i; j++) 
			s += a[i][j];

	return s;
}


int main()
{
	int x[3][3] = 
	{	1,2,3,
		4,5,6,
		7,8,9 
	};
	int y[3][3] = { 5,4,26,2,3,4,1,8,2 /*,0*/ };
	cout << "La suma de la diagonal del array x es: " << sumaDPrincipal(x, 3) << endl;
	cout << "La suma de la diagonal del array y es: " << sumaDInversa(y, 3) << endl;


	system("pause>null");
	return 0;
}

int sumaDInversa(int a[][3], int filas) {
	int s = 0;
	for (int i = 0; i < filas; i++)
		for (int j = 2 - i; j < 3 - i; j++)
			s += a[i][j];

	return s;
}

