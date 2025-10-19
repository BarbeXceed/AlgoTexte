#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<int> tableBords(string pattern);

int algoWindow(string mot, string pattern, vector<int>(*funcBord)(string));