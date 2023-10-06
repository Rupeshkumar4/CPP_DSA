#include <iostream>
using namespace std;

void Reverse(int arr[], int start, int end){
    while(start<end){
        swap(arr[start++], arr[end--]);
    }
}

// 1 2 3 4 5
// 5 4 3 2 1
// 3 4 5 2 1
// 3 4 5 1 2
void RightRotate(int arr[],int n, int x){
    x = x%n;
    Reverse(arr, 0, n-1);
    Reverse(arr, 0, x-1);
    Reverse(arr, x, n-1);
}
// 1 2 3 4 5
// 5 4 3 2 1
//

void RightRotateSpace(int arr[],int n, int d){
    d = d % n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[(i+d)%n] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = v[i];
    }
    cout <<"Right rotate using space"<<endl;
}
void LeftRotate(int arr[],int n, int x){
    x = x%n;
    
}

int main(){
    cout <<"enter size of array"<<endl;
    int n;
    cin >> n;
    int arr[n];

    cout<<"Enter elements of array"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<"from where you want to rotate"<<endl;
    int d;
    cin >> d;
    // RightRotate(arr,n,d);
    // LeftRotate(arr,n,d);
    RightRotateSpace(arr,n,d);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}