#include <iostream>
using namespace std;

int main(){
    int n=8;
    int ans=1;
    if(n<=3){
        cout<<n<<endl;
        return 0;
    }

    while(n>4){
        ans = ans*3;
        n=n-3;
    }
    ans=ans*n;
    cout<<ans<<endl;
    return 0;

}