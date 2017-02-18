// Stark.h
#include "FamiliaNoble.h"
#include <iostream>
#include <string>
#include <vector>
#ifndef STARK_H
#define STARK_H

using namespace std;

class Stark{
	private:
		string jefe;
		int cantLobos;
		string emblema;
		string lema;
		vector<FamiliaNoble*> ejercitoFam;
		string guerreroValioso;
		int cantIntegrantes; 

	public: 
		// Constructor
		Stark();
	
		// Accesores
		void setJefe(string);
		string getJefe();
		void setCantLobos(int);
		int getCantLobos();
		void setEmblema(string);
		string getEmblema();
		void setLema(string);
		string getLema();
		void setEjercitoFam(FamiliaNoble*);
		FamiliaNoble* getEjercitoFam(int);
		void setGuerreroValioso(string);
		string getGuerreroValioso();
		void setCantIntegrantes(int);
		int getCantIntegrantes();

		// Destructor
		~Stark();
};

#endif
