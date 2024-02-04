#include <iostream>
#include<string>
using namespace std;

string solve(string str){
    transform(str.begin(), str.end(),str.begin(),::toupper);
    reverse(str.begin(), str.end());
    int n=str.size();
    for(int i=0; i<n; i++){
        if(str[i]=='A') str[i]='T';
        else if(str[i]=='T') str[i]='A';
        else if(str[i]=='C') str[i]='G';
        else if(str[i]=='G') str[i]='C';
    }
    // reverse(str.begin(), str.end());
    return str;
}

int main(){
    string str="GTCAG";

    string ans=solve(str);
    for(int i=0; i<ans.size(); i++) cout << ans[i];
    return 0;
}