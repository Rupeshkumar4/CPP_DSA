#include<iostream>
using namespace std;

int specificCount(int n, int m){
    int ans=0;
    if(n<m){
        for(int i=n;i<=m;i++){
            int flag = 1;
            int num =i;
            while(num>0){
                int ld=num%10;
                num/=10;
                if(ld==1 || ld==4 || ld==9){
                    continue;
                }else{
                    flag = 0;
                    break;
                }
            }
            if(flag==1) ans++;
        }
        return ans;
    }
    return -1;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<"SpecificCount "<<specificCount(n,m)<<endl;
    return 0;
}