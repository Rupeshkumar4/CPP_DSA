#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str="apolikujmnhytgbvfredcxswqaz";
    string str2="Abcda";
    transform(str2.begin(), str2.end(),str2.begin(),::tolower);
    int n=str.size();

    string ans="";
    for(int i=0;i<n;i++){
        if(str2.find(str[i]) != -1){
            ans+=str[i];
            str[i]='#';
        }
    }
    if(ans.size() != str2.size()){
        cout<<"Not enough"<<endl;
    }
    else {
        cout<<ans<<endl;
    }
    return 0;
}