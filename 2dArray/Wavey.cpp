#include<iostream>
using namespace std;

void wavey(int arr[][3], int row, int col){
    for(int Col=0;Col<col;Col++){
        if((Col&1)==0){
            //Even Coloumn Up => Down
            for (int i = 0; i < row; i++)
            {
                cout<<arr[i][Col]<<" ";
            } 
            cout<<endl;
        }
        else{
            //Odd Coloumn Down => Up
            for (int i = row-1; i >= 0; i--)
            {
                cout<<arr[i][Col]<<" ";
            } 
            cout<<endl;
        }
    }
}


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    wavey(arr2,3,3);
}