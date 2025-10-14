#include "automate.hpp"

Automate::Automate(int tailleInput){
    this->taille_alphabet = tailleInput;
    this->etat_debut = Etat(-1, "VOID");
}

void Automate::ajouter_etat(string nomInput){
    int i = table_etat.size();
    table_correspondance[nomInput] = i;
    table_etat.push_back(Etat(i,nomInput));
}

void Automate::ajouter_transition(string input, string transition, string arrivee){

}

void Automate::etat_final(Etat x){
    x.set_final(true);
}

void Automate::etat_initial(Etat x){
    x.set_initial(true);
}

bool Automate::est_final(Etat x){
    return x.est_final();
}

Etat Automate::initial(){
    return this->etat_debut;
}