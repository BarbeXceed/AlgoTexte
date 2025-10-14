#pragma once

#include <iostream>
#include <vector>
#include <map>

#include "etat.hpp"

using namespace std;

class Automate {
    public:
        int taille_alphabet;
        map<string, int> table_correspondance;  //IMPLEMENTER DANS LE RESTE
        vector<Etat> table_etat;
        vector<vector<string>> table_transition;
        Etat etat_debut;

        Automate(int tailleInput);
        void ajouter_etat(string nomInput);
        void ajouter_transition(string debut, string transition, string arrivee);
        void etat_final(Etat x);
        void etat_initial(Etat x);
        bool est_final(Etat x);
        Etat initial();
        bool lire_mot();

};