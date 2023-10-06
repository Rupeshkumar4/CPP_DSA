#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin >> n;
    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int pos=0;
    int neg=n-1;

    while(pos<neg){
        while (arr[pos]<0)
        {
            pos++;
        }
        while (arr[neg]>=0)
        {
            neg--;
        }
        if (pos<neg)
        {
            swap(arr[pos],arr[neg]);
        }
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}