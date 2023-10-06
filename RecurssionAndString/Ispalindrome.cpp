#include<iostream>
using namespace std;
bool isPalindrome(string &s, int st){
   int n = s.length();
    if(st>n-st-1){
        return false ;
    }
    if(st==n-st-1){
        return true ;
    }
    if (s[st] != s[n-st-1])
    {
        return false;
    }
        
     return isPalindrome(s,++st);
}


int main(){
    string s="";
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int n = s.size();
    int st=0;
    cout<<s<<endl;
    bool ans = isPalindrome(s,st);
    cout<<ans<<endl;
    return 0;
}