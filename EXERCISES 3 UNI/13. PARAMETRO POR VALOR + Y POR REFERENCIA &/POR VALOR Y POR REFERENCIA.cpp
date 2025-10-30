/*13. Area de Cuadrado en Funciones de valor y de referencia*/
#include <iostream>
#include <windows.h>
#include <cstdlib> // para usar el rand() y srand() de semilla
#include <ctime> // para time() 


using namespace std;


int cuadrado1(int); //prototipo de función
int cuadrado2(int&);

int main()
{
	int x;
	cout << "Ingrese un numero: ";
	cin >> x;
	cuadrado1(x);
	cout << "Llamada a x por valor, x = " << x << endl;
	cuadrado2(x);
	cout << "Llamada a x por referencia, x = " << x<< endl;

	system("pause>0");

	return 0;
}


int cuadrado1(int a) // por valor, int a = x
{
	a = a * a;
	return a;
}
int cuadrado2(int& a) // por referencia, int &a = x
{
	a = a * a;
	return a;
}
