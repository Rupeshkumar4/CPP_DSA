#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n=11;

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            int rem=n-i;
            if(isPrime(rem)){
                cout<<"Yes"<<endl;
                // break;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}