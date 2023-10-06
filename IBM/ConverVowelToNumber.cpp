#include <iostream>
#include <string>
using namespace std;

string Reverse(string str){
    int v=1;
    string ans="";
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='0' || str[i]=='u'){
            str[i]=v+'0';
            v++;
        }
    }
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string str="";
    cin >> str;
    cout<<Reverse(str)<<endl;
    return 0;
}