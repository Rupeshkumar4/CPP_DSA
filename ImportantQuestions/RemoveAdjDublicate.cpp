#include<iostream>
#include<string>
using namespace std;

string Remove(string str){
    int i=0;
    string ans="";
    while(i<str.size()){
        char c=str[i];
        int freq=0;
        while(c==str[i]){
            i++;
            freq++;
        }
        if(freq==1){
            ans+=c;
        }
    }
    if(ans==str){
        return ans;
    }else{
        return Remove(ans);
    }
}

int main(){
    string str="aabbcbbcd";
    string ans=Remove(str);
    cout<<ans<<endl;
}