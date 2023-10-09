#include <iostream>
using namespace std;

int main(){
    int n=30;
    int k=2;
    int cnt=0;
    for(int i=n; i>=1; i--){
        if(n%i==0){
            cnt++;
        }
        if(cnt==k){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}