/*4. Hallar el elemento maximo */
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	int array[5] = {};
	int mayor = 0;
	cout << "Enter numbers: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array[" << i << "]: "; cin >> array[i];

		if (mayor < array[i])
		{
			mayor = array[i];
		}
	}

	cout << "\n\nMax Number: " << mayor;

	system("pause>0");
	return 0;
}