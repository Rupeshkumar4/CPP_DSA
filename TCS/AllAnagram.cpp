#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string s="";
    cout<<"Enter string: ";
    getline(cin, s);

    int n=s.size();
    vector<string> v;

    string temp="";

    for(int i=0;i<n;i++){
        if(s[i] !=' '){
            temp+=s[i];
        }
        else{
            sort(temp.begin(), temp.end());
            v.push_back(temp);
            temp="";
        }
    }
    sort(temp.begin(), temp.end());
    v.push_back(temp);

    int cnt=0;

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
    }
cout<<cnt;
return 0;
}