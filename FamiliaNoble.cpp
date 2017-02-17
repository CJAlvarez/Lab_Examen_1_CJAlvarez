// FamiliaNoble.cpp
#include <iostream>
#include <string>
#include <vector>
#include "FamiliaNoble.h"
using namespace std;

FamiliaNoble :: FamiliaNoble(){
	cout << "Nueva Familia Noble" << endl;
}

void FamiliaNoble :: setNombre(string sname){
	nombre = sname;
}
string FamiliaNoble :: getNombre(){
	return nombre;
}

void FamiliaNoble :: setSimbolo(string ssimbolo){
	simbolo = ssimbolo;
}
string FamiliaNoble :: getSimbolo(){
	return simbolo;
}

void FamiliaNoble :: setLema(string slema){
	lema = slema;
}
string FamiliaNoble :: getLema(){
	return lema;
}

void FamiliaNoble :: setCantPersonas(int scant){
	cantPersonas = scant;
}
int FamiliaNoble :: getCantPersonas(){
	return cantPersonas;
}

void FamiliaNoble :: setAtaque(int sataque){
	ataque = sataque;
}
int FamiliaNoble :: getAtaque(){
	return ataque;
}

void FamiliaNoble :: setDefensa(int sdefensa){
	defensa = sdefensa;
}
int FamiliaNoble :: getDefensa(){
	return defensa;
}

FamiliaNoble :: ~FamiliaNoble(){
	cout << "Liberando Memoria" << endl;
}
