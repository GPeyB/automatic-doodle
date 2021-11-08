//
// Created by gapeb on 11/8/2021.
//

#ifndef PARCIAL_2_ANIMAL_H
#define PARCIAL_2_ANIMAL_H
#include <string>
using namespace std;

class Animal{
private:

    Animal(string Nombre,float peso, int numeroJaula, int tipo);

    //Variables de la clase
    string Nombre;
    float Peso;
    int tipo;
    int numeroJaula;


public:

    //Métodos
    float promAniTipo ();
    int numeroMismoTipo();
    int cuentaTotal();
    string animalesConJaulas();

    //Métodos set y get

    void setName(string _name);
    void setWeight(float _weight);
    void setJail(int _jail);
    void setType(bool _type);

    string getName();
    float getWeight();
    int getJail();
    int getType();


};


#endif //PARCIAL_2_ANIMAL_H