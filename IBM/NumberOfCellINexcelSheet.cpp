#include<iostream>
#include<string>
using namespace std;

int main(){
    string str="";
    cin >> str;
    int n = str.size();
    int i=1;
    string str1;
    while(str[i] !=':'){
        str1 += str[i];
        i++;
    }
    string str2;
    int digit1 = abs(str[0]-str[i+1])+1;
    i++;
    i++;
    while(i<n){
        str2 += str[i];
        i++;
    }
    
    int digit2 = abs(stoi(str1)-stoi(str2))+1;
    cout<<digit1*digit2<<endl;
    return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "";
//     cin >> str;
//     int n = str.size();
//     int i = 1;
//     string str1;
//     while (str[i] != ':') {
//         str1 += str[i];
//         i++;
//     }
//     string str2;
//     i++;
//     while (i < n) {
//         str2 += str[i];
//         i++;
//     }

//     int colStart = str[0] - 'A' + 1;  // Convert character to integer column index
//     int colEnd = str2[0] - 'A' + 1;
//     int rowStart = stoi(str1);
//     int rowEnd = stoi(str2.substr(1));  // Extract numeric part of str2

//     int numCols = abs(colStart - colEnd) + 1;  // Add 1 to include the end column
//     int numRows = abs(rowStart - rowEnd) + 1;  // Add 1 to include the end row

//     cout << numCols * numRows << endl;
//     return 0;
// }
