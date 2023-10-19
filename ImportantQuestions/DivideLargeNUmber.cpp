#include<iostream>
#include<string>
using namespace std;

int Reminder(string num, string div){
    int carry=0;
    for(int i=0;i<num.size();i=i+div.size()){
        carry= pow(10,div.size())*carry+stoi(num.substr(i,div.size()));
        carry=carry%(stoi(div));
    }
    return carry;
}

int main(){
    string num="1445";
    string div="12";
    cout<<Reminder(num,div);
}