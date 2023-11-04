#include <iostream>
using namespace std;

#include<string>
#include<string>

string Mul(string str1, string str2){
    int c=0;
    int l=str1.size()-1;
    int m=str2.size()-1;
    string mul="";

    while(l>=0 || m>=0 || c>0){
        int temp=1;
        if(l>=0){
            temp = temp*(str1[l]-'0');
            l--;
        }
        if(m>=0){
            temp = temp*(str2[m]-'0');
            m--;
        }
        temp+=c;
        c=temp/10;
        temp=temp%10;

        mul= to_string(temp)+mul;
    }
    return mul;
}

int main(){
    string str1="25";
    string str2="20";

    cout<<Mul(str1,str2)<<endl;
    return 0;
}
