#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int index(string str) {
    unordered_map<char,int>ump;
    for(int i=0; i<str.length(); i++){
        ump[str[i]]++;
    }
    for(int i=0; i<str.length(); i++){
        if(ump[str[i]]==1){
            return i;
        }
    }
    return -1;
}

int  main(){
    string str="IloveDsaIlove";
    cout<<index(str)<<endl;
    return 0;

}