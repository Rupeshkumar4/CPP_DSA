#include<iostream>
#include<stack>
using namespace std;
//Iterative method
void InsertInSorted(stack<int>& st,int x){
    stack<int>temp;
    if(st.size() ==0){
        st.push(x);
        return;
    }
    while(st.top()>x){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);

    while (temp.size()!=0)
    {
        st.push(temp.top());
            temp.pop();
    }
    
}
//Recursive method
void InsertInSortedRecursive(stack<int>& st,int x){
    stack<int>temp;
    if(st.size() ==0){
        st.push(x);
        return;
    }
    if(st.top()<x){
        st.push(x);
        return;
    }
        int curr = st.top();
        st.pop();
        InsertInSortedRecursive(st,x);
        st.push(curr);
    
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
    InsertInSortedRecursive(s,5);
    cout<<"Displaying stack After"<<endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}