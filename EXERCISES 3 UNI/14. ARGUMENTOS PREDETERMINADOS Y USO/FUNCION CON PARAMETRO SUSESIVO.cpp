/*14. Area de Cuadrado en Funciones de valor y de referencia*/
#include <iostream>
#include <windows.h>
#include <cstdlib> // para usar el rand() y srand() de semilla
#include <ctime> // para time() 


using namespace std;

int function(int x = 1, int y = 2, int z = 4); // prototipo de funcion inicializado

int main() {
	cout << function() << endl;
	cout << function(7) << endl;
	cout << function(9, 4) << endl;
	cout << function(6, 8, 6) << endl;

	//los valores van reemplazandose de izquierda a derecha
	/*SOLO SIRVE UNA VEZ YA INICIALIZADO TODOS LOS ARGUMENTOS*/
	system("pause>nul");
	return 0;
}
int function(int x, int y, int z) // funcion definida
{
	return x + y + z;
}

