#include<iostream>
using namespace std;

int IsSorted(int arr[], int n){
    if (n<=1)
    {
        return 1;
    }
   if (arr[0]>arr[1])
   {
    return -1;
   }
   else return (IsSorted(arr+1,n-1));
    
    return 1;
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

   cout<<IsSorted(arr,n);
    return 0;
}