// 5. En una determinada gasolinera, los surtidores miden y registran en galones, pero el precio
// de la gasolina está en litros.Calcular e imprimir lo que hay que cobrarle al cliente en Soles.
// Consideraciones: Cada galón tiene 3.785 litros, y cada litro cuesta S / .15.
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{

	class Gasolinera
	{
	protected:
		double cobrar;
	public:
		Gasolinera() {}
		~Gasolinera() {}

		virtual void calcularCobrar(int &cant) = 0;
	};
	
	class Galon : public Gasolinera
	{
	private:
		int cantidad;
		double litros = 3.785;
		double precio = 15;
	public:
		Galon() : Gasolinera() {}
		~Galon() {}

		void calcularCobrar(int &cant) override
		{
			

			cout << "====================================================" << endl;
			cout << "Introduce la cantidad de galones: "; cin >> cant;
			cantidad = cant;

			cout << endl << endl;
			cobrar = (cantidad * litros) * precio;
			cout << "Total a cobrar al cliente: S/." << cobrar << " soles." << endl;
		}

		void mostrar()
		{
			cout << endl << "La cantidad selecciona es: " << cantidad << endl << "Litros por cada galon: " << litros << endl << "Precio Unitario por Gasol en Soles: " << precio << endl << endl;
			cout << "=======================================================================================" << endl;
			cout << "Dinero a cobrar al cliente es de: " << cobrar << endl;

		}
	};

	vector<Galon*> gaa;

	int cont = 0;
	char salir = ' ';

	while (salir != 27)
	{
		if (_kbhit())
		{
			salir = _getch();

			if (salir == 27) break;
		}

		Galon* gasolineria = new Galon();
		int cant = 0;
		gasolineria->calcularCobrar(cant);
		gaa.push_back(gasolineria);

		cout << "Deseas Continuar? Presiona una tecla, sino presiona ESC para salir "; salir = _getch();
		cout << endl << endl;
	}

	for (Galon* eso : gaa)
	{
		cont++;
		cout << "Entrada N-" << cont << endl;
		eso->mostrar();
		cout << endl;
	}

	for (int i = 0; i < gaa.size(); i++)
	{
		delete gaa[i];
	}
	gaa.clear(); // Opcional, limpia el vector


	system("pause");
	return 0;
}