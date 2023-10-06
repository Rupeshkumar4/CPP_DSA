#include <iostream>
using namespace std;

// Row and  column are sorted 
// starting point row=0 and col=n-1
// or starting point row=n-1 and col=0;

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
    cout<<"Searching "<<endl;
    cout<<"emlements to search for "<<endl;
    int ele;
    cin>>ele;
    // Algorithm
    int r=0,col=m-1;
    bool flag=false;
    while(r<n && col>=0){
        if(v[r][col]==ele){
            flag=true;
            break;
        }else if(v[r][col]>ele){
            col--;
        }else if(v[r][col]<ele){
            r++;
        }
    }
    if(flag){
        cout<<"Found "<<endl;
    }else{
        cout<<"Not Found "<<endl;
    }
    return 0;
}