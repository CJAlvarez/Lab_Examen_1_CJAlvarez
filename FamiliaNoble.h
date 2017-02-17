// FamiliaNoble.h
#include <iostream>
#include <string>
#include <vector>
#ifndef FAMILIANOBLE_H
#define FAMILIANOBLE_H
using namespace std;


class FamiliaNoble{
	private:
		string nombre;
		string simbolo;
		string lema;			
		int cantPersonas;
		int ataque;
		int defensa;

	public:
		// Constructor
		FamiliaNoble();
		
		// Accesores
		void setNombre(string);
		string getNombre();
		void setSimbolo(string);
		string getSimbolo();
		void setLema(string);
		string getLema();
		void setCantPersonas(int);		
		int getCantPersonas();
		void setAtaque(int);	
		int getAtaque();
		void setDefensa(int);
		int getDefensa();

		// Destructor
		~FamiliaNoble();
};

#endif
