// // M1
// #include <iostream>
// #include <string>
// using namespace std;

// string ASCII_TO_Password(string str) {
//     int n = str.length();
//     int i = 0;
//     string result = "";

//     while (i < n){
//         if(  i<n-2 &&  stoi(str.substr(i, 2))>=65 && stoi(str.substr(i, 2))<=90){
//             result += stoi(str.substr(i, 2))-65+'A';
//             i+=2;
//         }
//         else if( i<n-2 && stoi(str.substr(i, 2))>=97 && stoi(str.substr(i,2))<=122){
//             result += stoi(str.substr(i, 2))-97+'i';
//             i+=2;
//         }
//         else if(i<n-3 && stoi(str.substr(i, 3))>=65 && stoi(str.substr(i,3))<=90){
//             result += stoi(str.substr(i, 3))-65+'A';
//             i+=3;
//         }
//         else if(i<n-3 && stoi(str.substr(i, 3))>=97 && stoi(str.substr(i,3))<=122){
//             result += stoi(str.substr(i,3))-97+'a';
//             i+=3;
//         }
//         // else{
//         //     result+=str[i];
//         //     i++;
//         // }
//     }
//     return result;
// }




#include <iostream>
#include <string>
using namespace std;

string ASCII_TO_Password(string str) {
    int n = str.length();
    int i = 0;
    string result = "";

    while (i < n) {
        if (i < n - 2 && stoi(str.substr(i, 2)) >= 65 && stoi(str.substr(i, 2)) <= 90) {
            result += (stoi(str.substr(i, 2)) - 65 + 'A');
            // result += 'i';
            i += 2;
        } else if (i < n - 2 && stoi(str.substr(i, 2)) >= 97 && stoi(str.substr(i, 2)) <= 122) {
            result += (stoi(str.substr(i, 2)) - 97 + 'a');
            i += 2;
        } 
        else if (i < n - 3 && stoi(str.substr(i, 3)) >= 97 && stoi(str.substr(i, 3)) <= 122) {
            result +=(stoi(str.substr(i, 3)) - 97 + 'a');
            i += 3;
        } 
        // else if (i < n - 1 && stoi(str.substr(i, 2)) == 97) {
        //     result += "a";
        //     i += 2;
        // }
         else {
            // result += str[i];
            i++;
        }
    }
    return result;
}

int main() {
    string str = "801141011127311011511697";
    cout << ASCII_TO_Password(str) << endl;
    return 0;
}






// int main() {
//     string str = "801141011127311011511697";
//     // cin >> str;
//     cout << ASCII_TO_Password(str) << endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// string ASCII_TO_Password(string str) {
//     int n = str.length();
//     int i = 0;
//     string result = "";

//     while (i < n) {
//         if (i < n - 1 && stoi(str.substr(i, 2)) >= 65 && stoi(str.substr(i, 2)) <= 122) {
//             result += static_cast<char>(stoi(str.substr(i, 2)) - 65 + 'A');
//             i += 2;  // Move index by 2 characters
//         } else if (i < n - 1 && stoi(str.substr(i, 2)) >= 97 && stoi(str.substr(i, 2)) <= 122) {
//             result += static_cast<char>(stoi(str.substr(i, 2)) - 97 + 'a');
//             i += 2;  // Move index by 2 characters
//         } else if (i < n - 2 && stoi(str.substr(i, 3)) >= 65 && stoi(str.substr(i, 3)) <= 122) {
//             result += static_cast<char>(stoi(str.substr(i, 3)) - 65 + 'A');
//             i += 3;  // Move index by 3 characters
//         } else if (i < n - 2 && stoi(str.substr(i, 3)) >= 97 && stoi(str.substr(i, 3)) <= 122) {
//             result += static_cast<char>(stoi(str.substr(i, 3)) - 97 + 'a');
//             i += 3;  // Move index by 3 characters
//         } else {
//             // If none of the conditions are satisfied, simply append the character as is
//             result += str[i];
//             i++;  // Move index by 1 character
//         }
//     }
//     return result;
// }

// int main() {
//     string str = "801141011127311011511697";
//     cout << ASCII_TO_Password(str) << endl;
//     return 0;
// }
