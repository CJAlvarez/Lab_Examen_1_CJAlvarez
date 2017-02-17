// GuardiaReal.cpp
#include <iostream>
#include <string>
#include <vector>
#include "GuardiaReal.h"
//using namespace std;

GuardiaReal :: GuardiaReal(){
	cout << "Nueva Guardia Real" << endl;
}

void GuardiaReal :: setNombre (string n){
	nombre = n;
}
void GuardiaReal :: setEdad (int e ){
	edad = e;
}
void GuardiaReal :: setTipoSoldado (string s ){
	tipoSoldado = s;
}
void GuardiaReal :: setAtaque (int a ){
	ataque = a;
}
void GuardiaReal :: setDefensa (int d ){
	defensa = d;
}

string GuardiaReal :: getNombre (){
   return nombre;
} 
int GuardiaReal :: getEdad (){
   return edad;
}
string GuardiaReal :: getTipoSoldado (){
  return  tipoSoldado;
}
int  GuardiaReal :: getAtaque (){
   return ataque;
}
int GuardiaReal :: getDefensa (){
   return defensa;
}

GuardiaReal :: ~GuardiaReal(){
	cout << "Liberando Memoria" << endl;
}
