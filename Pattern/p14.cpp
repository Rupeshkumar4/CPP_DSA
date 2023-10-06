#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the vale of number"<<endl;
    cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<p;
            }
            else{
                cout<<0;
            }
    }
    cout<<endl;
    p++;
    }
}