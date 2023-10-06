#include<iostream>
using namespace std;

int TrallingZero(int n){
    int cnt=0;
    while(n>0){
        cnt += n/5;
        n=n/5;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<TrallingZero(n)<<endl;
    return 0;
}