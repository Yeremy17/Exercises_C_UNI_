/*8. Ordenamiento de arrays mediante el método de la burbuja*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

void intercambiar(int& n1, int& n2);

int main()
{
	int array[5] = {};
	cout << "Enter numbers for you array: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array[" << i + 1 << "]: "; cin >> array[i];

	}

	cout << endl << "Array[1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";

	}

	cout << endl << "Later change...." << endl;
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (array[j] > array[j+1])
			{
				intercambiar(array[j], array[j+1]);
			}
		}
	}

	cout << endl << "New Array[1-5]: ";
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " ";

	}

	cout << endl << endl;


	system("pause>0");
	return 0;
}

void intercambiar(int& n1, int& n2)
{
	swap(n1, n2);
}