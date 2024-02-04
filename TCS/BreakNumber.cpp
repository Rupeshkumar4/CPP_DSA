#include <iostream>
using namespace std;

int main(){
    int n=8;
    if(n==1){
        return 1;
    }
    else if(n<=3){
        return n;
    }
    int ans=1;
    while(n>3){
        ans=max(ans,(n-2)*(2));
        ans=max(ans,(n-3)*(3));
        n--;
    }
    cout<<ans;
}