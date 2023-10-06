#include<iostream>
using namespace std;

int BinarySearch(int arr[], int key, int s, int e){
    int mid;
    if(s>e){
        return -1;
    }
     mid =  (e+s)/2;

    if (arr[mid]==key)
    {
        // return arr[mid];
        return mid;
    }
    if (arr[mid]<key)
    {
        return BinarySearch(arr,key,mid+1,e);
    }
    else{
        return BinarySearch(arr,key,s,mid-1);
    }
    return -1;
}

int main(){
   int n;
   cout<<"Enter number n"<<endl;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
   {
     cout<<"Enter value of arr["<<i<<"]=>"<<endl;
     cin>>arr[i];
   }

   cout<<BinarySearch(arr,3,0,n);
    return 0;
}