#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int evalute(int v1,int v2, char op){

    if(op=='^')
    {
        return pow(v1,v2);
    }

    if (op=='+')
    {
        return v1+v2;
    }
    if (op=='-')
    {
        return v1-v2;
    }
    if (op=='*')
    {
        return v1*v2;
    }
    if(op=='/'){
        return v1/v2;
    }
    
}

int Postfix(string s){
    stack<int>st;
    int n=s.size();
    for(int i=0; i<n; i++){
        if(isdigit(s[i])){
            st.push(s[i]);
        }
        else{
            if(st.size()>=2){
                int temp2 = st.top();
                st.pop();
                int temp1 = st.top();
                st.pop();
                st.push(evalute(temp1-'0', temp2-'0',s[i]));
            }
            else{
                return -1;
            }
        }
    }
    return st.top();
}

int main(){
    string s="25^";
    cout<<"PostFix Evaluation"<<endl;
    cout<<Postfix(s)<<endl;
    return 0;
}