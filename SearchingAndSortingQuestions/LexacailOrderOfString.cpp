// Example of insertion sort
#include <iostream>
using namespace std;

void LexicalSortings(char fruits[][60], int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if (strcmp(fruits[min_index],fruits[j])>0)
            {
                min_index=j;
            }
        }
            if(min_index != i){
                swap(fruits[i],fruits[min_index]);
            }
    }
    return;
}

int main(){
    char fruits[][60]={"apple","litchi", "coconut", "mango", "banana","orange","alpono","guava"};
    int n = sizeof(fruits)/sizeof(fruits[0]);

    for (int i = 0; i < n; i++)
    {
        cout <<fruits[i] <<endl;
    }
    
    LexicalSortings(fruits,n);
    cout<<"Printing results..."<<endl;
    for(int i =0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    
    return 0;
}