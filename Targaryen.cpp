#include <iostream>
#include <string>
#include <vector>
#include "Targaryen.h"
using namespace std;

Targaryen :: Targaryen() {
   cout << "Nuevo Targaryen" << endl;
}

void Targaryen :: setReina(string sreina) {
   reina = sreina;
}
string Targaryen :: getReina() {
   return reina;
}

void Targaryen :: setEmblema(string emb){
   emblema = emb;
}
string Targaryen :: getEmblema(){
   return emblema;
}

void Targaryen :: setLema(string sLema){
   lema = slema;
}
string Targaryen :: getLema(){
   return lema;
}

void Targaryen :: setCantDragones(int cant) {
   cantDragones = cant;
}
int Targaryen :: getCantDragones() {
   return cantDragones;
}

void Targaryen :: setEjercitoDothraki(string sejercito){
   ejercitoDothraki = ejercito;
}
string Targaryen :: getEjercitoDothraki(){
   return ejercitoDothraki;
}

void Targaryen :: setCantBarcos(int sCant){
   cantBarcos = sCant;
}
int Targaryen :: getCantBarcos(){
   return cantBarcos;
}
Targaryen :: ~Targaryen(){
   cout << "Liberando Memoria" << endl;
}

