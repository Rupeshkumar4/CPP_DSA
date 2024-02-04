#include<iostream>
#include<string>
using namespace std;

string Remove(string str, int k){
    int i=0;
    string ans="";
    while(i<str.size()){
        char c=str[i];
        int freq=0;
        while(c==str[i]){
            i++;
            freq++;
        }
        if(freq<k){
            ans+=c;
        }
    }
    if(ans==str){
        return ans;
    }else{
        return Remove(ans,k);
    }
}

int main(){
    string str="aabbbbcd";
    int k=2;
    string ans=Remove(str,k);
    cout<<ans<<endl;
}