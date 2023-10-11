#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string str="informational";
    transform(str.begin(),str.end(),str.begin(),:: tolower);
    unordered_map<char,int>ump;
    for(int i=0;i<str.length();i++){
        ump[str[i]]++;
    }

    string ans="";
    for(int i=0;i<str.length();i++){
        if(ump[str[i]]==1){
            ans+=str[i];
            ump[str[i]]=-1;
        }
    }
    cout<<ans<<endl;
}