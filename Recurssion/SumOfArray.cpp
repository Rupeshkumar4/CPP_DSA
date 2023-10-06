#include<iostream>
using namespace std;

int SumOfArray(int arr[], int n){
    if(n>0){
       return arr[n-1]+ SumOfArray(arr,n-1);
    }

    return 0;
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
   cout<<SumOfArray(arr,n);
    return 0;
}