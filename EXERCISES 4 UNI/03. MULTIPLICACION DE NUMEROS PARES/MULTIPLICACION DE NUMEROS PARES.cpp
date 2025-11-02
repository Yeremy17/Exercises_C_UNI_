/*3. Multiplicar elementos en posiciones pares*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

int main()
{
	int array[5] = {};
	int mult = 1;
	cout << "Enter numbers: " << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Array[" << i << "]: "; cin >> array[i];

		if (i % 2 == 0)
		{
			mult *= array[i];
		}
	}

	cout << "\n\nMultiplication of pairs numbers is: " << mult;

	system("pause>0");
	return 0;
}