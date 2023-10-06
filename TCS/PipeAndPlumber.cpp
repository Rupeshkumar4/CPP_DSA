#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int o;
    int r;
     cin>>n>>o>>r;
    vector<int>vin(n,0);
    vector<int>vout(o,0);
   

    for(int i=0;i<n;i++){
        cin >>vin[i];
    }

    for(int i=0;i<o;i++){
        cin >>vout[i];
    }
    
    
    int sumin=0;
    for(int i=0;i<n;i++){
        sumin+=vin[i];
    }

    int sumout=0;
    for(int i=0;i<o;i++){
        sumout+=vout[i];
    }

    if(sumout==sumin){
        cout<<"Balance"<<endl;
    }else if(sumin>sumout){
        cout<<(sumout-sumin-r);
    }else{
        cout<<(sumin-sumout+r);
    }
    
    return 0;
}