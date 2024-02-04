#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main() {
    vector<int> v = {1, 2, 2, 3, 5, 3, 1, 8};
    map<int, int> mp;

    for (int i = 0; i < v.size(); i++) {
        mp[v[i]]++;
    }

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    for(int i = 0; i < v.size(); i++) {
        if(mp[v[i]]!=0){
            cout<<mp[v[i]].first << " " << mp[v[i]].second << endl;
        }
    }

    return 0;
}
