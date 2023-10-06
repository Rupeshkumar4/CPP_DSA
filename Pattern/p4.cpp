#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the vale of number"<<endl;
    cin>>n;
    int count = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<count;
            count++;
    }   
    count=1;
        cout<<endl;
    }
    count = 1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;  
    }   
    cout<<endl;
    }
}