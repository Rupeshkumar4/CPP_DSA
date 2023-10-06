#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int>st;
    Queue(){}
    void push(int x){
        this->st.push(x);
    }
    void pop(){
        if(this->st.empty()) return;
        stack<int>temp;
        while(this->st.size() > 1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }
};

int main(){

}