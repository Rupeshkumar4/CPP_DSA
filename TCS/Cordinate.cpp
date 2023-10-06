#include <iostream>
#include<vector>
using namespace std;
string Cordinate(vector<int>v){
    int n=v.size();
    int x=0,y=0,count=0;
    for(int i=0; i<n; i++){
        if(count==0){
            x+=v[i];
            count++;
        }
        else if(count==1){
            y+=v[i];
            count++;
        }
        else if(count==2){
            x-=v[i];
            count++;
        }else{
            y-=v[i];
            count=0;
        }
    }
    string ans;
    ans+=to_string(x);
    ans+=' ';
    ans+=to_string(y);
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n;i++){
        cin >> v[i];
    }
    cout<<Cordinate(v);
    return 0;
}