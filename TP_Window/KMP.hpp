#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int kmp(string mot, string pattern);

vector<int> tableBordKMP(string pattern);