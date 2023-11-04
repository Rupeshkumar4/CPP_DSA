#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int cnt=0;
    while(n>10){
        int temp=n;
        int sum=0;
        while(temp){
            sum+=temp%10;
            temp=temp/10;
        }
        cnt++;
        n=sum;
    }
    cout<<n<<" "<<cnt<<endl;
}