#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> v1, vector<int> v2, int k, int n, int m) {
    int left = 0, right = m - 1;
    int possibleAns = 9999;
    while (left < n && right >= 0) {
        int sum = v1[left] + v2[right];
        if (abs(k - sum) < possibleAns) {
            possibleAns = abs(k - sum);
            cout << v1[left] << " " << v2[right] << endl;
        }
        if (sum > k) {
            right--;
        } else {
            left++;
        }
    }
}

int main() {
    vector<int> v1;
    vector<int> v2;
    cout << "give n, m, k" << endl;
    int n, m, k;
    cin >> n >> m >> k;
    cout << "v1" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cout << "v2" << endl;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    solve(v1, v2, k, n, m);
    return 0;
}
