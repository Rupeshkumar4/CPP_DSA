#include <stdio.h>

int main(){
    int n;
    printf("Enter your table choice\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    int sum = 5*(2*n+9*n);
    printf("%d\n",sum);

    return 0;

}