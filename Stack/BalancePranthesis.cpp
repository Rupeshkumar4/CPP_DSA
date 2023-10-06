#include <iostream>
using namespace std;

bool Valid(string s){

    int n=s.size();
    int OpenPranthesis=0;
    for(int i=0; i<n;i++){
        char c = s[i];
        if(c == '(') OpenPranthesis++;
        else if(OpenPranthesis==0){
            return false;
        }
        else{
            OpenPranthesis--;
        }
    }
    if(OpenPranthesis==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s=")";
    cout<<Valid(s)<<endl;
    return 0;
}