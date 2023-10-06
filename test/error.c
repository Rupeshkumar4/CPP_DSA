#include <stdio.h>

int main(){
    void fun();
    // printf("%d",fun();
    fun();
}

void fun(){
    int i=10;
    if(i<10) return 2;
    return 3;
}