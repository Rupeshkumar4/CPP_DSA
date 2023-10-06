#include <iostream>
#include <stack>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n = arr.size();
    vector<int> res(n,-1); // Initalize with -1;
    stack<int> s;
    s.push(0);
    for (int i = 0; i < n; i++)
    {
        while(s.size()!=0 and arr[i]>arr[s.top()]){
        res[s.top()] = arr[i];
        s.pop();
    }
        s.push(i);
    }
    

    return res;
}

int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> res;
    res = nge(arr);

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}