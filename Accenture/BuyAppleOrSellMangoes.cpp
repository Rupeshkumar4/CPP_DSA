#include<iostream>
using namespace std;

int BlanceBasket(int apple,int mango, int balance){
    if(apple>mango){
        balance=balance-(apple-mango);
        return balance;
    }else if(apple<mango){
        balance=balance-(mango-apple);
        return balance;
    }
    return balance;
}

int main(){
    int a,m,am;
    cin >> a >> m >>am;
    cout<<"Balanced left Amount "<<BlanceBasket(a,m,am)<<endl;
    return 0;
}