#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum += v[i];
    }

    vector<int>fibv;
    for(int i=0; i<10; i++){
        fibv.push_back(fib(i));
    }
    cout<<"=========="<<endl;
    for(auto it:fibv){
        cout<<it<<" ";
    }
    cout<<endl;
    
    int ans=50000;
    int tempSum=0;
    for(auto it:fibv){
        
        tempSum=it;
        if(sum<=tempSum){
            ans=min(ans,tempSum-sum);
            break;
        }
    }
    cout<<"====ans===="<<endl;
    cout<<ans<<endl;
    return 0;
}