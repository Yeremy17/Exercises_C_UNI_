/*8.Escribe una función que tome un número entero y devuelva verdadero si es un número primo y falso en caso contrario.*/

#include <iostream>
#include <windows.h>

using namespace std;

bool esPrimo(int num)
{
	bool verificar = true;

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			verificar = false; 
			break;
		}
	}

	return verificar;
}


int main()
{
	int x;
	cout << "Ingresa el numero: "; cin >> x;
	if (esPrimo(x) == true)
		cout << x << " si es un numero primo" << endl;
	else
		cout << x << " no es un numero primo" << endl;


	system("pause>NUL");
	return 0;
}