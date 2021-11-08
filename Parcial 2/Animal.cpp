//
// Created by gapeb on 11/8/2021.
//

#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string Nombre,float peso, int numeroJaula, int tipo){
    void setName(string _name);
    void setWeight(float _weight);
    void setJail(int _Jail);
    void setType(int _type);
}

void Animal::setName(string _name) {
    Nombre = _name;
}
void Animal::setWeight(float _weight) {
    Peso = _weight;
}

void Animal::setJail(int _jail) {
    numeroJaula = _jail;
}

void Animal::setType(bool _type) {
    tipo = _type;
}

string Animal::getName() {
    return Nombre;
}

float Animal::getWeight() {
    return Peso;
}

int Animal::getJail() {
    return numeroJaula;
}

int Animal::getType() {
    return tipo;
}

float Animal::promAniTipo() {

}
