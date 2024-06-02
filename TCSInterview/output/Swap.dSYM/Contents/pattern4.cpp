#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=i;k<n;k++){
            printf("*");
        }
        
        for(int j=i;j<n-1;j++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}