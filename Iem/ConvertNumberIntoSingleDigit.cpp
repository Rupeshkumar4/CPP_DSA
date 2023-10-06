#include <iostream>
using namespace std;

int main(){
    int num=25;

    if(num>=0 && num<=9){
        cout<<"0";
    }
    int cnt=0;
    
    while(num>=10){
        int pr = 1;

        while(num > 0)
        {
            pr = pr * num % 10;
            num /= 10;
        }
        cnt++;
        num = pr;
    }
    cout<<cnt<<endl;
}