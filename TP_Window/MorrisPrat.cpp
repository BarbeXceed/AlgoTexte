#include "MorrisPrat.hpp"

vector<int> tableBords(string pattern){

    int m = pattern.size();
    vector<int> res(m+1, 0);

    res[0] = -1;
    res[1] = 0;
    int j = 0;

    for(int i = 2; i <= m; i++){
        while( j >= 0 && pattern[j] != pattern[i-1]){
            j = res[j];
        }
        j++;
        res[i] = j;
    }


    return res;
}

int algoWindow(string mot, string pattern, vector<int> (*funcBord)(string)){
    int n = mot.size();
    int m = pattern.size();
    int occ = 0;
    vector<int> bord = funcBord(pattern);
    int i = 1; //sus
    int j = 0; //double sus
    while(i <= n-m+j+1){
        while(j <= m && mot[i-1] == pattern[j]){
        j++;
        i++;
        }
        if(j == m){
            occ++;
        }
        if(j == 0){
            i++;
        } else {
            j = bord[j];
        }
    }
    return occ;
}