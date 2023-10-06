// Example of Bubble sort
//T(O(n^2));
//S(1)
#include<iostream>
using namespace std;

void BubbleSortZero(int arr[], int n){
    for (int i = n-1; i >= 0; i--)
    {
        int j=0;
        bool flag = false;
        while (j != i)
        {
            if(arr[j]==0 && arr[j+1]!=0) {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
            j++;
        }
        if(flag==false) break; // for case elements sort like 321300 bt iterations still remaining.
    }
}


// T=>O(n)
//S=>O(n)
void BubbleSortUsingSpace(int arr[], int n){
    int nonzeros[n],k=0;
    int zeros[n],m=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zeros[k++] =0;
        }
        else{
            nonzeros[m++] =arr[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        arr[i]=nonzeros[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[m+i]=zeros[i];
    }
}

int main(){
    cout << "Enter size of Array" << endl;
    int n;
    cin >> n;

    int arr[n];

    cout << "Enter element<<" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }

    cout<<"withOutpace wala"<<endl;
    BubbleSortZero(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl<<"with Space wala"<<endl;
    BubbleSortUsingSpace(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}