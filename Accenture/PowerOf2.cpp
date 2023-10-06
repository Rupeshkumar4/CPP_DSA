#include <iostream>
using namespace std;
int maxPow(int a){
    int cnt=0;
    if(a&1){ return 0;
    }
    else {
        while(a>0){
            if(a%2==0) cnt++;
            a=a>>1;
        }
    }
    return cnt;
}

int maxExponents(int a, int b)
{
    int maxAns=a;
    int temp=0;
    int max=0;
    for(int i=a;i<=b;i++){
        temp=maxPow(i);
        if(temp>max){
            max=temp;
            maxAns=i;
        }
    }
    return maxAns;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << maxExponents(a, b);
    return 0;
}