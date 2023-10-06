#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="";
    getline(cin,str);
    str+='_';
    int n = str.size();
    string temp="";
    for(int i = 0; i < n; i++){
        if(str[i]==' '){
            reverse(temp.begin(), temp.end());
            cout << temp <<" ";
            temp=" ";
        }
        else if(str[i]=='_'){
            reverse(temp.begin(), temp.end());
            cout << temp;
            break;

        }
            else{
            temp+=str[i];
        }
    }

    return 0;
}