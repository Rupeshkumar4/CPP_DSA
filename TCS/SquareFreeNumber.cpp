#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin >> n;
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int x= sqrt(i);
            if(x*x != i) cnt++;
        }
        if(n%(n/i)==0){
            int x= sqrt(n/i);
            if(x*x != n/i) cnt++;
        }
    }
    cout<<cnt<<endl;
}