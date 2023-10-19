#include <iostream>
using namespace std;

int m2(int n){
    int ans=0;
    int p=1;
    for(int i=9;i>=2;i--){
        if(n%i==0){
            ans=ans+i*p;
            n=n/i;
            i++;
            p=p*10;
        }
    }
    if(n<=1){
        return ans;
    }
    return -1;
}

int main(){
    int num;
    cin >> num;
    for(int i=10;i<=10000;i++){
        int temp=i;
        int ans=1;
        while(temp>0){
            int ld=temp%10;
            ans = ans*ld;
            temp=temp/10;
        }
        if(ans==num){
            cout<<i<<endl;
            break;
        }
    }

    cout<<m2(num)<<endl;
    return 0;
}