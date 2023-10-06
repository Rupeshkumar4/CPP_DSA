#include <iostream>
#include <string>

using namespace std;

int main(){
    int low,high;
    cin>>low>>high;
    string n=to_string(low);
    string m=to_string(high);
    int maxi=max(n.size(),m.size());
    string ans="";
    for(int i=low;i<=high;i++){
        string str=to_string(i);
        while(str.size()<maxi){
            str='0'+str;
        }
        ans+=str+' ';
    }
    cout<<ans<<endl;
    return 0;
}