// 6. La distancia entre Trujillo y Chiclayo es de 204 Km. Si un conductor parte el día lunes de
// Trujillo a una velocidad constante de X km / h, y el día martes repite el mismo procedimiento a Y
// km / h.Qué día llega más rápido a Chiclayo y que tiempo se demora ?
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	const int distancia = 204;
	int velocidad1, velocidad2;
	

	cout << "//////===========================WELCOME==========================\\\\\\\\\\" << endl;
	cout << endl << "Cuanta fue tu velocidad a la que fuiste el dia lunes? "; cin >> velocidad1;
	cout << "Cuanta fue tu velocidad a la que fuiste el dia martes? "; cin >> velocidad2;


	int tiempo1 =  distancia / velocidad1 ; int tiempo2 = distancia / velocidad2;
	cout << endl << endl << "El tiempo que hiciste el lunes fue de: " << tiempo1 << " horas";
	cout << endl << endl << "El tiempo que hiciste el martes fue de: " << tiempo2 << " horas";

	if (tiempo1 == tiempo2)
	{
		cout << endl << endl << "En los dos dias llego mas rapido." << endl << "Se demoro lo mismo.";
	}
	else if (tiempo1 > tiempo2)
	{
		cout << endl << endl << "El dia martes llego mas rapido." << endl << "Se demoro " << tiempo2 << " horas";
	}
	else
	{
		cout << endl << endl << "El dia lunes llego mas rapido." << endl << "Se demoro " << tiempo1 << " horas";
	}

	system("pause>0");
	return 0;
}