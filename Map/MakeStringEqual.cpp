#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool IsPossible(vector<string> &str){
    unordered_map<char, int>m;

    for(auto it:str){  //for each string in str
        for(auto c:it){ //for each character in it2 of str
            m[c]++;
        }
    }
    int n = str.size();
    for(auto ele:m){
        if(ele.second%n != 0){
            return false;
        }
    }
    return true;
}

bool isPossible(vector<string> &str) {
    unordered_map<char, int> m;

    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < str[i].size(); j++) {
            m[str[i][j]]++;
        }
    }


    int n = str.size();
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second % n != 0) {
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    vector<string>str(n);
    cout<<"Enter string "<<endl;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<(IsPossible(str)?"Yes":"No")<<endl;
    return 0;
}