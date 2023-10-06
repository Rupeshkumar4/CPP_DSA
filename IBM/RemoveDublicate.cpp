#include <iostream>
using namespace std;

int RemoveDublicate(vector<int>&v){
    int i=0;
    for(int j=1;j<v.size();j++){
        if(v[j] !=v[i]){
            i++;
            v[i] = v[j];
        }
    }
    return i+1;
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Removed Elements: ";
    int n=RemoveDublicate(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}