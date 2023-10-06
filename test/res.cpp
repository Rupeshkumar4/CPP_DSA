#include <iostream>
using namespace std;

int main(){
    string s="codify";
    int cnt=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        cnt=s[i]-'a'+1;
        cout<<cnt<<endl;
        ans=ans+cnt;
    }
    ans+=s.length();
    cout<<ans<<endl;
        return 0;
}