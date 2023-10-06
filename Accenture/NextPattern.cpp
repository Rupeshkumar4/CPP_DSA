#include<iostream>
using namespace std;

string NextPattern(string s, int n){
    int cnt=0;
    for(int i=1;i<s.size();i=i+2){
        cnt += s[i]-'0';
        if(cnt >=n){
            return to_string(s[i-1]);
        }
    }
    string c = "-1";
    return c;
}

int main(){
    string s="";
    cin>>s;
    int n;
    cin>>n;
    cout<<NextPattern(s,n);
}