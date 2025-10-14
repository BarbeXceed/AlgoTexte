#include "etat.hpp"

Etat::Etat(int idInput, string nomInput){
    this->id = idInput;
    this->nom = nomInput;
    this->etat_final = false;
    this->etat_initial = false;
}

int Etat::get_id(){
    return this->id;
}

bool Etat::est_final(){
    return this->etat_final;
}

bool Etat::est_initial(){
    return this->etat_initial;
}

void Etat::set_final(bool expression){
    this->etat_final = expression;
}

void Etat::set_initial(bool expression){
    this->etat_initial = expression;
}