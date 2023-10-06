#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int LargeSmallSum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> evnPos;
    vector<int>oddPos;

    for(int i=0;i<n;i++){
        if(i&1) oddPos.push_back(arr[i]);
        else evnPos.push_back(arr[i]);
    }

    sort(evnPos.begin(), evnPos.end());
    sort(oddPos.begin(), oddPos.end());
    int SecondLargestEven=evnPos[evnPos.size()-2];
    int SecondsmallestOdd = oddPos[1];
    return (SecondLargestEven+SecondsmallestOdd);
}

int main()
{
    vector<int> arr = {3, 2, 1, 7, 5, 4};

    int result = LargeSmallSum(arr);
    cout << result << endl;

    return 0;
}