#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool IsHaveAllAlphabet(string &str){
    set<char>s;
    if(str.size()<26) return false;
    for(auto c:str){
        s.insert(tolower(c));
    }

    if(s.size()==26) return true;
    return false;
}

int main(){
    string str;
    cin >> str;
    cout<<"answer=>"<<IsHaveAllAlphabet(str)<<endl;
    return 0;
}