#include <iostream>
#include<map>
using namespace std;
char maxOccurringChar(string str) {
    char ans;
    int max=0;
    map<char,int>mp;
    for(int i = 0; i < str.length(); i++){
        mp[str[i]]++;
    }

    for(auto it:mp){
        if(it.second > max){
            max=it.second;
            ans=it.first;
        }
    }
    return ans;
}

int main() {
   string str = "takeuforward";
   cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
}