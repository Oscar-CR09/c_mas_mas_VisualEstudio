#pragma once
#include<string>

class CalculadoraComicion
{
public:
	explicit CalculadoraComicion(std::string);
	void ventasDolares()const;

	void establecerNombreCurso(std :: string);
	std::string obtenerNombreCurso()const;
	void mostrarMensaje()const;

private:

	std::string nombreCurso;

};