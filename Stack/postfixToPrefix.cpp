#include <iostream>
#include <stack>
using namespace std;

string PrefixToInfix(string &prefixString){
    stack<string>st;
    // reverse(prefixString.begin(), prefixString.end());
    int n=prefixString.size();
    for(int i=0; i<n; i++){
        if(isdigit(prefixString[i])){
            st.push(to_string(prefixString[i]-'0'));
        }
        else {
            string v1 = st.top();
            st.pop();
            string v2 = st.top();
            st.pop();
            string newExpr =  prefixString[i]+v2 + v1 ;
            st.push(newExpr);
        }
    }
    return st.top();
}

int main(){
    string s="31-";
    cout<<" Evaluation"<<endl;
    cout<<PrefixToInfix(s)<<endl;
    return 0;
}