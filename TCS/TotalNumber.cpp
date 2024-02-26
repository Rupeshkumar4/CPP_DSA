#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int maxi=max(n,m);
    int mini=min(n,m);
    if(n==m) {
    cout<<"1";
    return 0;
    }
    else if(maxi%mini==0) {
        cout<<"1"<<endl;
        return 0;
    }

    vector<int>v1,v2;
    for(int i=n-1;i>=1;i--){
        if(n%i==0){
            v1.push_back(i);
            n=i;
        }
    }
    for(int i=m-1;i>=1;i--){
        if(m%i==0){
            v2.push_back(i);
            m=i;
        }
    }
    int i=0,j=0;
    int cnt=0;
    while(i<=v1.size() && j<=v2.size()){
        if(v1[i]==v2[j]){
            cout<<cnt<<endl;
            return 0;
        }
        else if(v1[i]>v2[j]){
            cnt++;
            i++;
        }else{
            cnt++;
            j++;
        }
    }
    cout<<max(v1.size(),v2.size())<<endl;

    return 0;
}