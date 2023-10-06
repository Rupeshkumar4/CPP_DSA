
#include<iostream>
#include<string>
using namespace std; 

string RemovedVowel(string str){
    string ans="";
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }else{
            ans+=str[i];
        }
    }
    return ans;
}

int main(){
    string str="";
    cin >> str;
    cout<<RemovedVowel(str)<<endl;
    return 0;
}