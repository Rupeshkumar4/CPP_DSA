#include <iostream>
#include<map>
#include<set>
using namespace std;
int FinndAutoCount(string &n)
{
    unordered_map<int,int>mp;
    set<char>st;
    
    for(int i=0;i<n.length();i++){
        st.insert(n[i]);
        mp[n[i]-'0']++;
    }

    int sz = n.length();

    for(int i=0;i<sz;i++){
        if(mp[i] != n[i]-'0') return 0;
    }

    return st.size();
}
int main()
{
    string n;
    cin >> n;
    cout << FinndAutoCount(n);
    return 0;
}