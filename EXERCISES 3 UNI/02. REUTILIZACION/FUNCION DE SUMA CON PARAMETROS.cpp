/*2. Escriba un programa que utilice una función para calcular e imprimir la suma de dos números.*/
#include <iostream>
#include <windows.h>

using namespace std;

int suma(int* n1, int* n2)
{
	int suma = *n1 + *n2;
	return suma;
}

void mostrar(int *n1, int *n2)
{
	cout << endl << "La suma de x con y" << endl << "La suma de y con x" << endl;
	cout << "La suma de " << *n1 << " con " << *n2 << " = " << suma(n1,n2) << endl << endl;
}

int main()
{
	//Entrada de datos
	int resultado = 0;
	int* n1 = new int; // Asignar memoria
	int* n2 = new int; // Asignar memoria

	cout << "WELCOME:" << endl << "INTRODUCE A FIRST NUMBER: "; cin >> *n1;
	cout << "INTRODUCE A SECOND NUMBER: "; cin >> *n2;

	//Activacion de la funcion
	resultado = suma(n1, n2);

	//Imprimir la suma de dos numeros
	mostrar(n1, n2);
	cout << "EL RESULTADO DE LA SUMA DE TUS DOS NUMEROS ES: " << resultado;

	delete n1; // Liberar memoria
	delete n2;

	system("pause>0");

	return 0;
}