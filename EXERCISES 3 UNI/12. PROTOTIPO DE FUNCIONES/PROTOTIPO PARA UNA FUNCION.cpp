/*12. Area de un cuadrado*/
#include <iostream>
#include <windows.h>
#include <cstdlib> // para usar el rand() y srand() de semilla
#include <ctime> // para time() 


using namespace std;


int cuadrado(int); //prototipo de función

int main()
{

	for (int x = 1; x <= 7; x++)
		cout << cuadrado(x) << " "; //llamada
	cout << endl;

	system("pause>0");
	return 0;
}

int cuadrado(int y)  //definicion de funcion 
{
	return y * y;
}
