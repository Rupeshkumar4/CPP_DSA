#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double ans=0.0;
    for(int i=1;i<=n;i++){
        ans+=(1.0)/i;
    }
    cout << ans << endl;
}