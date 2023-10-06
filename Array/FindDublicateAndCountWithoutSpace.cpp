#include <iostream>
using namespace std;

void findDublicate(int arr[], int n)
{
    for(int i=0; i < n-1; i++){
        if(arr[i] == arr[i+1]){
            int j= i+1;
            while (arr[i] == arr[j] )  j++;
            cout<<"element"<<arr[i]<<" "<<"repeted"<<" "<<abs(j-i)<<endl;
            i=j-1;
        }
    }
}
int main() 
{

    cout << "size of array" << endl;
    int n;
    cin >> n;
    int  arr[n];
    cout<<"Array elements"<< endl;
    for (int i = 0; i < n; i++) {
        cin >>arr[i];
    }

    findDublicate(arr,n);

    return 0;
}