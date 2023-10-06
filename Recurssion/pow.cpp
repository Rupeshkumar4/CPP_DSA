#include<iostream>
using namespace std;
int pow(int n, int p){
    if(p==0) return 1;
    else return n*pow(n,p-1);
}
int main(){
   int p,n;
   cout<<"Enter number n and power p"<<endl;
   cin>>n>>p;
   cout<<pow(n,p);
    return 0;
}