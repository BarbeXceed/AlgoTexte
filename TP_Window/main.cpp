#include "naif.hpp"
#include "lectureFichier.hpp"

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "Erreur : Mongolo" << endl;
        exit(EXIT_FAILURE);
    } else{

        string mot = lectureFichier(argv[1]);
        string pattern = "the";
        cout << AlgoNaif(mot, pattern) << endl;
        
        return EXIT_SUCCESS;
    }
}