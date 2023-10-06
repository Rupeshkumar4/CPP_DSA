#include <iostream>
#include <stack>
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

int precedence(char op){

    if (op=='^') return 3;
    else if(op=='*' || op=='/') return 2;
    else if (op=='+' || op=='-') return 1;
    else return -1;
}

int InFix(string s){
    stack<int>nums; // Store number
    stack<char>op; // Store operator
    int n=s.size();
    for(int i=0; i<n; i++){
        if(isdigit(s[i])){
            nums.push(s[i]-'0');
        }
        else if (s[i] =='(')
        {
            op.push('(');
        }

        //Jb closing bracket mile tb evaluation kr do..
        else if(s[i] == ')')
        {
            while(op.top() != '(' && !op.empty()){
                char Currop=op.top();
                op.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(evalute(v1,v2,Currop));
            }
            if(!op.empty()){
                op.pop();
            }
        } 
        else{

            //Bs operator aaya usko solve krna hain and lowest precedence operator ko store krna hain us se phale higher wale ko solve kr lo
            while(!op.empty() && precedence(op.top())>=precedence(s[i])){
                char Currop=op.top();
                op.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(evalute(v1,v2,Currop));
            }
            op.push(s[i]);
        }
    }

    //If some evaluation left 
    while(!op.empty()){
        char Currop=op.top();
                op.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(evalute(v1,v2,Currop));
    };
    return nums.top();
}

int main(){
    string s="1+(2*(3-1))+2";
    cout<<"PreFix Evaluation"<<endl;
    cout<<InFix(s)<<endl;
    return 0;
}