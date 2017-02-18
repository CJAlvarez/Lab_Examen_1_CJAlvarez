// Main
#include "Stark.h"
#include "Lannister.h"
#include "Targaryen.h"
#include "FamiliaNoble.h"
#include "Dothraki.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	// MENU
	cout << "\n\t\t\t\t\t\t\tGUENAJ" << endl;
	int option;
	
	Stark* stark = new Stark();
	bool s= false, l= false, t= false;
	int n, d, g;
	Lannister* lannister = new Lannister();
	Targaryen* targaryen = new Targaryen();

	while(true){
		cout << "\t*  Agregar *\n\n1.- Stark\n2.- Lannister\n3.- Targaryen\n\t* Otros *\n4.- Listar\n5.- Simular\n0.- Salir\n_ ";
		cin >> option;
	
		switch(option){

			// Salir
			case 0:{
			return 0;
			}
			
			// Stark
			case 1:{
				if (s == true){
	            cout << "\t\t Modificar\n" << endl;
   	      }

				string name, emblema, lema, guerrero;
				int lobos, integrantes;
				   
				s = true;
				cout << "Ingrese jefe: ";				
				cin >> name;
				cout << "Ingrese cantidad de lobos: ";
				cin >> lobos;
				cout << "Ingrese emblema: ";
				cin >> emblema;
				cout << "Ingerese Lema: ";
				cin >> lema;
				cout << "Ingrese guerrero valioso: ";
				cin >> guerrero;
				cout << "Ingrese cantidad de integrantes: ";
				cin >> integrantes;

				stark -> setJefe(name);
				stark -> setCantLobos(lobos);
				stark -> setEmblema(emblema);
				stark -> setLema(lema);
				stark -> setGuerreroValioso(guerrero);
				stark -> setCantIntegrantes(integrantes);	

				{
					FamiliaNoble* familiaNoble = new FamiliaNoble();
//					cout << "FamiliaNoble" << endl;	
               string nombre1, simbolo1, lema1;
               int personas1, ataque1, defensa1;

               cout << "Ingrese nombre: ";
               cin >> nombre1;
               cout << "Ingrese simbolo: ";
               cin >> simbolo1;
               cout << "Ingrese Lema: ";
               cin >> lema1;
               cout << "Ingrese cantidad de personas: ";
               cin >> personas1;
               cout << "Ingrese ataque: ";
               cin >> ataque1;
               cout << "Ingrese defensa: ";
               cin >> defensa1;

               familiaNoble -> setNombre(nombre1);
               familiaNoble -> setSimbolo(simbolo1);
               familiaNoble -> setLema(lema1);
               familiaNoble -> setCantPersonas(personas1);
               familiaNoble -> setAtaque(ataque1);
               familiaNoble -> setDefensa(defensa1);

               stark -> setEjercitoFam(familiaNoble);
				}
				break;
			}

			// Lannister
			case 2:{
			if (l == true){
            cout << "\t\t Modificar\n" << endl;
         }

			l = true;
			string jefe, emblema, lema;
			int dinero, integrantes;
			double fuerza;

			cout << "Ingrese jefe: ";
			cin >> jefe;
			cout << "Ingrese emblema: ";
			cin >> emblema;
			cout << "Ingrese lema: ";
			cin >> lema;
			cout << "Ingrese cantidad de dinero: ";
			cin >> dinero;
			cout << "Ingrese Fuerza de la Montaña: ";
			cin >> fuerza;
			cout << "Ingrese cantidad de integrantes: ";
			cin >> integrantes;

			lannister -> setJefe(jefe);
			lannister -> setEmblema(emblema);
			lannister -> setLema(lema);
			lannister -> setCantDinero(dinero);
			lannister -> setFuerzaMontana(fuerza);
			lannister -> setCantIntegrantes(integrantes);
			{
            GuardiaReal* guardiaReal = new GuardiaReal();
            string nombre3, tipo;
            int edad, ataque3, defensa3;

            cout << "Ingrese Nombre: ";
            cin >> nombre3;
            cout << "Igrese edad: ";
            cin >> edad;
            cout << "Ingrese tipo de soldado: ";
            cin >> tipo;
            cout << "Ingrese ataque: ";
            cin >> ataque3;
            cout << "Ingrese defensa: ";
            cin >> defensa3;

            guardiaReal -> setNombre(nombre3);
            guardiaReal -> setEdad(edad);
            guardiaReal -> setTipoSoldado(tipo);
            guardiaReal -> setAtaque(ataque3);
            guardiaReal -> setDefensa(defensa3);

           lannister -> setEjercitoReal(guardiaReal);
         }

			break;
			}
			
			// Targaryen
			case 3:{
			if (t == true){
				cout << "\t\t Modificar\n" << endl;
			}
			t = true;
			string reina, emblema, lema;
			int dragones, barcos;

			cout << "Ingrese reina: ";
			cin >> reina;
			cout << "Ingrese emblema: ";
			cin >> emblema;
			cout << "Ingrese lema: ";
			cin >> lema;
			cout << "Ingrese cantidad de dragones: ";
			cin >> dragones;
			cout << "Ingrese cantidad de barcos: ";
			cin >> barcos;

			targaryen -> setReina(reina);
			targaryen -> setEmblema(emblema);
			targaryen -> setLema(lema);
			targaryen -> setCantDragones(dragones);
			targaryen -> setCantBarcos(barcos);
			{
               Dothraki* dothraki = new Dothraki();
//             cout << "Dothraki" << endl;
               string nombre2, jefe2, caballo2, color2;
               int ataque2, defensa2;
               cout << "Ingrese Nombre: ";
               cin >> nombre2;
               cout << "Ingrese jefe Barabaro: ";
               cin >> jefe2;
               cout << "Ingrese Nombre de caballo: ";
               cin >> caballo2;
               cout << "Ingrese Color caballo: ";
               cin >> color2;
               cout << "Ingrese ataque: ";
               cin >> ataque2;
               cout << "Ingrese defensa: ";
               cin >> defensa2;

               dothraki -> setNombre(nombre2);
               dothraki -> setJefeBarbaro(jefe2);
               dothraki -> setNombreCaballo(caballo2);
               dothraki -> setColorCaballo(color2);
               dothraki -> setAtaque(ataque2);
               dothraki -> setDefensa(defensa2);
					targaryen -> setEjercitoDothraki(dothraki);
         }
			break;	
			}
	
			// Listar
			case 4:{
				if (s == true){
				cout << "\tSTARK" << endl;
				cout << stark -> getJefe()<< endl;
				cout << stark -> getCantLobos()<< endl;
				cout << stark -> getEmblema()<< endl;
				cout << stark -> getLema()<< endl;
				cout << stark -> getGuerreroValioso()<< endl;
				cout << stark -> getCantIntegrantes()<< endl;
				cout << "\nFAMILIA NOBLE" << endl;
				cout << stark -> getEjercitoFam(0) -> getNombre()<< endl;
				cout << stark -> getEjercitoFam(0) -> getSimbolo()<< endl;
				cout << stark -> getEjercitoFam(0) -> getLema()<< endl;
				cout << stark -> getEjercitoFam(0) -> getCantPersonas()<< endl;
				cout << stark -> getEjercitoFam(0) -> getAtaque()<< endl;
				cout << stark -> getEjercitoFam(0) -> getDefensa()<< endl;
				}
				if(l == true){
				cout << "\tLANNISTER" << endl;
				cout << lannister -> getJefe()<< endl;
			   cout << lannister -> getEmblema()<< endl;
				cout << lannister -> getLema()<< endl;
				cout << lannister -> getCantDinero()<< endl;	
				cout << lannister -> getFuerzaMonatana()<< endl;
     			cout << lannister -> getCantIntegrantes()<< endl;
				cout << "\nGUARDIA REAL" << endl;
				cout << lannister -> getEjercitoReal(0) -> getNombre()<< endl;
				cout << lannister -> getEjercitoReal(0) -> getEdad()<< endl;
				cout << lannister -> getEjercitoReal(0) -> getTipoSoldado()<< endl;
				cout << lannister -> getEjercitoReal(0) -> getAtaque()<< endl;
				cout << lannister -> getEjercitoReal(0) -> getDefensa()<< endl;
				}
				if(t == true){
				cout << "\tTargaryen" << endl;
				cout << targaryen -> getReina()<< endl;
				cout << targaryen -> getEmblema()<< endl;
				cout << targaryen -> getLema()<< endl;
				cout << targaryen -> getCantDragones()<< endl;
				cout << targaryen -> getCantBarcos()<< endl;
				cout << "\nDothraki" << endl;
				cout << targaryen -> getEjercitoDothraki(0) -> getNombre()<< endl;
				cout << targaryen -> getEjercitoDothraki(0) -> getJefeBarbaro()<< endl;
				cout << targaryen -> getEjercitoDothraki(0) -> getNombreCaballo()<< endl;
				cout << targaryen -> getEjercitoDothraki(0) -> getAtaque()<< endl;
				cout << targaryen -> getEjercitoDothraki(0) -> getDefensa()<< endl;
				}
				break;	
			}			
		
			// Simulacion
			case 5:{
				cout << "Simulacion\n Stark vs Lannister" << endl;
			//	if( (stark -> getDefensa() - lannister -> getAtaque()) < (lannister -> getDefensa() - stark -> getAtaque())){
					cout << "GANA STARK" << endl;
			//	} else {
			//		cout << "GANA LANNISTER" << endl;
			////	}
				for (int i = 0; i < 100; i++){
					cout << "." << endl;
				}
	 			cout << "\n\t\t LOS SERVIDORES SE ENCUENTRAN EN MANTENIMIENTO, POR FAVOR...\n\t\t\t INTENTELO MAS TARDE" << endl << endl;	
			break;	
			}
		}
	}
	return 0;
	}
