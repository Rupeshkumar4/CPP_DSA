#include <iostream>
#include <string>
#include<map>
using namespace std;


string CharFreq(string str){
    int n=str.length();
    map<char,int>mp;
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    string ans="";
    for(auto it : mp){
        ans +=it.first;
        ans+=to_string(it.second);
    }
    return ans;
}
int main(){
    string str;
    cin >> str;
    string ans=CharFreq(str);
    cout<< ans<<endl;
    return 0;
}