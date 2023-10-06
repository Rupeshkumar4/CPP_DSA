#include <iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

string Help(string str){
    int n=str.size();
    set<char>st={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
    int i=0;
    if(str[0]=='?'){
        char c=str[1];
        if(st.find(c)==st.end()){
            str[0]='a';
        }else{
            str[0]=(c+1)%26;
        }

    }
    if(str[n-1]=='?'){
        char c=str[n-2];
        if(st.find(c)==st.end()){
            str[0]='a';
        }else{
            str[0]=(c+1)%26;
        }

    }

    for(i=1;i<n-1;i++){
        if(str[i]=='?'){
            char next=str[i+1];
            char prev=str[i-1];
            char mid =(next+prev+5)%26;
            str[i]=mid;

        }
    }
    return str;
}

int main(){
    string str="???abc?e??cy?";
    cout<<Help(str)<<endl;
    return 0;
}