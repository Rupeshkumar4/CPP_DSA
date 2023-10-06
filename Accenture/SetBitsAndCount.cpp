#include<iostream>
using namespace std;

int SetCount(int n, int m, int c){
    int ans=0;
    for(int i=n;i<=m;i++){
        int temp=i;
        int bitCount=0;
        while(temp>0){
            if(temp&1){
                bitCount++;
            }
            temp=temp>>1;
        }
        if(bitCount==c){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n,m,c;
    cin >> n >> m >> c;
    cout<<SetCount(n,m,c)<<endl;
    return 0;
}