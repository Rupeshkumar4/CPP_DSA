#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="";
    getline(cin, str);
    int n=str.size();

    for(int i = 0; i <n;i++){
        if(str[i]!=' ' && !isalpha(str[i])){
            cout<<"False"<<endl;
            break;
        }
    }

    cout<<"True"<<endl;
    return 0;
}