// Stark.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Stark.h"
//using namespace std;

Stark :: Stark() {
//	cout << "Nuevo Stark" << endl;
}

void Stark :: setJefe(string sJefe) {
	jefe = sJefe;	
}
string Stark :: getJefe() {
	return jefe;
}

void Stark :: setCantLobos(int cant) {
	cantLobos = cant;
}
int Stark :: getCantLobos() {
	return cantLobos;
}

void Stark :: setEmblema(string emb){
	emblema = emb;
}
string Stark :: getEmblema(){
	return emblema;
}

void Stark :: setLema(string slema){
	lema = slema;
}
string Stark :: getLema(){
	return lema;
}

void Stark :: setEjercitoFam(FamiliaNoble* fam){
	ejercitoFam.push_back(fam);
}
FamiliaNoble* Stark :: getEjercitoFam(int posicion){
	return ejercitoFam[posicion];
}

void Stark :: setGuerreroValioso(string sGuerrero){
	guerreroValioso = sGuerrero;
}
string Stark :: getGuerreroValioso(){
	return guerreroValioso;
}

void Stark :: setCantIntegrantes(int sCant){
	cantIntegrantes = sCant;
}
int Stark :: getCantIntegrantes(){
	return cantIntegrantes;
}
Stark :: ~Stark(){
	cout << "Liberando Memoria" << endl;
}
