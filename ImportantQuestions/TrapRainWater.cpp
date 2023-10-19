#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> v {1, 2, 3, 4, 0, 4, 6, 8, 0, 0, 4, 3, 2};
    int n = v.size();
    
    vector<int> leftMaxArray(n, 0);
    int leftMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        leftMax = max(leftMax, v[i]);
        leftMaxArray[i] = leftMax;
    }

    vector<int> rightMaxArray(n, 0);
    int rightMax = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        rightMax = max(rightMax, v[i]);
        rightMaxArray[i] = rightMax;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        count += min(leftMaxArray[i], rightMaxArray[i]) - v[i];
    }
    
    cout << count << endl;
    return 0;
}
