#include <iostream>
#include<vector>
using namespace std;

void Help(int n){
    int num=0;
    int p=1;
    while(n){
        int ld=n%2;
        n=n/2;
        num+= (ld*p);
        p=p*10;
    }
    int ans=0;
    p=1;
    while(num){
        int ld=num%10;
        if(ld==0){
            ans+=1*p;
        }else{
            ans+=0;
        }
        p=p*2;
        num=num/10;
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin >> n;
    Help(n);
    return 0;
}