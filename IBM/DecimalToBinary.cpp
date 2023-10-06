#include<iostream>
#include<vector>
using namespace std;

int decimalToBinary(int n){
    int ans=0;
    int p=1;
    while(n>0){
        int ld =n%2;
        ans +=p*ld;
        n=n/2;
        p=p*10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout<<decimalToBinary(n)<<endl;
    return 0;
}