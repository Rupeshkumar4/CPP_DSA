#include<iostream>
#include<string>
using namespace std;

string  Sum(string str1, string str2){
    int c=0;
    int i=str1.size()-1,j=str2.size()-1;
    
    string ans="";

    while(i>=00 || j>=0 || c>0){
        int sum=0;
        if(i>=0){
            sum+= (str1[i--]-'0');
        }
        if(j>=0){
            sum+= (str2[j--]-'0');
        }
        // cout<<sum<<endl;
        sum+=c;
        c=sum/10;
        // cout<<c<<endl;
        sum=sum%10;
        // cout<<ans<<endl;
        ans=to_string(sum)+ans;
    }
    return ans;
}

int main(){
    cout<<"Enter number 1=>";
    string str1,str2;
    cin>>str1;
    cout<<"Enter number 2=>";
    cin>>str2;
    cout<<Sum(str1,str2);
    return 0;
}