/*6.Escriba una función que tome tres números enteros y devuelva el máximo*/
#include <iostream>
#include <Windows.h>

using namespace std;

int maximoNumber(const int numbers[])
{
	int mayor = 0;
	bool empate = false;

	for (int i = 0; i < 3; i++)
	{
		if (mayor < numbers[i])
		{
			mayor = numbers[i];
		}
	}
	
	return mayor;
}

bool hayEmpate(int numbers[], int mayor)
{
	int contador = 0;

	for (int i = 0; i < 3; i++)
	{
		if (numbers[i] == mayor)
		{
			contador++;
		}
	}

	return contador > 1;
}


int main()
{
	int numbers[3] = { 0 , 0 , 0,};
	cout << "Introduce 3 numeros enteros: " << endl; cin >> numbers[0] >> numbers[1] >> numbers[2];

	int mayoor = maximoNumber(numbers);

	cout << "El mayor numero es " << mayoor << endl << endl;

	if (hayEmpate(numbers, mayoor))
		cout << "Hay un empate en el numero mayor.\n";
	else
		cout << "No hay empate.\n";

	system("pause>0");
	return 0;
}