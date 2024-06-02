#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,4,5,6,12,34,45,50,78,100};

    int l=0,h=9;
    int key;
    cin >> key;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(arr[mid]==key){
            cout<<arr[mid];
            break;
        }else if(arr[mid]>key){
            h=mid-1;
        }else{
            l=mid;
        }
    }

}