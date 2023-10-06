#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int Help(string str, vector<string> v){
    // string str1(str);
    int cnt=0;
    for(int i=0;i<str.size();i++){
        string str1(str);
        string temp=str1.erase(i,1);
        for(int i=0;i<v.size();i++){
            auto it=find(v.begin(),v.end(),temp);
            
            if( it!=v.end()){
                cnt++;
                v[it-v.begin()]="";
            }
        }
    }
    return cnt;
}

int main(){
    string str="abcde";
    vector<string> v = { "abcd", "abc", "bcde", "bcd" };
    cout<<Help(str,v);
    return 0;

}