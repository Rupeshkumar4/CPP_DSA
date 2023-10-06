#include <iostream>
#include <vector>
using namespace std;

bool IsNotPalindrome(int n){
        int temp=n;
        int ans=0;
        int p=1;
        while(temp>0){
            int ld=temp%10;
            ans=ans*p+ld;
            p=p*10;
            temp=temp/10;
        }
        if(ans==n)return false;
        else return true;

}

int main(){
    int n,m;
    cin >> n>>m;
    int count=0;
    for(int i=n;i<=m;i++){
        count=count+IsNotPalindrome(i);
    }
    cout<<count<<endl;
    return 0;
}