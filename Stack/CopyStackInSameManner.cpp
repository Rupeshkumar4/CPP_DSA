#include <iostream>
#include<stack>
using namespace std;

//Iterative method..
void CopayStack(stack<int>& s){
    stack<int>temp;

    while(not s.empty()){
        int curr = s.top();
        s.pop();
        temp.push(curr);
    }
    while(not temp.empty()){
            int curr = temp.top();
            temp.pop();
            s.push(curr);
        }
}

//Recursive method..

void CopayStackRecursive(stack<int>& s, stack<int>& result){

    if(s.empty()){
        return;
    }
    while(not s.empty()){
        int curr = s.top();
        s.pop();
        CopayStackRecursive(s,result);
        result.push(curr);
    }
}

int main(){
    stack<int>s;
    stack<int>result;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // CopayStack(s);
    CopayStackRecursive(s,result);

    cout<<"CopayStack<<"<<endl;



    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //             s.pop();
    // }

    while(!result.empty()){
        cout<<result.top()<<endl;
                result.pop();
    }

    return 0;
}