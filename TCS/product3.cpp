#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2,j=2,k=2;
    for(i;i<n;i++){
        for(j;j<n;j++){
            int temp=n/(i*j);
            if(i*j*k==n){
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    return 0;
}