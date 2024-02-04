#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    string ans="";

    for(int i=0;i<str.size();i++){
        if(i%3==0 && i>=3){
            ans.push_back('.');
            ans.push_back(str[i]);
        }else{
            ans.push_back(str[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}