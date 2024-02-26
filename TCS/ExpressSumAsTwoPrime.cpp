#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

vector<int>All(int n){
    vector<int>v(2,-1);
    // if(!isPrime(n)) return v;
    for(int i=2;i<n;i++){
        for(int j=2; j<n;j++){
            if(i+j==n){
                if(isPrime(i) && isPrime(j)){
                    v[0]=i;
                    v[1]=j;
                    sort(v.begin(),v.end());
                    return v;
                }
            }
        }
    }
    return v;
}

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin >> n;

    //M1 All combination..
    vector<int>v=All(n);
    cout<<v[0]<<" "<<v[1]<<endl;

    // Using Extra space;
    unordered_map<int,int>ump;
    for(int i=1;i<n;i++){
        if(isPrime(i)){
            int rem=n-i;
            // cout<<i<<" "<<rem<<endl;
            if( isPrime(rem) && ump.find(rem)!=ump.end()){
                cout<<i<<" "<<rem<<endl;
                return 0;
            }
            ump[i]++;
        }
    }
    cout<<"-1"<<" "<<"-1";
    return 0;
}