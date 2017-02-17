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

void Lannister :: setEjercitoReal(string sejercito){
   ejercitoReal = sejercito;
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
