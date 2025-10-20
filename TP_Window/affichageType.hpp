#pragma once

#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <typename T>
void coutVector(vector<T> tab){
    cout << "[";
    for(int i = 0; i < tab.size()-1; i++){
        cout << tab[i] << ", ";
    }

    cout << tab[tab.size()-1] << "]" << endl;
    cout << endl;
}

template <typename X, typename Y>
void coutMap(map<X, Y> tab){
    for (auto content : tab){
        cout << "\"" << content.first << "\" : " << content.second << endl; 
    }
}