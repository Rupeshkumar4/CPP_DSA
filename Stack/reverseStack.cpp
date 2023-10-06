#include <iostream>
#include <stack>
using namespace std;

//Iterative implementation
void ReverStack(stack<int> &s){
    stack<int>temp1;
    stack<int>temp2;

    while(!s.empty()){
        int curr=s.top();
        s.pop();
        temp1.push(curr);
    }
    while(!temp1.empty()){
        int curr=temp1.top();
        temp1.pop();
        temp2.push(curr);
    }

    while(!temp2.empty()){
        int curr=temp2.top();
        temp2.pop();
        s.push(curr);
    }
}

//Recursive implementation
void AddAtBottom(stack<int> &s,int x){
    stack<int>temp;

    while(!s.empty()){
        int curr = s.top();
        s.pop();
        temp.push(curr);
    }
    s.push(x);

    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        s.push(curr);
    }
}

int ReverseStackRecursive(stack<int> &s){
    if(s.empty()){
        return 0;
    }
    else{
        int curr=s.top();
        s.pop();
        AddAtBottom(s,curr);
        // s.push(curr);
        ReverseStackRecursive(s);
    }
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    // ReverStack(s);
    ReverseStackRecursive(s);
    while(!s.empty()){
        cout<<" "<<s.top()<<endl;
        s.pop();
    }
    return 0;
}