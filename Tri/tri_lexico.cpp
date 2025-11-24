#include "tri_lexico.hpp"

vector<string> TriLexicographique(vector<string> listeMots, vector<char> alphabet){

    //Création des bacs
    vector<vector<string>> bacs;
    for(int i = 0; i < alphabet.size(); i++){
        bacs.push_back(vector<string>());
    }

    for(int i = alphabet.size()-1; i >= 0; i--){
        listeMots = TriParBac(listeMots, alphabet, bacs, i);
    }

    return listeMots;
}

vector<string> TriParBac(vector<string> listeMots, vector<char> alphabet, vector<vector<string>> bacs, int i){ //Si je portais mes balls, je pourrais faire vector<chainedList<string>>

    //Remplissage du dictionnaire de correspondance
    map<char,int> char2int;
    for(int j = 0; j < alphabet.size(); j++){
        char2int[alphabet[j]] = j;
    }

    for(int j = 0; j < listeMots.size(); j++){
        string mot = listeMots[j]; 
        bacs[char2int[mot[i]]].push_back(mot);
    }

    //Si c'était une file/liste chainée, ca servirait à rien
    while(listeMots.size() != 0){
        listeMots.pop_back();
    }

    for(int j = 0; j < alphabet.size(); j++){
        int indice = char2int[alphabet[j]];
        for(int l = 0; l < bacs[indice].size(); l++){
            listeMots.push_back(bacs[indice][l]);
        }
        bacs[indice].clear();
    }

    return listeMots;
}