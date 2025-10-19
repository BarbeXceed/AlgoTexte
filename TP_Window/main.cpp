#include "naif.hpp"
#include "MorrisPrat.hpp"
#include "lectureFichier.hpp"
#include "affichageVector.hpp"

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

        cout << morrisPrat(mot, pattern) << endl;
        return EXIT_SUCCESS;
    }
}