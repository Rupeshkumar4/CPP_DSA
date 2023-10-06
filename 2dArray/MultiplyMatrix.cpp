#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, m1, n2, m2; // n2 == m1
    cin >> n1 >> m1;
    
    vector<vector<int> > v1(n1, vector<int>(m1));
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            int ele;
            cin >> ele;
            v1[i][j] = ele;
        }
    }
    cin >> n2 >> m2;
    vector<vector<int> > v2(n2, vector<int>(m2));
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            int ele;
            cin >> ele;
            v2[i][j] = ele;
        }
    }
    vector<vector<int> > v3(n1, vector<int>(m2));
    // Multiply Code..
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < n2; k++) {
                v3[i][j] += v1[i][k] * v2[k][j];
            }
        }
    }
    cout << "Multiply" << endl;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << v3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
