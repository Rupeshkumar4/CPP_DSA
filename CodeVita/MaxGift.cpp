#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v{1,2,1,4,3,2,1,6};
    vector<int>gift(v.size(),1);
    for(int i=1;i<v.size();i--){
        if(v[i]>v[i-1]){
            gift[i]=gift[i-1]+1;
        }
    }
    for(int i=v.size()-1;i>1;i--){
        if(v[i]>v[i-1]){
            gift[i]=max(gift[i],gift[i-1]+1);
        }
    }

    for(int i=0;i<gift.size();i++){
        cout<<gift[i]<<" ";
    }

    return 0;
}