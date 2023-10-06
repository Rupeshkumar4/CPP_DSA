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
        int intersectionsArray[20]={0};
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                intersectionsArray[k]=arr1[i];
                i++;
                j++;
                k++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        cout<<"intersections Array"<<endl;

        int s = sizeof(intersectionsArray) / sizeof(int);
        for (int l = 0; l < s; l++)
        {
            cout << intersectionsArray[l] << " ";
        }
        
        return 0;
}