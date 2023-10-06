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
        // cout<<temp<<endl;
        auto it=find(v.begin(),v.end(),temp);
        if( it!=v.end()){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string str="abcde";
    vector<string> v = { "abcd", "bcde", "bcde", "abce" };
    cout<<Help(str,v);
    return 0;

}