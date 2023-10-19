#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="i.love.you.much";
    string ans="";
    string temp="";
    for(int i=0; i<str.size(); i++){
        if(str[i]=='.'){
            // ans+= reverse(temp.begin(), temp.end()) + ".";
            reverse(temp.begin(), temp.end());  // Reverse the temp string in place
            ans += temp + ".";
            temp="";
        }else{
            temp+=str[i];
        }
    }
    if(temp.size()>0){
        ans+=temp;
    }
    cout<<ans<<endl;
    return 0;
}