#include<iostream>
using namespace std;

// class Heap{
//     public:
//         int arr[100];
//         int size;
//     Heap(){
//         arr[0]=INT16_MIN;
//         size=0;
//     }
//     void insert(int val){
//         size++;
//         int index = size;
//         arr[index]=val;
//         while(index>1){
//             // int leftIndex = index*2;
//             // int rightIndex = index*2+1;
//             int rootIndex = index/2;
//             if(rootIndex<size && arr[i]<arr[rootIndex]){
//                 swap(arr[index],arr[rootIndex]);
//             }
//             else{
//                 return;
//             }
//         }
//     }

//     void print(){
//         for(int i=1;i<=size;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

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
    if(right<=size && arr[right]>arr[largest]){
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



int main(){
    int arr1[6]={-1,54,53,55,52,50};
    int n = sizeof(arr1)/sizeof(arr1[0])-1;
    for(int i=n/2;i>0;i--){
        Heapify(arr1,n,i);
    }
    cout<<"Print Heapify"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr1[i]<<" ";
    } cout<<endl;
    return 0;
}