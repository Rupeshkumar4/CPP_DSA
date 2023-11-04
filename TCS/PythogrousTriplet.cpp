#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    a=5,b=3,c=9;

    int x= max(a,max(b,c));
    int y,z;

    if(x==a){
        y=b;
        z=c;
    }else if(x==b){
        y=a;
        z=c;
    }else{
        y=a;
        z=b;
    }

    if(x*x==y*y+z*z){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}