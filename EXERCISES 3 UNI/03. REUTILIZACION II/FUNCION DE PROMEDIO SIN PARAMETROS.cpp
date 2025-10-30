/*3. Elabore un programa que incluya la función promedio. El
programa leerá tres números y calcula sus promedios un
par a la vez.*/
#include <iostream>
#include <windows.h>

using namespace std;

double promedioDe3()
{
	double x, y, z;
	cout << "Introduce los 3 numeros a calcular su promedio: (enter) " << endl; cin >> x >> y >> z;
	
	double promedio = double((x + y + z )/ 3);

	return promedio;
}

double promedioParALaVez()
{
	double x, y, z;
	cout << "Introduce 3 numeros para calcular su promedio par por par: (enter) " << endl; cin >> x >> y >> z;
	
	double promedio = (x + y) / 2;
	cout << "Promedio de " << x << " y " << y << " es " << promedio << endl;
	promedio = (z +y) / 2;
	cout << "Promedio de " << z << " y " << y << " es " << promedio << endl;
	promedio = (x + z) / 2;
	cout << "Promedio de " << x << " y " << z << " es " << promedio << endl;

	return 0;
}

int main()
{
	cout << "==Calculadora de Promedio de 3 Numeros Enteros==" << endl << endl;

	double pro = promedioDe3();

	cout << endl << endl << "El promedio de tus 3 numeros es: " << pro << endl << endl;
	
	promedioParALaVez();

	system("pause>NUL");
	return 0;
}
