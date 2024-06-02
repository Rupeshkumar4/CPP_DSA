#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    for(int i=1; i<10; i++){
        int min = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>min){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=min;
    }
    for(int i=0; i<10; i++){
        cout << arr[i] <<" ";
    }
}