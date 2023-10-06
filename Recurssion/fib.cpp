#include<iostream>
using namespace std;
int fib(int n){
    
    if(n<=1) return n;
    else return fib(n-1)+fib(n-2);
}
int main(){
   int p,n;
   cout<<"Enter number n"<<endl;
   cin>>n;
//    cout<<fib(n-1)+fib(n-2);
for (int i = 0; i < n; i++)
{
    cout<<fib(n)<<endl;
}

    return 0;
}