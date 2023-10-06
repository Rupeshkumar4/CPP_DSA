#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<string>> str(n);
    for (int i = 0; i < n; i++) {
        string temp = "";
        cin >> temp;
        str[i].push_back(temp);
    }
    for (auto it : str) {
        for (auto it2 : it) {
            cout << it2 << " ";
        }
    }
    return 0;
}
