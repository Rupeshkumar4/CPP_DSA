#include<iostream>
using namespace std;

int main(){
    int even=0,odd=0,oddterm=0,eventerm=0;
    int n;
    cin >> n;
    vector<int>ans;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            ans.push_back(even);
            
            even+=2;

        }else{
            ans.push_back(odd);
            odd++;
        }
    }

    for(int i=0;i<=n;i++){
        cout<<ans[i]<<" ";
    }
}