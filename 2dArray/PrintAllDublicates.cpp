#include <iostream>
#include <map>
#include <string>
#include<iostream>

using namespace std;

int main() {
  string str = "sinstriiintng";

  map < char, int > countsMap;

  for (int i = 0; i < str.length(); i++)
    countsMap[str[i]]++;

  for (auto it: countsMap)
    if (it.second > 1)
      cout << it.first << " - " << it.second << "\n";

  return 0;
}