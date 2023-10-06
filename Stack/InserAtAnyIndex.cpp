#include<iostream>
#include<stack>
using namespace std;

//Iterravtive Approch
void InsertAtIndex(stack<int> &s,int x, int index){
    stack<int>temp;
    int count = 0;
    int size = s.size();

    while(count<size-index){
        int curr = s.top();
        s.pop();
        temp.push(curr);
        count++;
    }
    s.push(x);

    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        s.push(curr);
    }
}


//RECURSION
void InsertAtIndexRecursive(stack<int> &s,int x, int index){
    int size = s.size();
    int count = 0;
    if (count==size-index)
    {
        s.push(x);
        return;
    }
        int curr = s.top();
        s.pop();
        InsertAtIndexRecursive(s,x,index);
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
    InsertAtIndex(s,100,3);
    InsertAtIndexRecursive(s,101,3);
    cout<<"Displaying stack After"<<endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}