/*11. Escriba una función que imprima uno de tres mensajes aleatoriamente*/
#include <iostream>
#include <windows.h>
#include <cstdlib> // para usar el rand() y srand() de semilla
#include <ctime> // para time() 


using namespace std;

void imprimeMensajes()
{
	int i = rand() % 3 + 1;

	switch (i)
	{
	case 1:
		cout << "Hola\n";
		break;
	case 2:
		cout << "Como vas\n";
		break;
	case 3:
		cout << "Bienvenido\n";
		break;
	}
}

int main()
{

	srand(time(NULL)); // Inicializa la semilla del generador aleatorio

	for(int i = 0; i < 4; i++)
		imprimeMensajes();

	system("pause");
	return 0;
}