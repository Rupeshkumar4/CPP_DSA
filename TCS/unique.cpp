#include <iostream>
#include <set>
using namespace std;

int main(){
    string s="dd";
    set<char>st;
    for(int i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    return st.size();
    cout<< s.size();

}