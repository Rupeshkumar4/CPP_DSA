#include <iostream>
#include<string>
using namespace std;

string Capital(string str){
    str[0]=toupper(str[0]);

    for(int i=1; i<str.length();i++){
        if(str[i]==' ' && str[i+1] !=' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
    return str;
}

int main(){
    string str="i am Rupesh  kumar i ";
    cout<<Capital(str)<<endl;
    return 0;
}