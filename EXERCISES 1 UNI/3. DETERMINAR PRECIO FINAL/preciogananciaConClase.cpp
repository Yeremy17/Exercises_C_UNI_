// 3. Una señora de una tienda compra un artículo a 
// determinado precio, y lo vende con una
// ganancia del 18 %, determinar el precio final de venta.

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	class Articulo
	{
	protected:
		string nombre;
		double precio;
	public:
		Articulo() {}
		Articulo(string n, double p) : nombre(n), precio(p) {}
		~Articulo() {}

		string getNombre()
		{
			return nombre;
		}

		void setNombre(string n)
		{
			nombre = n;
		}

		double getPrecio()
		{
			return precio;
		}

		void setPrecio(double p)
		{
			precio = p;
		}


	};

	class Precios : public Articulo
	{
	public:
		Precios() : Articulo() {}
		~Precios() {}

		void preguntar()
		{
			cout << "Introduce el nombre de tu articulo: "; cin >> nombre;
			cout << "Introduce el precio de tu articulo: "; cin >> precio;
			cout << "===============================================================================================================" << endl << endl; 
		}
		
		double calcular()
		{
			precioFinal = (precio * 0.18) + precio;

			return precioFinal;
		}

		void mostrarPrecioFinal()
		{
			cout << "El precio final con el que venderas el articulo, con una ganancia del 18% es de: S/." << precioFinal << " Soles";
		}

		double getPrecioFinal()
		{
			return precioFinal;
		}

	private:
		double precioFinal = 0;

	};

	vector<Precios*> vectorPrecio;
	
	char salir = ' ';
	
	while (salir != 27)
	{
		if (_kbhit())
		{
			salir = _getch();  // guarda la tecla presionada
			if (salir == 27) break;  // si es ESC, sale inmediatamente
		}
		Precios* precio = new Precios();
		precio->preguntar();
		precio->calcular();
		precio->mostrarPrecioFinal();
		vectorPrecio.push_back(precio);
		cout << endl << endl;
		cout << "\nPresiona cualquier tecla para continuar o ESC para salir..." << endl;

		// Espera una tecla y la guarda en 'salir'
		salir = _getch();

		cout << endl;
		cout << endl;


	}

	cout << "===============Productos y Precios Ingresados================" << endl; 	int contador = 0;
	for (Precios* x : vectorPrecio)
	{
		contador++;
		cout << endl << "DATO " << contador << ": " << endl;
		cout << "Nombre: " << x->getNombre() << endl;
		cout << "Precio: " << x->getPrecio() << endl;
		cout << "Precio de Venta Final: " << x->getPrecioFinal() << endl;
		cout << endl;
	}


	for (int i = 0; i < vectorPrecio.size(); i++) {
		delete vectorPrecio[i];
	}
	vectorPrecio.clear();

	cout << "\nPrograma finalizado correctamente.\n";

	system("pause>NUL");
	return 0;
}