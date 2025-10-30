/*7.Escribe una función que tome un número entero y
devuelva verdadero si es un número primo y falso en
caso contrario.*/
#include <iostream>
#include <Windows.h>

using namespace std;

bool identificarNumeroPrimo(int n)
{
	bool esPrimo = false;
	if ((n <= 1))
	{
		return false;
	}

	if (n <= 3)
	{
		esPrimo = true;
		return esPrimo;
	}
	else if (n % 2 == 0 || n%3 == 0 )
	{
		esPrimo = false;
	}
	else {
		esPrimo = true;
	}

	if ((n % 11 == 0 || n % 5 == 0) && (n != 5 && n != 11)) // La condición (n != 5 && n != 11) será verdadera solo si n no vale 5 ni 11.Si n es 5 o 11, entonces la condición será falsa.
	{
		esPrimo = false;
	}

	// Recorremos desde 2 hasta n-1
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false; // Si es divisible entre otro número, no es primo
		}
	}

	return true; // Si no fue divisible entre ninguno, es primo

}

int main()
{
	int n = 0;
	
	while (1)
	{
		cout << "Introduce tu numero primo: "; cin >> n; cout << "\n";
		bool verificar = identificarNumeroPrimo(n);

		if (verificar)
		{
			cout << "Tu numero Si es Primo" << endl << endl;
		}
		else
			cout << "Tu numero No es Primo" << endl << endl;
	}

	system("pause>0");
	return 0;

}