#include <iostream>
#include <string>
#include <map>
using namespace std;

string ModifyString(string str) {
    map<char,int>mp;
    int n=str.length();
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    string ans="";
    for(auto it:mp){
        ans+=it.first;
        int temp=it.second;
        while(temp>0){
            ans+='@';
            temp--;
        }
        ans+=' ';
    }
    return ans;
}

int main(){
    string str="";
    cin>>str;
    cout<<"Final OutPut=>"<<ModifyString(str)<<endl;
    return 0;
}