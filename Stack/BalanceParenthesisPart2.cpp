#include <iostream>
#include <stack>
using namespace std;

bool Valid(string s){
    stack<char>st;
    int n=s.size();

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if(c=='(' or c=='[' or c=='{'){
            st.push(c);
        }
        else if(st.size() !=0){
            if (c==')' and st.top() =='(')
            {
                st.pop();
            }
            else if(c=='}' and st.top() =='{'){
                st.pop();
            }
            else if(c==']' and st.top() =='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    
    if(st.size()==0){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    string s="{//}";
    cout<<Valid(s)<<endl;
    return 0;
}