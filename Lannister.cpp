// Lannister.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Lannister.h"

Lannister :: Lannister(){
//	cout << "Nuevo Lannister" << endl;
}

void Lannister :: setJefe(string sJefe) {
   jefe = sJefe;
}
string Lannister :: getJefe() {
   return jefe;
}

void Lannister :: setEmblema(string emb){
   emblema = emb;
}
string Lannister :: getEmblema(){
   return emblema;
}

void Lannister :: setLema(string slema){
   lema = slema;
}
string Lannister :: getLema(){
   return lema;
}

void Lannister :: setEjercitoReal(GuardiaReal* guardia){
   ejercitoReal.push_back(guardia);
}
GuardiaReal* Lannister :: getEjercitoReal(int i){
   return ejercitoReal[i];
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
double Lannister :: getFuerzaMonatana(){
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
