#include<iostream>
using namespace std;

void print(int arr[], int n){
   cout<<"Array size=>"<<n<<endl;

   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";

   }
   cout<<endl;
}

int LinearSearch(int arr[], int n, int key){
   print(arr,n);
   if (n<0)
   {
    return -1;
   }
   if (key==arr[n-1])
   {
    return 1;
   }
   else return LinearSearch(arr, n-1, key);

   // if (key==arr[0])
   // {
   //  return 1;
   // }
   // else return LinearSearch(arr+1,n-1,key);

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

   cout<<LinearSearch(arr,n,3);
    return 0;
}