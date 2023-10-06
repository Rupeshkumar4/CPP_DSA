#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=0||n==2) return false;
    for(int i=2;i*i<n+1;i++){
        if(n%i==0) return false;
    }
    return true;
}
bool IsStrongPrime(int n){
    if(n<=0 || n==2){
        return false;
    }
    int nextPrime=n+1;
    int prevPrime=n-1;

    while(isPrime(nextPrime)==false) nextPrime++;
    while(isPrime(prevPrime)==false) prevPrime--;

    int mid = (nextPrime+prevPrime)/2;

    return n>mid;

}
int main(){
    int n;
    cin>>n;
    cout<<IsStrongPrime(n)<<endl;
    return 0;
}