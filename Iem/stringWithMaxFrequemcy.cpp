#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s="ir agfhgmm rupesh";
    vector<string>ans;
    string ss="";

    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            ans.push_back(ss);
            ss=" ";
        }
        else {
            ss+=s[i];
        }
    }

    string tem="";
    string final="";
    for(int i=0; i<ans.size(); i++){
        tem =ans[i];
        for(int j=0;j<tem.size(); j++){
            if(tem[j]==tem[j+1]){
                cout << tem << endl;
                // return;
                break;
            }
        }
    }
    return 0;
}