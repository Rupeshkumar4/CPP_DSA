#include<iostream>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    else return n*fact(n-1);
}
int main(){
   int p,n;
   cout<<"Enter number n"<<endl;
   cin>>n;
   cout<<fact(n);
    return 0;
}