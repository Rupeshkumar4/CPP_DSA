#include <iostream>
#include<string>
using namespace std;

int main(){
    string str="hey thE i am ZoO live-in Delhi5";
    int key=2;
    string ans="";
    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            ans+=' ';
        }else if(str[i]>='0' && str[i]<='9'){
            ans+= to_string((str[i]-'0')+key);
        }else if(str[i]>='A' && str[i]<='Z'){
            ans+= ((str[i]-'A'+key)%26 +'A');
        }else{
            ans+= ((str[i]-'a'+key)%26 +'a');
        }
    }
    cout<<ans<<endl;
    return 0;
}