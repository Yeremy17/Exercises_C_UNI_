/*5. Hallar la posición del elemento máximo*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	int array[5] = {};
	int mayor = 0;
	int pos = 0;
	cout << "Enter numbers: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array[" << i+1 << "]: "; cin >> array[i];

		if (mayor < array[i])
		{
			mayor = array[i];
			pos = i + 1;
		}
	}

	cout << "\n\nMax Number: " << mayor << " Position: " << pos;

	system("pause>0");
	return 0;
}