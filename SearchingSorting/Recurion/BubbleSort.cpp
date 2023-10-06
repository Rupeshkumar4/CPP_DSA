#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    if(n==0 || n==1){
        return ;
    }

    //Ek case solving..
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }

    // Recursive call
    BubbleSort(arr,n-1);
    
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter array value"<<" ";
        cin>>arr[i];
    }

    BubbleSort(arr,n);
    cout<<"Sorted array is=> "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}