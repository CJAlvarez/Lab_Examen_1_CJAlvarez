// GuardiaReal.h
#include <iostream>
#include <string>
#include <vector>
#ifndef GUARDIAREAL_H
#define GUARDIAREAL_H
using namespace std;

class GuardiaReal{
	private:
		string nombre;
		int edad;
		string tipoSoldado;
		int ataque;
		int defensa;

	public:
		// Constructor
		GuardiaReal();

		// Accesores
		void setNombre(string); 	
		string getNombre();
		void setEdad(int);
		int getEdad();
		void setTipoSoldado(string);
		string getTipoSoldado();
		void setAtaque(int);
		int getAtaque();
		void setDefensa(int);
		int getDefensa();

 		// Destructor
		~GuardiaReal();
};

#endif
