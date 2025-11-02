/*9. Suma de elementos de Arrays*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

void suma(int array[], int &suma);

int main()
{
	int array1[5] = {};
	int array2[5] = {};
	int sumatoria = 0;
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

	
	suma(array1, sumatoria);
	cout << endl << endl << "La sumatoria del primer array es de: " << sumatoria;
	suma(array2, sumatoria);
	cout << endl << endl << "La sumatoria del segundo array es de: " << sumatoria;

	system("pause>0");
	return 0;
}

void suma(int array[], int &suma)
{
	suma = 0;
	for (int i = 0; i < 5; i++)
	{
		suma = suma + array[i];
	}
}