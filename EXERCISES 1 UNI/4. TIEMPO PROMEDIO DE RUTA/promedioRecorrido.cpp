// 4. Todos los lunes, miércoles y viernes, una persona corre 
// la misma ruta y cronometra los
// tiempos obtenidos.Determinar el tiempo 
// promedio que la persona tarda en 
// recorrer la ruta en
// una semana cualquiera.

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	float distanciaRuta; int tiempoMinutos[3];
	float promedio; int suma = 0;

	cout << "////////Cuanto es tu tiempo promedio en recorrer tu ruta?////////" << endl;
	cout << endl << "Introduce la distancia en kilometros de tu ruta: "; cin >> distanciaRuta;
	cout << endl << "Cuanto tiempo hiciste el Lunes?: "; cin >> tiempoMinutos[0];
	cout << "Cuanto tiempo hiciste el Miercoles?: "; cin >> tiempoMinutos[1];
	cout << "Cuanto tiempo hiciste el Viernes?: "; cin >> tiempoMinutos[2]; cout << endl;

	for (int i = 0; i < 3; i++)
	{
		suma = suma + tiempoMinutos[i];
		
	}

	promedio = suma / 3;

	int horas = promedio / 60;
	int minutos = promedio - (horas*60);
	
	cout << endl << endl << "Tu promedio obtenido de la semana es de un tiempo de " << horas << " horas y " << minutos << " minutos en total";
	cout << endl << "Total de minutos: " << suma;
	cout << endl << "Kilometros/Horas: " << distanciaRuta << "km/" << horas << "h";

	system("pause>0");
	return 0;
}