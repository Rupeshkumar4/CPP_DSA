#include <iostream>
#include <string>
using namespace std;
int TotalSub(string str,string Substr){
    int cnt=0;
    int l1=str.length();
    int l2=Substr.length();

    for(int i=0;i<=l1-l2;i++){
        string temp=str.substr(i,l2);
        if(temp==Substr){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string str="abcabdabcdefab";
    string Substr="ab";
    cout<<TotalSub(str,Substr)<<endl;
    return 0;
}