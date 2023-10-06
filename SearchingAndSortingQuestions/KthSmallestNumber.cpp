//Example of Quick Sort Function
#include <iostream>
using namespace std;
int partition(int arr[], int l, int r){
    int pivot = arr[r];
        int i =l;
        for(int j=l;j<r;j++){
            if(arr[j]<pivot){
                swap(arr[i],arr[j]);
                i++;
            }
        }
        swap(arr[i],arr[r]);
        return i;
}
int kthMin(int arr[], int l, int r, int k){
    if(k>0 && k<=r-l+1){
        int pos = partition(arr,l,r);
        if(pos-l==k-1) {
            return arr[pos];
        }
        else if(pos-l>=k-1) {
            return kthMin(arr,l,pos-1,k);
        }
        else {
            return kthMin(arr,pos+1,r,k-(pos-l+1));
        }
    }
    else{
        return -1;
    }
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
    int k=4;
    cout<<kthMin(arr,0,n-1,k);
    return 0;
}