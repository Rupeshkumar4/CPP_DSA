#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;

bool Anagram(string & str1, string & str2){
    unordered_map<char,int>m;
    for(auto c:str1){
        m[c]++;
    }
    for(auto c:str2){
        if(m.find(c) == m.end()) return false;
        else{
            m[c]--;
        }
    }
    for(auto it:m){
        if(it.second !=0) return false;
    }
    return true;
}


int main(){
    string str1="hello";
    string str2="olleh";

    cout<<(Anagram(str1,str2)?"Yes":"No")<<endl;
}