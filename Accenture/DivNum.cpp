#include<iostream>
using namespace std;

int GetDiv(int n, int m){
    if(n%m==0) return n;
    int r = n%m;
    int d1 = r;
    int d2 = m-r;
    int mini = min(d1,d2);
    if(mini==d1) return n-d1;
    else return n+d2;
    
}
int main(){
    int n,m;
    cin >> n >> m;
    cout<<"Diverser is "<<GetDiv(n,m)<<endl;
    return 0;
}