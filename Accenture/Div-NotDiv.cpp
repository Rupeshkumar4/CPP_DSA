#include <iostream>

using namespace std;

int differenceofSum(int n, int m)
{
    int divSum=0,notDivSum=0;
    for(int i=1; i<=m; i++){
        if(i%n==0) divSum+=i;
        else notDivSum+=i;
    }
    return abs(divSum-notDivSum);
}

int main()
{
    int n, m;
    int result;
    cin >> n;
    cin >> m;
    result = differenceofSum(n, m);
    cout << result;
    return 0;
}