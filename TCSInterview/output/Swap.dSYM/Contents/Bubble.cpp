#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}