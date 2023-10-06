#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }

        else if (arr[i] > max)
        {
            max = arr[i];
        }
        
        
    }
    
    cout << "The elements are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    cout<<max<<" "<<min<<endl;
    return 0;
}