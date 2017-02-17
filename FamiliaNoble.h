// FamiliaNoble.h
#include <iostream>
#include <string>
#include <vector>
#ifndef FAMILIANOBLE_H
#define FAMILIANOBLE_H

class FamiliaNoble{
	private:
		string nombre;
		string simbolo;
		srting lema;			
		int canPersonas;
		int ataque;
		int defensa;

	public:
		// Constructor
		FamiliaNoble();
		
		// Accesores
		void setNombre(string);
		string setNombre();
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
