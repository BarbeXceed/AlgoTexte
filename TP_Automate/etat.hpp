#pragma once

#include <iostream>
#include <string>

using namespace std;

class Etat{
    public:
        int id;
        string nom;
        bool etat_final;
        bool etat_initial;

        Etat(int idInput, string nomInput);
        int get_id();
        bool est_final();
        bool est_initial();
        void set_final(bool expression);
        void set_initial(bool expression);
};