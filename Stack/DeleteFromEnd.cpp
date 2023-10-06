#include <iostream>
#include<stack>
using namespace std;

void DeleteFromEnd(stack<int>& s){
    stack<int>temp;
    while(s.size() != 1){
        int curr = s.top();
        s.pop();
        temp.push(curr);
    }
    s.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        s.push(curr);
    }
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    DeleteFromEnd(s);

    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
}