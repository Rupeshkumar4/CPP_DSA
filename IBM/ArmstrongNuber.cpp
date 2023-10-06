#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp=n;
    int ans=0;
    while(temp){
        int ld = temp%10;
        temp /= 10;
        ans+=ld*ld*ld;
    }
    if(ans==n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}