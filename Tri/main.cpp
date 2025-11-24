#include "tri_lexico.hpp"


int main(){

    vector<string> liste = {"beber", "babar", "rabba", "barre", "arabe"};
    vector<string> sortedListe = TriLexicographique(liste, {'a','b','e','r'});

    for(int i = 0; i < sortedListe.size(); i++){
        cout << sortedListe[i] << endl;
    }

    return EXIT_SUCCESS;
}