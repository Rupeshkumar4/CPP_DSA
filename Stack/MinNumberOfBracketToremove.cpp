#include <iostream>
#include <stack>
using namespace std;

int MinRemoveBracket(string s){
    stack<char>st;
    int n=s.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if(c == '('){
            st.push(c);
        }
        else{
            //Agar stack empty ni hain to opening bracket wait kr raha hain closing bracket ka es liyea direct pop it
            if(!st.empty()){
                st.pop();
            }
            // Agar stack empty to close bracket aa gaya hain bina opening bracket aayea he.. so usko remove krna hoga
            else{
                cnt++;
            }
        }
    }
    // Yeh check kre ga stack mein opening bracket bacha to ni hain .. open bracket hain bt close bracket ni hain to usko remove krna hoga
    cnt = cnt + st.size();
    return cnt;
}

int main(){
    string s="(((((()((()))))";
    cout<<MinRemoveBracket(s)<<endl;
    return 0;
}