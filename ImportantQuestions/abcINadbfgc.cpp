#include<iostream>
#include<string>
using namespace std;
bool help(string str, string str2){
    int n=str.size();
    int m = str2.size();
    int i=0,j=0;

    while(i<n && j<m){
        if(str[i]==str2[j]){
            i++;
            j++;
        }else{
            j++;
        }
    }
    if(i==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    string str="abc";
    string str2="afggfc";
    cout<<help(str,str2);
}