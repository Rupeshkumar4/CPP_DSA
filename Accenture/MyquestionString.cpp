#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="";
    cin >> str;

    int count=0;
    for(int i=0; i<str.length(); i++){
        for(int j=i+1; j<str.length(); j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<count<<" ";
    }
}