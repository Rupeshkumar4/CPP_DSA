#include <iostream>
using namespace std;
int Fib(int n){
    if(n<1){
        return n;
    }

    int first=0,second=1,third=0;
    for(int i=2;i<=n;i++){
        third=first+second;
        first=second;
        second=third;
    }
    return third;
}

int main(){
    int n;
    cin>>n;
    cout<<Fib(n)<<"\n";
    return 0;
}