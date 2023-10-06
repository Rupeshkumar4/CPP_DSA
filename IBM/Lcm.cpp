#include<iostream>
using namespace std;

int Lcm(int n,int m){
    int maxi=max(n,m);
    int mini =min(n,m);
    if(maxi%mini==0){
        return maxi;
    }
    int temp=maxi;
    while(maxi%mini!=0){
        maxi+=temp;
    }
    return maxi;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout<<Lcm(n,m)<<endl;
    return 0;
}