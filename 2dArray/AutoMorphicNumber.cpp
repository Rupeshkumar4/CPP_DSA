#include <iostream>
using namespace std;

bool IsAutomorphic(int n){
    int sq = n*n;

    while(n>0){
        if(sq%10 != n%10){
            return false;
        }
        sq=sq/10;
        n=n/10;
    }
    return true;
}

int main(){
    int n=76;
    cout<<IsAutomorphic(n)<<endl;
    return 0;
}