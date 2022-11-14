#include<iostream>
#include<iomanip>
#include"ComicionVentas.h"

using namespace std;

CalculadoraComicion::CalculadoraComicion(string nombre) 
{
	establecerNombreCurso(nombre);
}

void CalculadoraComicion::establecerNombreCurso(string nombre)
{
	if (nombre.size()<=25)
	{
		nombreCurso = nombre;
	}
	else
	{
		nombreCurso = nombre.substr(0, 25);
		cerr << "El nombre \"" << nombre << "\" Excede la longitud maxima de25 caracteres.\n"
			<< "se limito nombreCurso a los primeros 25 caracteres.\n" << endl;

	}
}

string CalculadoraComicion::obtenerNombreCurso()const
{
	return nombreCurso;
}

void CalculadoraComicion::mostrarMensaje()const
{
	cout << "Bienvenido a C++\n" << obtenerNombreCurso() << "!\n" << endl;
}

void CalculadoraComicion::ventasDolares()const
{
	
	unsigned int ventas=0;
	const int semana = 200;
	
	unsigned int contadorVeces=0;

	cout << "Introduzca las ventas en dolares (-1 para salir):" << endl;
	cin >> ventas;
	while (ventas!=-1)
	{
		double totalComicion =static_cast <double> (ventas)* 0.09 + semana;
		contadorVeces = contadorVeces + 1;

		cout << setprecision(2) << fixed;
		cout << "El salario es:  $" << totalComicion << endl;

		

		cout << "Introduzca las ventas en dolares (-1 para salir):" << endl;
		cin >> ventas;
		
	}

	if (ventas!=0)
	{
		cout << "Usted introdujo:"<< contadorVeces <<" veces"<< endl;
	} 
	else
	{
		cout << "NO SE INTRODUJO DATOS:" << endl;
	}

	
	
}