#include <iostream>
#include <string>
using namespace std;

int page(int fp, int sp,int lp){
    vector<int> v;
    v.push_back(fp);
    v.push_back(sp);

    for(int i=2;i<=lp;i++){
        v.push_back(v[i-1]+v[i-2]);
    }
    return v[lp-1];
}

int main(){
    int firstPage, secondPage,lastPage;
    cin >> firstPage >> secondPage >> lastPage;
    cout<<page(firstPage,secondPage,lastPage);

    return 0;
}