#include <iostream>
#include <string>
using namespace std;

string removeDuplicateLetters(string s)
{
    string ans = "";
    vector<bool> map(26, false);
    for (int i = 0; i < s.size(); i++)
    {
        if (map[s[i]] == false)
        {
            ans += s[i];
            map[s[i]] = true;
        }
    }
    return ans;
}
int main()
{
    string str = "rruup";
    cout << "Original String: " << str << endl
         << "After removing duplicates: "
         << removeDuplicateLetters(str) << endl;
    return 0;
}