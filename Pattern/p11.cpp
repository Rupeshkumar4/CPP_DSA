#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the vale of number"<<endl;
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0){
                cout<<0;
            }
            else{
                cout<<1;
            }
                
    }
    cout<<endl;
    }
}