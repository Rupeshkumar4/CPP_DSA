#include <iostream>
#include <string>
using namespace std;

string LongestPalindromic(string str) {
    string LPs = "";
    int n = str.size();
    for (int i = 0; i < n; i++) {
        // For Odd Length
        int low = i;
        int high = i;
        while (low >= 0 && high < n && str[low] == str[high]) {
            low--;
            high++;
        }
        string temp = str.substr(low + 1, high - low - 1);
        if (temp.size() > LPs.size()) {
            LPs = temp;
        }
        // For Even Length
        low = i;
        high = i + 1;
        while (low >= 0 && high < n && str[low] == str[high]) {
            low--;
            high++;
        }
        temp = str.substr(low + 1, high - low - 1);
        if (temp.size() > LPs.size()) {
            LPs = temp;
        }
    }
    return LPs;
}

int main() {
    string str = "abaaabaa";
    cout << LongestPalindromic(str) << endl;
    return 0;
}
