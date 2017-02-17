// Lannister.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Lannister.h"
using namespace std;

Lannister :: Lannister(){
	cout << "Nuevo Lannister" << endl;
}

void Lannister :: setJefe(string sJefe) {
   jefe = sJefe;
}
string Lannister :: getJef() {
   return jefe;
}

void Lannister Stark :: setEmblema(string emb){
   emblema = emb;
}
string Lannister :: getEmblema(){
   return emblema;
}

void Lannister :: setLema(string sLema){
   lema = slema;
}
string Lannister :: getLema(){
   return lema;
}

void Lannister :: setEjercitoReal(string sejercito){
   ejercitoReal = ejercito;
}
string Lannister :: getEjercitoReal(){
   return ejercitoReal;
}

void Lannister :: setCantDinero(int scant){
   cantDinero = scant;
}
int Lannister :: getCantDinero(){
   return cantDinero;
}

void Lannister :: setFuerzaMontana(double fuerza){
   fuerzaMontana = fuerza;
}  
int Lannister :: getFuerzaMonatana(){
   return fuerzaMontana;
}

void Lannister :: setCantIntegrantes(int sCant){
   cantIntegrantes = sCant;
}
int Lannister :: getCantIntegrantes(){
   return cantIntegrantes;
}

Lannister :: ~Lannister (){
	cout << "Liberando Memoria" << endl;
}
