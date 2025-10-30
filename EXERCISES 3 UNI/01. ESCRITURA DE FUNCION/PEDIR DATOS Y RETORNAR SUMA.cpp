/*1.Elabore  un  programa  que  solicite  dos  números enteros de entrada y obtenga como salida la suma de ambos.*/
#include <iostream>
#include <windows.h>

using namespace std;

int suma(int *n1, int *n2)
{
	return *n1 + *n2;
}

int main()
{
	//Entrada de datos
	int resultado = 0;
	int *n1, *n2;

	cout << "WELCOME:" << endl << "INTRODUCE A FIRST NUMBER: "; cin >> *n1; 
	cout << "INTRODUCE A SECOND NUMBER: "; cin >> *n2; 

	//Activacion de la funcion
	resultado = suma(n1,n2);

	cout << endl << endl << "EL RESULTADO DE LA SUMA DE TUS DOS NUMEROS ES: " << resultado;

	system("pause>0");

	return 0;
}