// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   //Insertion
//   for(int i=0;i<n;i++){
//       int mini=arr[i];
//       int j=i-1;
//       while(j>=0 && mini<arr[j]){
//           arr[j+1]=arr[j];
//           j--;
//       }
//       arr[j+1]=mini;
//   }

// Bubble
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }
// Selection

for(int i=0;i<n;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(arr[mini]>arr[j]){
            mini = j;
        }
    }
    swap(arr[mini],arr[i]);
}
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}