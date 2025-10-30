/*9. Elabore un programa que invoque a una función, la cual imprimirá un
mensaje en pantalla.*/
#include <iostream>
#include <windows.h>

using namespace std;

void saludar(void) // viene por defecto si no se agrega a un () vacio
{
	cout << "HOLA, MUY BUENAS NOCHES, GRACIAS POR EJECUTAR EL PROGRAMA :)" << endl; 
}

int main()
{
	saludar(); // no es necesario poner nada


	system("pause>NUL");
	return 0;
}