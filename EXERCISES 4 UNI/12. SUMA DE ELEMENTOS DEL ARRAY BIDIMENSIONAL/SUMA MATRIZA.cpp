/*12 Suma de elementos en un Array 2D*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int suma(int[][2], int);

int main()
{
	int x[3][2] = { 6,5,4,3,2,1 };
	int y[4][2] = { 5,4,3,2,3,4,1 /*,0*/ };
	cout << "La suma del array x es: " << suma(x, 3) << endl;
	cout << "La suma del array y es: " << suma(y, 4) << endl;


	system("pause>null");
	return 0;
}

int suma(int a[][2], int filas) {
	int s = 0;
	for (int i = 0; i < filas; i++)
		for (int j = 0; j < 2; j++)
			s += a[i][j];
	return s;
}
