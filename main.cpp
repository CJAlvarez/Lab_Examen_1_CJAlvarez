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
	
	Stark stark;
	Lannister lannister;
	Targaryen targaryen;

	while(true){
		cout << "\t*  Agregar *\n\n1.- Stark\n2.- Lannister\n3.- Targaryen\n4.- Pequeña Familia Noble\n5.- Dothraki\n6.- Guardia Real\n\n\t* Otros *\n7.- Listar\n8.- Eliminar\n0.-Salir\n_ ";
		cin >> option;
	
		switch(option){

			// Salir
			case 0:{
			return 0;
			}
			
			// Stark
			case 1:{
				
				break;
			}
		}
	}
	return 0;
	}
