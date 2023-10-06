#include<iostream>
using namespace std;

void Heapify(int arr[],int size , int i){

    if(size==0){
        cout<<"Nothing to heapify"<<endl;
        return;
    }

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<=size && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<= qsize && arr[right]>arr[largest]){
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

void HeapSort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;

        Heapify(arr,size,1);
    }
}



int main(){
    int arr1[6]={-1,54,53,55,52,50};
    int n = sizeof(arr1)/sizeof(arr1[0])-1;

    // Heap Creation
    for(int i=n/2;i>0;i--){
        Heapify(arr1,n,i);
    }
    cout<<"Print Heapify"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    } cout<<endl;

    // Heap Sort
    cout<<"Heap sorted"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;
    return 0;
}