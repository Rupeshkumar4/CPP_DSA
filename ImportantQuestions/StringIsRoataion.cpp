#include <iostream>
#include <string>
using namespace std;

// int main(){
//     string str1="hello";
//     string str2="elloo";
//     if(str1.length() != str2.length()){
//         cout<<"No"<<endl;
//         return 0;
//     }

//     for(int i=1; i<str1.length(); i++){
//         string temp=str1.substr(i, i-str1.length()+1) + str1.substr(0,i);
//         // cout << temp << endl;
//         if(str2==temp){
//             cout<<"Yes"<<endl;
//             return 0;
//         }
//     }

//     cout<<"No"<<endl;
//     return 0;
// }

/// M2

/* Function checks if passed strings (str1
   and str2) are rotations of each other */
bool areRotations(string str1, string str2)
{
    /* Check if sizes of two strings are same */
    if (str1.length() != str2.length())
        return false;

    string temp = str1 + str1;
    return (temp.find(str2) != string::npos);
}

/* Driver code */
int main()
{
    string str1 = "AACD", str2 = "ACDA";

    // Function call
    if (areRotations(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}