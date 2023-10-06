//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    void Heapify(vector<int> &arr,int size , int i){

    if(size==0){
        cout<<"Nothing to heapify"<<endl;
        return;
    }

    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<size && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<size && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        Heapify(arr,size,largest);
    }
    else {
        return;
    }

}
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        //step1 merge two array
        vector<int>ans;
        for(auto it:a) ans.push_back(it);
        for(auto it:b) ans.push_back(it);
        
        // step 2 build heap array
        int size = ans.size();
        for(int i=size/2-1;i>=0;i--){
            Heapify(ans,size,i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged){
    if (arr1.size() + arr2.size() != merged.size()){
        return false;
    }
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
    vector<int> mergedCopy =merged;
    sort(mergedCopy.begin(),mergedCopy.end());
    if (arr1 != mergedCopy){
        return false;
    }
    for(int i = 1; i<merged.size(); i++){
        if(merged[i] > merged[(i-1)/2])
            return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        vector<int> a(n,0),b(m,0);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> merged, copyA = a, copyB = b;
        Solution obj;
        merged = obj.mergeHeaps(a, b, n, m);
        bool flag = isMerged(copyA, copyB, merged);
        if(flag == false) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

// } Driver Code Ends