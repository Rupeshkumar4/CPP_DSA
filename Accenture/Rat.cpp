#include <iostream>
using namespace std;
int calculate(int r, int unit, int arr[], int n)
{
    int count = 0;
    int noOfHouse = 0;
    int foodNeed = r * unit;
    for (int i = 0; i < n; i++)
    {
        if (foodNeed > count)
        {
            count += arr[i];
            noOfHouse++;
        }
    }
    return noOfHouse;
}
int main()
{
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate(r, unit, arr, n);
    return 0;
}