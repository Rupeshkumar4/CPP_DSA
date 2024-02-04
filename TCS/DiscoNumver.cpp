#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> v
    { 
        {3, 7, 8}, 
        {9, 11, 13}, 
        {15, 16, 17} 
    }; 
    
    vector<int> row;
    for(int i = 0; i < v.size(); i++){
        int mini = INT_MAX;
        for(int j = 0; j < v[0].size(); j++){
            mini = min(mini, v[i][j]);
        }
        row.push_back(mini);
    }

    sort(row.begin(), row.end());
    cout << row[row.size() - 1] << endl;

    return 0;
}
