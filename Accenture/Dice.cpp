#include <iostream>
using namespace std;

int Cal(int n){
    int cnt=0;
    for(int i = 1; i <=6;i++){
        for(int j=1;j<=6;j++){
            if((i+j)==n){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout<<"Proability=>"<<Cal(n)<<"/36"<<endl;
    return 0;
}