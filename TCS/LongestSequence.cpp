#include<iostream>
#include<string>
using namespace std;

string FindLongSeq(int exp){
    string str=to_string(exp);
    string ans="";
    string result="";
    int n = str.length();
    for(int i=1; i<str.length();i++){
        if((str[i-1]-'0')<(str[i]-'0')){
            ans+=str[i-1];
        }
        else{
            ans += str[i-1];
            if(result.size()<ans.size()){
                result=ans;
            }
            ans = "";
        }
    }
    if(result.size()<ans.size()){
        ans += str[n-1];
        result=ans;
    }
    // return stoi(result);
    return result;
}

int main(){
 
    int exp;
    cin >> exp;
    cout<<FindLongSeq(exp)<<endl;
    return 0;
}