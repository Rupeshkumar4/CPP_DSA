#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k;
    cin >> k;

    int n = v.size();
    k = k % n;
    int temp;

    while (k > 0) {
        temp = v[n-1];

        // Shift elements to the left
        for (int i = n-1; i >0 ; i--) {
            v[i] = v[i - 1];
        }

        // Place the temporary value at the end
        v[0] = temp;

        k--;
    }

    // Print the left-rotated vector
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
