// Dothraki.h
#include <iostream>
#include <string>
#include <vector>
#ifndef DOTHRAKI_H
#define DOTHRAKI_H
using namespace std;

class Dothraki{
	private:
		string nombre;
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
		int ataque;
		int defensa;

	public:
		// Costructor
		Dothraki();
		
		// Accesores
		void setNombre(string);
		string getNombre();
		void setJefeBarbaro(string);
		string getJefeBarbaro();
		void setNombreCaballo(string);
		string getNombreCaballo();
		void setColorCaballo(string);
		string getColorCaballo();
		void setAtaque(int);
		int getAtaque();
		void setDefensa(int);
		int getDefensa();

		// Destructor
		~Dothraki();
};

#endif
