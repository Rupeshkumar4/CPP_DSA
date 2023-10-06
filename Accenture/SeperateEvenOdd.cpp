#include <iostream>
#include <vector>
using namespace std;

void EvenOdd(vector<int> &v, int n){
    int l=0,h=n-1;
    while(l<h){
        while(v[l]%2==0) l++;
        while(v[h]%2 !=0) h--;
        if(l<h){
            swap(v[h],v[l]);
        }
        l++;
        h--;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    EvenOdd(v,n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
