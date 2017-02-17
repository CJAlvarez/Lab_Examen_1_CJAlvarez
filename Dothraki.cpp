// Dothraki.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"
//using namespace std;

Dothraki :: Dothraki (){
	cout << "Nuevo Dothraki" << endl;
}

void Dothraki :: setNombre( string n){
	nombre = n;
}
void Dothraki :: setJefeBarbaro(string b){
	jefeBarbaro = b;
}
void Dothraki :: setNombreCaballo(string c){
	nombreCaballo = c;
}
void Dothraki :: setColorCaballo(string cc){
	colorCaballo = cc;
}
void Dothraki :: setAtaque(int a){
	ataque = a;
}
void Dothraki :: setDefensa (int d){
	defensa = d;
}

string Dothraki :: getNombre(){
   return nombre;
}
string Dothraki :: getJefeBarbaro(){
   return jefeBarbaro;
}
string Dothraki :: getNombreCaballo(){
   return nombreCaballo;
} 
string Dothraki :: getColorCaballo(){
   return colorCaballo;
} 
int Dothraki :: getAtaque(){
	return ataque;
} 
int Dothraki :: getDefensa (){
   return defensa;
}

Dothraki :: ~Dothraki(){
	cout << "liberando Memoria" << endl;
}
