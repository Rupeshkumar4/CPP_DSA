#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str = "1232@#$56785";
    vector<int> even;
    vector<int> odd;
    int count = 0;
    string ans = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '@' || str[i] == '#' || str[i] == '$')
        {
            count++;
        }
        else if (isdigit(str[i]))
        {
            int digit = str[i] - '0';
            if (digit % 2 == 0)
            {
                even.push_back(digit);
            }
            else
            {
                odd.push_back(digit);
            }
        }
    }

    int e = 0, o = 0;

    if (count % 2 == 0)
    {
        while (e < even.size() && o < odd.size())
        {
            ans += to_string(even[e++]);
            ans += to_string(odd[o++]);
        }
    }
    else
    {
        while (e < even.size() && o < odd.size())
        {
            ans += to_string(odd[o++]);
            ans += to_string(even[e++]);
        }
    }

    // Left Digits
    while (e < even.size())
    {
        ans += to_string(even[e++]);
    }
    while (o < odd.size())
    {
        ans += to_string(odd[o++]);
    }

    cout << ans << endl;
    return 0;
}