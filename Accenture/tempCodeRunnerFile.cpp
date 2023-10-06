#include <iostream>
#include <vector>
using namespace std;

void MoveZeroRelativeOrderSame(vector<int> &v, int n){
    int l=1,h=n-1;
    int i=0;
    while(l<=h){
        if(v[i]==0){
            swap(v[i],v[l]);
            l++;
        }else if(v[i]>0){
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n,-1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    MoveZeroRelativeOrderSame(v,n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
