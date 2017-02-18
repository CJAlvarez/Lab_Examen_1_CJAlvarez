// Lannister.h
#include <iostream>
#include <string>
#include <vector>
#include "GuardiaReal.h"
#ifndef LANNISTER_N
#define LANNISTER_H
using namespace std;


class Lannister{
   private:
		string jefe;
		string emblema;
		string lema;
		vector <GuardiaReal*> ejercitoReal;
		int cantDinero;
		double fuerzaMontana;
		int cantIntegrantes;

	public:
		// Constructor
		Lannister();
		
		// Accesores
		void setJefe(string);
		string getJefe();
		void setEmblema(string);
		string getEmblema();
		void setLema(string);
		string getLema();
		void setEjercitoReal(GuardiaReal*);
		GuardiaReal* getEjercitoReal(int);
		void setCantDinero(int);	
		int getCantDinero();
		void setFuerzaMontana(double);
		double getFuerzaMonatana();
		void setCantIntegrantes(int);
		int getCantIntegrantes();

		// Destructor
		~Lannister();

};

#endif
         
