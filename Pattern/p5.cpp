#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the vale of number"<<endl;
    cin>>n;
    int count=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<count;
            count--;
                
    }
    cout<<endl;
    count=n;
    }
}