#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="";
    getline(cin, str);
    int n=str.size();
    int maxi=-1;
    string temp="";
    for(int i=0; i<n; i++){
        if(str[i]==' '){
            int len=temp.length();
            maxi=max(maxi,len);
            temp="";
        }else{
            temp+=str[i];
        }
    }
    int len=temp.length();
    maxi=max(maxi,len);
    cout<<maxi<<endl;
    return 0;

}