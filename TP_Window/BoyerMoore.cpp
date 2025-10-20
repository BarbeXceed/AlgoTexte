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



vector<int> bonDecalage(string pattern){
    int m = pattern.size();
    string reversePattern = reverseWord(pattern);
    vector<int> tabKMP = tableBordKMP(reversePattern);
    vector<int> res(m+1, 0);

    for(int i = 0; i <= m; i++){
        res[i] = m - tabKMP[m];
    }
    
    for(int i = 1; i < m; i++){
        int j = m - tabKMP[i];
        if(res[j] > i - tabKMP[i]){
            res[j] = i - tabKMP[i];
        }
    }

    return res;
}

int boyerMoore(string mot , string pattern){
    int n = mot.size();
    int m = pattern.size();
    int res = 0;
    int i = 0;
    vector<int> bonDec = bonDecalage(pattern);
    map<char, int> derOccur = dernierOccur(pattern);

    while( i <= n - m + 1){ //Sus
        int j = m;
        while(j >= 1 && mot[i+j-2] == pattern[j-1]){
            j--;
        }
        if(j == 0){
            res++;
            i += bonDec[0];
        } else {
            i += max(bonDec[j], j-derOccur[mot[i+j-1]]);
        }

    }



    return res;
}