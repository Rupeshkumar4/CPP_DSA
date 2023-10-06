#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void BinToDEc(string str){
    int n = str.size();
    if(n%4 !=0) cout<<"INVALID\n";
    for(int i=0; i<n; i=i+4){
        string tempStr = str.substr(i,4);
        int decValue = stoi(tempStr,0,2);
        if(decValue==10){
            cout<<endl<<"+"<<endl;
        }else if(decValue==11){
            cout<<endl<<"-";
        }else if(decValue==12){
            cout<<endl<<"*"<<endl;
        }else if(decValue==13){
            cout<<endl<<"/"<<endl;
        }else{
            cout<<decValue;
        }
    }
}
int main(){
    string str="";
    cin>>str;
    BinToDEc(str);
    return 0;
}