#include<iostream>
using namespace std;

int HigestPower(int n,int x){
    int cnt=0;
    while(n>0){
        cnt+=n/x;
        n=n/x;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    cout<<HigestPower(n,x)<<"\n";
    return 0;
}