#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> >v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int ele;
            cin>>ele;
            v[i][j]=ele;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After transpose "<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            //We have to only transpose half of the matrix eighter i>j or j>i both works
            //Upper and lower triangular only swap
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}