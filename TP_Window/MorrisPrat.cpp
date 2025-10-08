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