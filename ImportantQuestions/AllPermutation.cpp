#include<iostream>
#include<string>
using namespace std;

vector<string> GetPer(string str,int s, int e){
    vector<string>ans;
    string temp;
    // int s=0,e=str.size()-1;
    if(s==e){
        ans.push_back(temp);
    }else{
        for(int i=s;i<=e;i++){
            swap(str[i],str[s]);
            GetPer(str,s+1,e);
            swap(str[i],str[s]);
        }
    }
}

int main(){
    string str="abc";
    int s=0, e=str.size()-1;
    vector<string> v=GetPer(str,s,e);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}