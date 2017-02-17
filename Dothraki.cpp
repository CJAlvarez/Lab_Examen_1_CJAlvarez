// Dothraki.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"
using namespace std;

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

string Dothraki :: setNombre(){
   return nombre;
}
string Dothraki :: setJefeBarbaro(){
   return jefeBarbaro;
}
string Dothraki :: setNombreCaballo(){
   return nombreCaballo;
} 
string Dothraki :: setColorCaballo(){
   return colorCaballo;
} 
int Dothraki :: setAtaque(){
	return ataque;
} 
int Dothraki :: setDefensa (){
   return defensa;
}

Dothraki :: ~Dothraki(){
	cout << "liberando Memoria" << endl;
}
