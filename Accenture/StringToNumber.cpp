#include<iostream>
using namespace std;

int FormNumber(string str){
    int n=str.size();
    int num=0;
    for(int i=0; i<n; i++){
        if(str[i]=='A'){
            num+=1;
        }
        else if(str[i]=='B'){
            num+=10;
        }else if(str[i]=='C'){
            num+=100;
        }else if(str[i]=='D'){
            num+=1000;
        }else  if(str[i]=='E'){
            num+=10000;
        }else if(str[i]=='F'){
            num+=1000000;
        }else if(str[i]=='G'){
            num+=1000000;
        }
    }
    return num;
}

int main(){
    string str="";
    cin >> str;
    cout<<FormNumber(str);
    return 0;
}