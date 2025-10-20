#include "BoyerMoore.hpp"

string reverseWord(string word){
    string res = "";
    int m = word.size();
    for(int i = m-1; i > -1; i--){
        res += word[i];
    }

    return res;
}

map<char, int> dernierOccur(string pattern){
    int m = pattern.size();
    map<char, int> res;
    
    for(int i = 0; i < m; i++){
        res[pattern[i]] = i;
    }

    return res;
}


/*
vector<int> bonDecalage(string pattern){
    int m = pattern.size();

    string reversePattern = reversedWord(pattern);
    vector<int> tabKMP = tableBordKMP(pattern);
}*/