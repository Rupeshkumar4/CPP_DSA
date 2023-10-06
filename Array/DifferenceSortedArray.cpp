#include <iostream>
using namespace std;

int main(){

    cout << "enter the sizes of arrays n and m" << endl; 
    int n,m;
    cin >> n>>m;
        int arr1[n];
        int arr2[m];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for(int i=0;i<m;i++){
            cin >> arr2[i];
        }
        int maxi=min(n,m);
        int DifferenceArray[20]={0};
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                i++;
                j++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                // arr1[i]<arr2[j]
                DifferenceArray[k++]=arr1[i++];
            }
        }
        cout<<"Difference Array"<<endl;

        int s = sizeof(DifferenceArray) / sizeof(int);
        for (int l = 0; l < s; l++)
        {
            cout << DifferenceArray[l] << " ";
        }
        
        return 0;
}