// M1
#include <iostream>
#include <string>
using namespace std;

string ASCII_TO_Password(string str) {
    int n = str.length();
    int i = 0;
    string temp = "";
    string result = "";

    while (i < n) {
        temp += str[i];
        if (stoi(temp) == 32) {  // Compare with integer 32
            result += " ";
            temp = "";
        } else if (stoi(temp) >= 65 && stoi(temp) <= 95) {
            result+=stoi(temp)-65+'A';
            temp = "";
        } else if (stoi(temp) >= 97 && stoi(temp) <= 122) {
            result+=stoi(temp)-97+'a';
            temp = "";
        }
        i++;
    }

    return result;
}

int main() {
    string str = "801141011127311011511697";
    // cin >> str;
    cout << ASCII_TO_Password(str) << endl;
    return 0;
}


//m2

// #include <iostream>
// #include <string>
// using namespace std;

// string ASCII_TO_Password(string str) {
//     int n = str.length();
//     int i = 0;
//     string temp = "";
//     string result = "";

//     while (i < n) {
//         temp += str[i];

//         // Check if the accumulated substring represents a valid ASCII code
//         if (stoi(temp) >= 32 && stoi(temp) <= 122) {
//             result += char(stoi(temp)); // Convert ASCII value to character
//             temp = ""; // Clear the accumulated substring
//         }

//         i++;
//     }

//     return result;
// }

// int main() {
//     string str = "801141011127311011511697";
//     cout << ASCII_TO_Password(str) << endl;
//     return 0;
// }
