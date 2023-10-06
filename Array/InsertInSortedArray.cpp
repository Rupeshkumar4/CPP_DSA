#include <iostream>
using namespace std;
void InsertS(int x, int  arr[], int n){
   int len = n-1;
    while (x<arr[len])
    {   
        arr[len+1] = arr[len];
        len--;
    }
    arr[len+1] = x;
    
}
int main(){
    int  arr[10];
    int n;
    cout <<"Enter number"<<endl;
    cin >> n;
    // arr[n];
    cout <<"Number of Array"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"number to insert"<<endl;
    int x;
    cin >> x;
    InsertS(x, arr,n);
    for (int i = 0; i < n+1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}