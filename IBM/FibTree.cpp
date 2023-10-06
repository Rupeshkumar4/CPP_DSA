#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter limits ";
    cin >> n;
    for(int i=0;i<n-1;i++){
        if(i==0){
            cout<<"1"<<endl;
        }
        int a=1,b=1,c=0;
        cout<<a<<" ";
        cout<<b<<" ";
        for(int j=0;j<i;j++){
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}