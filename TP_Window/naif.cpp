#include "naif.hpp"

int AlgoNaif(string mot, string pattern){

    int occ = 0;
    int n = mot.size();
    int m = pattern.size();

    for(int i = 1; i < (n-m+1); i++){
        int j = 1;
        while(j <= m && mot[i+j-2] == pattern[j-1]){
            j++;
        }
        if(j == m +1){
            occ++;
        }
    }
    
    return occ;
}