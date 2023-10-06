#include <iostream>
#include <vector>
using namespace std;

int  main(){
    int n;
    cin >> n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int left=0;
    int right=n-1;
    while(left<right){
        while(left<right && v[left] !=0){
            left++;
        }
        while(left<right && v[right] ==0){
            right--;
        }
        if(left<right){
            swap(v[left],v[right]);
            left++;
            right--;
        }


    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}