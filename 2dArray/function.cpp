#include<iostream>
using namespace std;

bool LinearSearch(int arr[3][3], int k){
    for(int row =0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==k) return 1;
        }
    }
    return 0;
}

void RowWiseSum(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<< sum<<" "<<endl;
    }
}

void LargestRowWiseSum(int arr[][3], int row, int col){
    int maxi=INT_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
}

void ColWiseSum(int arr[][3], int row, int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
        }
        cout<< sum<<" "<<endl;
    }
}

void TotalSum(int arr[][3], int row, int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
    }
     cout<< sum<<" "<<endl;
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<LinearSearch(arr,3)<<endl;
    cout<<LinearSearch(arr,0)<<endl;
    cout<<"RowWise Sum"<<endl;
    RowWiseSum(arr2,3,3);
    cout<<"ColWise Sum"<<endl;
    ColWiseSum(arr2,3,3);
    cout<<"Total Sum"<<endl;
    TotalSum(arr,3,3);
    cout<<"LargestRowWiseSum"<<endl;
    LargestRowWiseSum(arr,3,3);

}