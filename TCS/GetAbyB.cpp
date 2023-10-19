#include <iostream>
using namespace std;

int main(){
    int a=100;
    for(int i=1;i<=100000;i++){
        int temp=i;
        int p=1;
        while(temp){
            int ld=temp%10;
            temp=temp/10;
            p=p*ld;
        }
        if(p==a){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"No solution"<<endl;
    return 0;
}