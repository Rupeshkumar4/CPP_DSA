#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "";
    getline(cin, str);
    int n = str.size();
    string temp = "";

    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            sort(temp.begin(), temp.end());
            temp[0] = toupper(temp[0]);
            // str.replace(0, i, temp);
            str=temp+' '+str;
            str[i+1] = toupper(str[i+1]); // Capitalize the character after space
            break;
        } else {
            temp.push_back(tolower(str[i]));
            str.erase(i, 1);
            i--; // Decrement i to account for the erased character
        }
    }

    cout << str << endl;
}
