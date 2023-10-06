#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    if(n==0 || n==1){
        return ;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
                }
        }
    }
    
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