#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k;
    cin >> k;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // v.push_back(5);
    int xors=v[0];
    for(int i=1; i<v.size(); i++){
        xors=xors^v[i];
    }
    int maxi=max(xors,k);
    int cnt=0;
    if(xors==k){
        cout<<"0"<<endl;
        return 0;
    }
    while(maxi){
        int ld1=k%2;
        int ld2=xors%2;
        if(ld1!=ld2) cnt++;
        k=k/2;
        xors=xors/2;
        maxi=maxi/2;
    }
    cout<<cnt<<endl;
    return 0;
}