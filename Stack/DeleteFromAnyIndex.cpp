#include<iostream>
#include<stack>
using namespace std;

//Iterravtive Approch
void DeleteAnyIndex(stack<int> &s, int index){
    stack<int>temp;
    int count = 0;
    int size = s.size();

    while(count<size-index){
        int curr = s.top();
        s.pop();
        temp.push(curr);
        count++;
    }
    s.pop();

    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        s.push(curr);
    }
}


//RECURSION
void DeleteFromAnyIndexRecursive(stack<int> &s,int index){
    int size = s.size();
    int count = 0;
    if (count==size-index)
    {
        s.pop();
        return;
    }
        int curr = s.top();
        s.pop();
        DeleteFromAnyIndexRecursive(s,index);
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
    DeleteAnyIndex(s,3);
    DeleteFromAnyIndexRecursive(s,1);
    cout<<"Displaying stack After"<<endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}