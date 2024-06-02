#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i < 10; i++){
        int k=i;
        for(int j = i+1; j < 10; j++){
            if(arr[k]>arr[j]){
                k=j;
            }
        }
        if(k!=i) swap(arr[i],arr[k]);
    }
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    
}