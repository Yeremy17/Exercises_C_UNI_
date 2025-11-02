/*10. Suma de dos Arrays*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

void suma(int array1[], int array2[], int array3[], int suma[]);

int main()
{
	int array1[5] = {};
	int array2[5] = {};
	int array3[5] = {};
	int sumatoria[5] = {};
	cout << "Enter numbers for you first array: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array1[" << i + 1 << "]: "; cin >> array1[i];

	}

	cout << endl << "Array1[1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << array1[i] << " ";

	}

	cout << endl << endl << "Enter numbers for you second array: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array2[" << i + 1 << "]: "; cin >> array2[i];

	}

	cout << endl << "Array2[1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << array2[i] << " ";

	}


	cout << endl << endl << "Enter numbers for you third array: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array3[" << i + 1 << "]: "; cin >> array3[i];

	}

	cout << endl << "Array3[1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << array3[i] << " ";

	}

	suma(array1, array2, array3, sumatoria);
	
	cout << endl << endl << "Array Sumado de todos por indice [1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << endl << "ArraySuma[" << i + 1 << "]: " << sumatoria[i] << " " << endl;

	}

	system("pause>0");
	return 0;
}

void suma(int array1[], int array2[], int array3[], int suma[])
{
	
	for (int i = 0; i < 5; i++)
	{
		suma[i] = 0;
		suma[i] = array1[i] + array2[i] + array3[i];
	}
}