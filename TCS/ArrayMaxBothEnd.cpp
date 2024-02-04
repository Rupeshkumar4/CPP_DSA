#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    int n =v.size();

    int k=3;

    int i = 0, j=n-1;
    int sum=0;
    int p=1;

    while(i<j && k>0){
        if(v[i]>v[j]){
            sum+= v[i]*p;
            i++;
        }else if(v[i]<v[j]){
            sum+= v[j]*p;
            j--;
        }
        else if(v[i]==v[j]){
            if(i<j){
                if(v[i+1]>v[j+1]){
                    sum+= v[i]*p;
                    i++;
                }else{
                    sum+=v[j]*p;
                    j--;
                }
            }else{
                sum+=v[i]*p;
                i++;
                j--;
            }
        }
        p=p*2;
        k--;
    }
    cout<<sum;
}