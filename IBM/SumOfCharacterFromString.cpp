#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int Sum(string str){
    int sum=0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum+= (str[i])-'0';
        }
    }
    return sum;
}

int main(){
    string str="123gfhgf^7";
    cout<<Sum(str)<<endl;
    return 0;
}