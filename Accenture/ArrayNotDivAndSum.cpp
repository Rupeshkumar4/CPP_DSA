#include <iostream>
#include <vector>
using namespace std;

int notDivSum(vector<int>v, int n, int k){
        int num=1;
        int sum=0;
        int sz=k;
        bool flag;
        while(sz>0){
            for(int i=0; i<n; i++){
                flag=1; 
                if(num%v[i]==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                sum+=num;
                sz--;
            }
            num++;
        }
        return sum;

}

int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;

    int ans=notDivSum(v,n,k);

    cout<<ans;
    return 0;
}