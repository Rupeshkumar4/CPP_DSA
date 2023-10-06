#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>
using namespace std;

int main(){

    vector<int>odd;
    vector<int>even;
    cout<<"Enter value of row and col"<<endl;
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    cout<<"Enter value of martix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cnt%2==0){
                even.push_back(arr[i][j]);
            }else{
                odd.push_back(arr[i][j]);
            }
            cnt++;
        }
    }
    sort(even.begin(),even.end(),greater<int>());
    sort(odd.begin(),odd.end(),greater<int>());
    int sum = even[1]+odd[1];

    cout<<sum<<endl;
}