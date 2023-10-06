#include<iostream>
#include<stack>
using namespace std;

//Iterravtive Approch
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


//RECURSION
void AddAtBottomRecursive(stack<int> &s,int x){
    if (s.empty())
    {
        s.push(x);
        return;
    }
        int curr = s.top();
        s.pop();
        AddAtBottomRecursive(s,x);
        s.push(curr);
}
int main() {
    cout<<"enter size of stack"<<endl;
    int n;
    cin >> n;
    stack<int> s;
    cout<<"element"<<endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    AddAtBottom(s,100);
    AddAtBottomRecursive(s,101);
    cout<<"Displaying stack After"<<endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}