#include <vits/stdc++.h>
using namespace std;
int Calculate(int, int);
int main()
{
    int m, n, result;
    cout << "Enter the value of m :";
    cin >> m;
    cout << "Enter the value of n :";
    cin >> n;
    result = Calculate(n, m);
    cout << result;
    return 0;
}
int Calculate(int n, int m)
{
    int i, sum = 0;
    for (i = m; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            sum = sum + i;
        }
    }
    return sum;
}