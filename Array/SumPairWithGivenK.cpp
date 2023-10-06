#include <iostream>
using namespace std;

void pairSum(int arr[], int sum){
    int n = sizeof(arr)/sizeof(arr[0]);
    int H[10];
    for(int i = 0; i < 10; i++){
        if (H[sum-arr[i]]==1)
        {
            cout << arr[i] << " " << sum-arr[i] << endl;
        }
        H[arr[i]]++;
    }
}

int main(){
    cout<<"enter array size"<<endl;
    int n;
    cin >> n;
    int arr[n];

    cout<<"enter array elements"<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<"Enter sum <<"<<endl;
    int sum;
    cin >> sum;

    cout<<"Printing answer"<<endl;

    pairSum(arr, sum);

    return 0;
}