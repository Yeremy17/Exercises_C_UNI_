/*5.Escriba una función que tome la longitud y el ancho de un rectángulo y
devuelva el área*/
#include <iostream>
#include <Windows.h>

using namespace std;

float area(float x, float y)
{
	float areaRectangulo = x * y;
	return areaRectangulo;
}

int main()
{
	float ancho = 0.0;
	float alto = 0.0;
	cout << "=CALCULA AREA DE RECTANGULO=" << endl; 
	cout << "Introduce ancho: "; cin >> ancho; cout << "Introduce alto: "; cin >> alto;
	cout << endl << endl;
	
	cout << "El area de tu rectangulo es: " << area(ancho, alto) << "cm^2"; 

	system("pause>0");
	return 0;
}