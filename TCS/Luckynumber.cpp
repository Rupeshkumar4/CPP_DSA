#include<iostream>
#include<string>
using namespace std;

int main(){
    int n=154;
    int m=200;
    // 15 0 31

    // int n=101;
    // int m=135;
    // 19 1 14
    int inc=0, dec=0,jum=0;
    for(int i=n;i<m;i++){
        string str = to_string(i);
        if((str[0]-'0')>=(str[1]-'0') && (str[1]-'0')>(str[2]-'0')){
            dec++;
        }else if((str[0]-'0')<=(str[1]-'0') && (str[1]-'0')<=(str[2]-'0')){
            inc++;
        }else{
            jum++;
        }
    }
    cout << inc<<" " << dec <<" "<< jum <<endl;
}