/*10. Escriba una función que lea dos números y otra función que imprima su suma*/
#include <iostream>
#include <windows.h>

using namespace std;

void operacionSumar(int x, int y)
{
	int sumar = 0;
	sumar = x + y;

	cout << x << " + " << y << " = " << sumar << endl;
}

void leerNumeros(void)
{
	int A, B;
	cout << "Ingreso dos numeros para evaluar la sumatoria: ";
	cin >> A >> B; cout << endl;
	operacionSumar(A, B);
}

int main()
{
	leerNumeros();
	system("pause");
	return 0;
}