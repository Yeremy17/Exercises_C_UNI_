/*7. Escriba un programa que recomiende el número de calorías que una persona debe consumir
cada día. Las calorías son unidades de energía que se encuentran en todos los alimentos. Base
su recomendación sobre el peso de la persona y si la persona tiene un estilo de vida activo o
sedentario. El usuario ingresará el carácter "A" si tiene estilo de vida activo o "S" si tiene estilo
de vida sedentario.
•Si la persona es sedentaria, el factor de actividad de esa persona es 13.
•Si la persona es activa, el factor de la actividad de esa persona es de 15.
Para obtener el número recomendado de calorías multiplique el factor de actividad por el peso
de la persona.*/#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	char respuesta;
	float peso;
	float recomendado;
	char salir;
	while(salir != 27)
	{
	do
	{
		cout << "====================================================================" << endl;
		cout << "Introduce tu Caracter (A: activo, S: sedentario): "; cin >> respuesta;
		cout << "Introduce tu Peso en kg: "; cin >> peso;
	} while (respuesta != 'A' && respuesta != 'S');

	switch (respuesta)
	{
	case 'A':
		recomendado = 15 * peso;
		cout << endl << endl << "Recomendacion de calorias: " << recomendado << " calorias" << endl;
		break;
	case 'S':
		recomendado = 13 * peso;
		cout << endl << endl << "Recomendacion de calorias: " << recomendado << " calorias" << endl;
		break;
	default:
		break;
	}
	cout << endl << "Si deseas continuar presiona cualquier tecla, Sino presiona la tecla ESC .... "; salir = _getch();

	cout << endl << endl;
	}


	system("pause>nul");
	return 0;
}