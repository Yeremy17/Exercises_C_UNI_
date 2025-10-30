// 1. Determinar el área de un trapecio conociendo sus bases y su altura.

#include <iostream> 
#include <stdlib.h>
using namespace std;

int main()
{
	class Trapecio
	{
	private:
		double baseMayor, baseMenor, altura;
	public:
		Trapecio() {}
		Trapecio(double bMa, double bMe, double al) : baseMayor(bMa), baseMenor(bMe), altura(al) {}
		~Trapecio() {}

		double calcularArea(double Bma, double Bme, double Al)
		{
			double area = 0;

			area = ((Bma + Bme) / 2) * Al;
			
			return area;
		}
		
	};

	double BaseMayor = 0, BaseMenor = 0, Altura = 0;
	cout << "Calcula el area de un trapecio: " << endl;
	cout << "Introduce Base Mayor: "; cin >> BaseMayor; cout << "Introduce Base Menor: "; cin >> BaseMenor; cout << "Introduce Altura: "; cin >> Altura; cout << "\n";
	cout << "==================================================" << endl << endl;

	Trapecio* trapecio = new Trapecio();

	cout << "El area del trapecio es: " << trapecio->calcularArea(BaseMayor, BaseMenor, Altura);

	delete trapecio;


	system("pause>0");
	return 0;
}