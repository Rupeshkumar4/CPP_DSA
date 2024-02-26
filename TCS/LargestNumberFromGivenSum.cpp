#include <iostream>
using namespace std;
#include<vector>

int main(){
    int n,sum;
    cout<<"Enter number AND sum"<<endl;
    cin>>n>>sum;
    int temp=sum;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        if(sum>=9){
            v[i]=9;
            sum-=9;
        }
        else{
            v[i]=sum;
            break;
        }
    }
    int vsum=0;
    for(int i=0;i<n;i++){
        vsum+=v[i];
    }
    if(vsum==temp){
        cout<<"Solution is"<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
    }else{
        cout<<"Solution is not Possiable"<<endl;
    }
    return 0;
}