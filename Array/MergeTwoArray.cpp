#include <iostream>
using namespace std;

void mergeArray(int array1[], int array2[], int n, int m){
    int i=0,j=0,k=0;
    int ans[n+m];

    while (i<n && j<m)
    {
        if (array1[i]<array2[j])
        {
            ans[k++] = array1[i++];
        }
        else{
            ans[k++] = array2[j++];
        }
        
    }
    while (i<n)
    {
        ans[k++] = array1[i++];
    }

    while (j<m)
    {
        ans[k++] = array2[j++];
    }
    
    for(int a=0; a<m+n; a++){
        cout<<ans[a]<<" ";
    }
}

int main(){
int n,m;
cout<<"Enter size of m and size of n"<<endl;
cin>>n>>m;
int arr1[n], arr2[m];

for (int i = 0; i < n; i++)
{
    cin>>arr1[i];
}

for (int i = 0; i < m; i++)
{
    cin>>arr2[i];
}

mergeArray(arr1,arr2,n,m);



    return 0;
}