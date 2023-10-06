#include <iostream>
using namespace std;

int main(){
    string str="";
    cin >> str;
     string ans="";
    for(int i = 0; i <str.size(); i++){
       
        if(str[i]>='A' && str[i]<='Z'){
            cout << ans <<endl;
            ans="";
            ans += tolower(str[i]);
        }
        else{
            ans += toupper(str[i]);
        }
    }
    // cout<<endl;
    cout<<ans;
    return 0;
}