#include<iostream>
using namespace std;
int noOfWays(int n){
    
    if(n<0) return 0;
    if (n==0)
    {
        return 1;
    }
    
    else return noOfWays(n-1)+noOfWays(n-2);
}
int main(){
   int p,n;
   cout<<"Enter number n"<<endl;
   cin>>n;
   cout<<noOfWays(n);

    return 0;
}