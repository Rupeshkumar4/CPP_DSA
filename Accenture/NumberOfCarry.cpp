#include <iostream>

using namespace std;

int numberOfCarries(int num1, int num2)
{
    int count=0,carry=0;
    while(num1>0 && num2>0){
        int ld1=num1%10;
        int ld2=num2%10;
        int sum = ld1+ld2+carry;
        if(sum>=10){
            carry=sum/10;
            count++;
        }
        num1=num1/10;
        num2=num2/10;
    }
    while(num1>0){
        int ld1=num1%10;
        int sum = ld1+carry;
        if(sum>=10){
            carry=sum/10;
            count++;
        }
        num1=num1/10;
    }
    while(num2>0){
        int ld2=num2%10;
        int sum = ld2+carry;
        if(sum>=10){
            carry=sum/10;
            count++;
        }
        num2=num2/10;
    }

return count;

}

int main()
{
    int x, y, a;
    cin >> x >> y;
    a = numberOfCarries(x, y);
    cout << a;
    return 0;
}