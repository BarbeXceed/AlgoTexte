#include "automate.hpp"

int main(){
    
    Automate automate(2);
    automate.ajouter_etat("a");
    automate.ajouter_etat("ab");
    automate.ajouter_etat("aba");
    automate.ajouter_etat("abab");
    automate.ajouter_etat("ababa");

    automate.ajouter_transition("a", "a", "ab");




    return EXIT_SUCCESS;
}