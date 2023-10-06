#include <iostream>
#include <string>
using namespace std;
int MinPeople(string str){
    int n=str.size();
    int ans=INT_MAX;
    int temp=0;
    for(int i=0; i<n; i++){
        if(str[i]=='$' || str[i]=='@'){
            ans = min(ans,temp);
            temp=0;
        }else{
            temp++;
        }
    }
    ans = min(ans,temp);
    return ans;
}
int main(){
    string str="ppppppp@pp";
    cout<<MinPeople(str);
    return 0;
}