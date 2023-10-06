#include <iostream>
using namespace std;

void LeftShift(int arr[], int n){
    for(int i=1; i<n;i++){
        arr[i-1] = arr[i];
    }
    cout<<"LeftShift"<<endl;

    for (int i = 0; i <n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void RightShift(int arr[], int n){
    for(int i=n-1; i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]=0;
    cout<<"LeftShift"<<endl;

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    cout <<"enter the size of the array"<<endl;

    int n;
    cin >> n;
    int arr[n];
    cout<<"element of array"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // LeftShift(arr,n);
    RightShift(arr,n);
    return 0;
}