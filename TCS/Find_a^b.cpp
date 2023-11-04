#include <iostream>
using namespace std;

int main(){
    int a=2;
    int b=5;

    if(b==0){
        return 1;
    }else{
        int x=pow(a,b/2);

        if(b&1){
            // return x*x*a;
            cout<<x*x*a<<endl;
        }else{
            // return x*x;
            cout<<x*x<<endl;
        }
    }
    return 0;
}