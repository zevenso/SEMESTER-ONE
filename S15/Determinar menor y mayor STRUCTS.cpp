#include "iostream"
#include "conio.h"

using namespace std;
struct Empleado{

	char nombre [30];
	char sexo;
	int sueldo;

} empleados[200];
void Leer_Datos_Empleados(int n) {
	for (int i = 0; i < n; ++i) {
		cout << endl << "Datos del empleado " << i + 1 << " :" << endl;
		cout <<"Nombre: ";
		cin >> empleados[i].nombre;
		cout << "Sexo (M/F): ";
		cin >> empleados[i].sexo;
		cout <<  "Sueldo: ";
		cin >> empleados[i].sueldo;
	}

}

void Determinar_Mayor_Sueldo(int n) {

	int mayor = 0;
	for (int i = 0; i < n; ++i) {
	

		if (empleados[i].sueldo > empleados[mayor].sueldo) {
			mayor = i;
		}
	}
	cout << endl << endl << "Empleado con MAYOR salario:";
	cout << endl << "Nombre: " << empleados[mayor].nombre ;
	cout << endl << "Sexo: " << empleados[mayor].sexo;
	cout << endl << "Sueldo: " << empleados[mayor].sueldo ;

}

void Determinar_Menor_Sueldo(int n) {

	int menor = 0;
	for (int i = 0; i < n; ++i) {


		if (empleados[i].sueldo < empleados[menor].sueldo) {
			menor = i;
		}
	}
	cout << endl << endl << "Empleado con MENOR salario:";
	cout << endl << "Nombre: " << empleados[menor].nombre;
	cout << endl << "Sexo: " << empleados[menor].sexo;
	cout << endl << "Sueldo: " << empleados[menor].sueldo;

}
int main() {

	int n;
	do {
		cout << "Ingrese la cantidad de trabajadores : "; cin >> n;
	
	} while (n < 0);

	Leer_Datos_Empleados(n);
	Determinar_Mayor_Sueldo(n);
	Determinar_Menor_Sueldo(n);

	_getch();
	return 0;
}