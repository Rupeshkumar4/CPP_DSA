#include <iostream>
using namespace std;
int findCount(int n, int arr[], int num, int diff)
{
    int ans=-1;
    for(int i=0; i<n; i++){
        if(abs(arr[i]-num)<=diff) ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int diff;
    cin >> diff;
    cout << findCount(n, arr, num, diff);
}