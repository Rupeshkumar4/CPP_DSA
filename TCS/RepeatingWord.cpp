#include<iostream>
#include<string>
#include<unordered_map>
#include<map>
using namespace std;

string solve(string str,int k){

    vector<string>v;
    string temp="";
    for(int i=0; i<str.size(); i++){
        if(str[i]==' '){
            v.push_back(temp);
            temp="";
        }else{
            temp+=str[i];
        }
    }
    v.push_back(temp);
    unordered_map<string,int>ump;
    // map<string,int>ump;
    for(int i=0;i<v.size();i++){
        ump[v[i]]++;
    }
    string ans="";
    for(auto it:ump){
        if(it.second==k){
            ans+=it.first+" ";
        }
    }
    return ans;
}
int main(){
    string str;
    getline(cin,str);
    int k;
    cin >> k;
    string ans=solve(str,k);
    cout<<ans<<endl;
    return 0;
}