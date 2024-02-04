#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="we1come 3o Rupesh";

    for(int i=0; i<str.size(); i++){
        if(str[i]>='0' && str[i]<='9'){
            str[i]="M";
        }
    }
    cout<<str;
}