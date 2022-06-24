/*
Ejercicio 5: Escriba un fragmento de programa que intercambie
los valores de dos variables.
*/
#include <iostream>
using namespace std;

int main()
{
	double x, y, aux;

	cout << "Introduzca un numero: " << endl; cin >> x;
	cout << "Introduzca otro numero: \n", cin >> y;

	aux = x;
	x = y;
	y = aux;

	cout << "El nuevo valor de x es: " << x << endl;
	cout << "El nuevo valor de y es: " << y << endl;

	return 0;
}