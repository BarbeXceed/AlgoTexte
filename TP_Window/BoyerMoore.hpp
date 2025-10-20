#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "KMP.hpp"

using namespace std;

string reverseWord(string word);

vector<int> bonDecalage(string pattern);

map<char, int> dernierOccur(string pattern);

int boyerMoore(string mot, string pattern);