#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<string> TriLexicographique(vector<string> listeMots, vector<char> alphabet);

vector<string> TriParBac(vector<string> listeMots, vector<char> alphabet, vector<vector<string>> bacs, int i);