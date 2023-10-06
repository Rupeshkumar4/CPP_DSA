
#include <iostream>
#include <vector>
using namespace std;

int DiagonalDifference(vector<vector<int> > v){
    int sum1 = 0, sum2 = 0;
    int n = v.size();
    int m = v[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                sum1 += v[i][j];
            }
            if(j == n - i - 1){
                sum2 += v[i][j];
            }
        }
    }
    int diff = abs(sum1 - sum2);
    return diff;
}


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int ele;
            cin >> ele;
            v[i][j] = ele;
        }
    }
    cout << DiagonalDifference(v);
    return 0;
}
