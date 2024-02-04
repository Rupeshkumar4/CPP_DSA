#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool isArmstrong(string str){
    int sum=0;
    int num=stoi(str);
    for(int i=0; i<str.length();i++) {
        sum+= pow((str[i]-'0'),str.size());
    }
    return sum==num;

}

int main(){
    int n=153;
    // string str=to_string(n);
    string str2=to_string(n);
    // // isArmstrong(str);
    // string ans="";
    // if(isArmstrong(str)){
    //     for(int i=0; i<str.size(); i+=2){
    //         ans+=str[i];
    //     }
    // }else{
    //     for(int i=1; i<str.size(); i+=2){
    //         ans+=str[i];
    //     }
    // }
    // cout<<ans<<endl;

    int ans2=0;
    if(isArmstrong(str2)){
        while(n >0){
            if((n%10)%2==0){
                ans2+=n%10;
            }
            n=n/10;
        }
    }
    else{
        while(n >0){
            if((n%10)/2 != 0){
                ans2+=n%10;
            }
            n=n/10;
        }
    }
    cout<<ans2<<endl;
    return 0;
}