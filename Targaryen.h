// Targaryen.h
#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"
#ifndef TARGARYEN_N
#define TARGARYEN_H
using namespace std;


class Targaryen{
   private:
		string reina;
		string emblema;
		string lema;
		int cantDragones;
		vector <Dothraki*> ejercitoDothraki;
		int cantBarcos;

   public:
		// Constructor
		Targaryen();

		// Accesores
		void setReina(string);
		string getReina();
		void setEmblema(string);
		string getEmblema();
		void setLema(string);
		string getLema();
		void setCantDragones(int);
		int getCantDragones();
		void setEjercitoDothraki(Dothraki*);
		Dothraki* getEjercitoDothraki(int);
		void setCantBarcos(int);
		int getCantBarcos();
		
		// Destructor
		~Targaryen();
};

#endif
