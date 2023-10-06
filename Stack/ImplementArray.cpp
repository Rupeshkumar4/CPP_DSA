#include <iostream>
using namespace std;
int stack[100], capacity=100,top=-1;

void Push(int x){
    if(top==capacity-1){
        cout<<"Underflow"<<endl;
        return;
    }
    stack[++top] = x;
    cout<<"pushed"<<endl;
}

void Pop(){
    if (top==-1)
    {
        cout<<"Underflow"<<endl;
    }
    top--;
    cout<<"poppped"<<endl;
}

int size(){
    return top+1;
}

int Gettop(){
    if(top==-1){
        return INT16_MIN;
    }
    return stack[top];
}

void Display(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
    }

    while(top>=0){
        int currElem = stack[top];
        cout<<currElem<<endl;
        top--;
    }
}
int main(){
    Push(3);
    Push(2);
    Push(8);
    Push(0);
    Push(2);
    Push(3);
    Push(5);
    // Display();
    cout<<Gettop()<<endl;
    Pop();
    cout<<Gettop()<<endl;
    Display();
}