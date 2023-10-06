#include <iostream>
using namespace std;

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
    return 0;
}