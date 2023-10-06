#include <iostream>
#include <string>
using namespace std;

void Convert(string &str){
    int n=str.size();
    str[0]=toupper(str[0]);
    str[n-1]=toupper(str[n-1]);
    for(int i=1;i<n-1;i++){
        if(str[i]==' '){
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
}

int main(){
    string str="this i Rupesh kumar";
    Convert(str);
    cout<<str;
    return 0;
}