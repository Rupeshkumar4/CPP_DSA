#include<iostream>
using namespace std;
void swapIt(string &s, int st,int e){
    cout<<"Called for=> "<<s<<" "<<st<<" "<<e<<" "<<endl;
    if(st>e){
        return ;
    }
    if (st<e)
    {
        swap(s[st],s[e]);
    }
        
     return swapIt(s,++st,--e);
}


int main(){
    string s="";
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    int n = s.size();
    int st=0,e=n-1;
    // for single pointer e= n-st-1;
    // int st=0,e=n-st-1;
    cout<<s<<endl;
    swapIt(s,st,e);
    cout<<s<<endl;
    return 0;
}