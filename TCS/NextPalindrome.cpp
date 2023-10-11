#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=6;

    string str=to_string(n);
    string str2=to_string(n);
    reverse(str2.begin(), str2.end());
    if(str==str2 && str2.size()>=2){
        cout<<stoi(str)<<endl;
    }else{
        while(1){
            str=to_string(stoi(str)+stoi(str2));
            str2=str;
            reverse(str2.begin(), str2.end());
            if(str==str2){
                cout<<stoi(str);
                break;
            }
        }
    }
}