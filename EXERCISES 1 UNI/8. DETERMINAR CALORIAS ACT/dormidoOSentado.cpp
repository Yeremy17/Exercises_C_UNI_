/*8. Una persona enferma, que pesa 70 kg, solo puede realizar dos actividades, dormir o estar
sentado en reposo. Determinar la cantidad de calorías que consume su cuerpo durante todo
el tiempo que realice una misma actividad. Considerar que, estando dormido consume 1.08
calorías por minuto y estando sentado consume 1.66 calorías por minuto.
*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int actividad;
	int tiempo;
	double calorias;
	char salir = ' ';
	double horas;
	while (salir != 27)
	{
		do
		{
			cout << "====================================================================" << endl;
			cout << "Introduce tu Actividad (1: dormir, 2: sentado): "; cin >> actividad;
			cout << "Introduce el Tiempo que Realizaste: "; cin >> tiempo;
		} while (actividad != 1 && actividad != 2);

		switch (actividad)
		{
		case 1:
			calorias = 1.08 * double(tiempo);
			horas = double(tiempo) / 60.0;
			cout << endl << endl << "La cantidad de calorias que se consume es de: " <<calorias << " calorias en "<< horas << " horas" << endl;
			break;
		case 2:
			calorias = 1.66 * double(tiempo);
			horas = double(tiempo) / 60.0;
			cout << endl << endl << "La cantidad de calorias que se consume es de: " << calorias << " calorias en " << horas << " horas" << endl;
			break;
		default:
			break;
		}
		cout << endl << "Si deseas continuar presiona cualquier tecla, Sino presiona la tecla ESC .... "; salir = _getch();

		cout << endl << endl;
	}

	system("pause");
	return 0;

}