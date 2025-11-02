/*7. Función intercambio*/
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std; using namespace System;

void intercambiar(int& n1, int& n2);

int main()
{
	int n1, n2;
	cout << "Introduce tu primer numero y despues tu segundo numero: " << endl; cin >> n1 >> n2;
	cout << "n1 = " << n1 << "  n2 = " << n2; cout << endl;

	cout << endl << "Despues del intercambio: "; intercambiar(n1, n2);
	cout << endl <<  "n1 = " << n1 << "  n2 = " << n2; cout << endl;

	system("pause>0");
	return 0;
}

void intercambiar(int& n1, int& n2)
{
	swap(n1, n2);
}