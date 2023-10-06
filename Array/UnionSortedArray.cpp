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
        int UnionArray[20]={0};
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                UnionArray[k]=arr1[i];
                i++;
                j++;
                k++;
            }
            else if(arr1[i]<arr2[j]){
                UnionArray[k++]=arr1[i];
                i++;
            }
            else{
                UnionArray[k++]=arr2[j];
                j++;
            }
        }

        while (i<n)
        {
            UnionArray[k++]=arr1[i++];
        }

        while (j<m)
        {
            UnionArray[k++]=arr2[j++];
        }
        
        cout<<"Union Array"<<endl;

        int s = sizeof(UnionArray) / sizeof(int);
        for (int l = 0; l < s; l++)
        {
            cout << UnionArray[l] << " ";
        }
        
        return 0;
}