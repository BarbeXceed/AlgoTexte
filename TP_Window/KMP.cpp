#include "KMP.hpp"


vector<int> tableBordKMP(string pattern){
    int m = pattern.size();
    vector<int> res(m+1, 0);

    res[0] = -1;
    res[1] = 0;
    int j = 0;

    for(int i = 2; i <= m; i++){
        while(j >= 0 && pattern[j] != pattern[i]){
            j = res[j];
        }
        j++;
        if(j == 0 || pattern[i] != pattern[j]){
            res[i] = j;
        } else {
            res[i] = res[j];
        }
    }

    return res;
}