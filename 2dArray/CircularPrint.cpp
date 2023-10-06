#include<iostream>
using namespace std;

void CircularPrint(int arr[][3], int row, int col){

    int top=0,bottom=row-1;
    int left=0,right=col-1;

    while (top<=bottom && left<=right)
    {
        //For printing Left=>Right or Top
    for (int i = left; i <= right; i++)
    {
        cout<<arr[top][i]<<" ";
    }
    top++;
    cout<<endl;

    //For printing Top=>Bottom or Right
    for (int i = top; i <= bottom; i++)
    {
        cout<<arr[i][right]<<" ";
    }
    right--;
    cout<<endl;
    
    //For printing right =>Left or Bottom

    for (int i = right; i >= left; i--)
    {
        cout<<arr[bottom][i]<<" ";
    }
    bottom--;
    cout<<endl;

    //For Printing Bottom =>Top or left

    for (int i = bottom; i >= top; i--)
    {
        cout<<arr[i][left]<<" ";
    }
    left++;
    cout<<endl;
    
    }
    

    
}


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]=
    {{1,2,3},
    {4,5,6},
    {7,8,9}};
    CircularPrint(arr2,3,3);
}