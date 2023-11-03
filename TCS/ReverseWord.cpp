#include <iostream>
#include<string>
using namespace std;
string Help(string str){
    int l=str.length();
    int i=0;
    string ans="";
    string temp="";
    while(i<l){
        if(str[i]=='.'){
            if(ans.size()==0){
                ans=temp+ans;
            }
            else{
                ans=temp+"."+ans;
            }
            temp="";
        }else{
            temp+=str[i];
        }
        i++;
    }
    ans=temp+"."+ans;
    return ans;
}

int main(){
    string str="I.love.You";
    cout<<Help(str)<<endl;
    return 0;
}