#include <iostream>
using namespace std;
#include<vector>

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8};
    int arr2[] = {1,2,3,4,5,6};

    int sum1=0;
    int sum2=0;

    int l1=sizeof(arr1)/sizeof(arr1[0]);
    int l2=sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0;i<l1;i++){
        sum1+=arr1[i];
    }

    for(int i=0;i<l2;i++){
        sum2+=arr2[i];
    }
    cout<<sum1*sum2<<endl;

    return 0;
}