#include<iostream>
#include<vector>
using namespace std;

int NoOfCardToMakePrymid(int n){
    if(n==0) return 0;
    if(n==1) return 2;
    return pow(2,n+1)-1;
    // return (2*n) + (n-1) + NoOfCardToMakePrymid(n-1);
    
}

int main(){
    int n;
    cin >> n;
    cout<<NoOfCardToMakePrymid(n)<<"\n";
    return 0;
}