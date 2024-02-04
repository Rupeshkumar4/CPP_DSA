#include <iostream>
#include<string>
#include<map>
using namespace std;
int factorial(int n){
    int product=1;
    for(int i=1; i<=n; i++){
        product *= i;
    }
    return product;
}

int main(){
    string str="hello";
    int n=str.size();
    unordered_map<char,int>ump;
    for(int i=0; i<n; i++){
        ump[str[i]]++;
    }
    int fact= factorial(n);

    for( auto it:ump){
        fact = fact/factorial(it.second);
    }
    cout<<fact<<endl;
    
}