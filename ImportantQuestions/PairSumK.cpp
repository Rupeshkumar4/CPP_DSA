#include <iostream>
#include <vector>  // Added this line
#include <string>
#include <unordered_set>
#include <utility>
using namespace std;

// vector<pair<int, int>> GetPair(vector<int>& v, int k) {
//     unordered_set<int> st;
//     vector<pair<int, int>> ans;
//     for (int i = 0; i < v.size(); i++) {
//         int rem = k - v[i];
//         if (st.find(rem) != st.end()) {
//             ans.push_back(make_pair(v[i], rem));
//         } else {
//             st.insert(v[i]);
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
//     int k = 5;
//     vector<pair<int, int>> p = GetPair(v, k);
//     for (auto it : p) {
//         cout << it.first << " " << it.second << endl;
//     }
//     return 0;
// }
