#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=2){
        return true;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n=14;
    for(int i=n-1;i>1;i--){
        if(n%i==0){
            if(isPrime(i) && i>sqrt(n)){
                cout<<"yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"no"<<endl;
    return 0;
}