#include <iostream>
#include <set>
using namespace std;

int main(){
    int n=10, m=15;
    int ans=0;
    for(int i=n;i<=m;i++){
        set<char>st;
        string temp= to_string(i);
        for(int j=0;j<temp.size();j++){
            st.insert(temp[j]);
        }
        if(st.size()==temp.size()){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}