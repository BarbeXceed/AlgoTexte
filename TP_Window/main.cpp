#include "naif.hpp"
#include "MorrisPrat.hpp"
#include "lectureFichier.hpp"
#include "affichageType.hpp"
#include "KMP.hpp"
#include "BoyerMoore.hpp"

int main(int argc, char* argv[]){
    if(argc < 3){
        cout << "Erreur : Mongolo" << endl;
        exit(EXIT_FAILURE);
    } else{

        string mot = lectureFichier(argv[1]);
        string pattern = argv[2];
        cout << AlgoNaif(mot, pattern) << endl;

        /*
        vector<int> tab = tableBords(pattern);
        coutVector(tab);
        */

        cout << algoWindow(mot, pattern, tableBords) << endl;
        cout << algoWindow(mot, pattern, tableBordKMP) << endl;
        /*
        map<char, int> retour = dernierOccur(pattern);
        coutMap(retour);
        */
       cout << boyerMoore(mot, pattern) << endl;
       
        return EXIT_SUCCESS;
    }
}