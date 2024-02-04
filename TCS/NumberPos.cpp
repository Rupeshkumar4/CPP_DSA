#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    map<int, int>mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]] = i;
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int pos = abs(mp[v[i]] - i);
        if (pos > 0)
        {
            sum += v[i] * pos;
        }
        else
        {
            sum += v[i];
        }
    }
    cout << sum << endl;
}