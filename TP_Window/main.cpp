#include "naif.hpp"
#include "MorrisPrat.hpp"
#include "lectureFichier.hpp"
#include "affichageVector.hpp"
#include "KMP.hpp"

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
        return EXIT_SUCCESS;
    }
}