//Example of Quick Sort Function
#include <iostream>
using namespace std;
int kthMAx(int arr[], int n){
    if(n==1)
        return arr[0];
    int pivot = arr[n-1];
    int i = 0;
    for(int j = 0; j < n-1; j++){
        if(arr[j] < pivot)
            swap(arr[i++], arr[j]);
    }
    swap(arr[i], arr[n-1]);
    return kthMAx(arr, i);
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}