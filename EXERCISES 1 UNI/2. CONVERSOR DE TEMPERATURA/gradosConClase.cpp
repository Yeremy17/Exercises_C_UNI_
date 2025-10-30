// 2.  Convertir grados centígrados a grados farenheit a partir de la siguiente fórmula:
// GradosFar = 1.8 * GradosCent + 32

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	class ConversorDeGrados
	{
	public:
		ConversorDeGrados() {}
		~ConversorDeGrados() {}

	

		void pedirCentigrados()
		{
			cout << "Introduce la cantidad de grados centigrados a convertir: "; cin >> gradosCent;
			cout << "=================================================================" << endl << endl;
		}

		double convertirGrados()
		{
			gradosFar = 1.8 * gradosCent + 32;
			return gradosFar;
		}

		void mostrarGrados()
		{
			gradosFar = convertirGrados();
			cout << "Su resultado de grados centigrados a grados farenheit es de: " << gradosFar  << "°F\\n" << endl << "Felicitaciones !!!!!!!";
		}

	private:
		double gradosFar, gradosCent;
	};

	ConversorDeGrados* grados = new ConversorDeGrados();

	cout << "Calcula grados centigrados a grados farenheit: " << endl;

	grados->pedirCentigrados();
	grados->mostrarGrados();
	
	delete grados;

	system("pause>NUL");
	return 0;


}
