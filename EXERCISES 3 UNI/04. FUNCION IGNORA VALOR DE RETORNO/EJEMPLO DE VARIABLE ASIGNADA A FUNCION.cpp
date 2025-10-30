/*4. Una función llamadora
puede ignorar libremente
el valor de retorno.*/
#include <iostream>
#include <windows.h>

using namespace std;

int siguiente(int i) 
{
	return i + 1;
}

int main()
{
	int j;
	j = siguiente(2); //ESTO NO SE EJECUTA, SOLO GUARDA EL RETURN
	siguiente(6); //RETORNA PERO NO GUARDA NI IMPRIME
	cout << siguiente(5); //RETORNA E IMPRIME, NO GUARDA
	cout  << endl << j << " -> AL LLAMAR SI SE EJECUTA //j";

	system("pause>NUL");
	return 0;
}