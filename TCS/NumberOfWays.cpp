#include <iostream>
#include <vector>
using namespace std;

int totalWays(vector<vector<int> >v,int x,int y) {
    int n=v.size();
    int m=v[0].size();
    if(x==n-1 && y==n-1) return 1;
    if(x>=n || y>=m || x<0 || y<0) return 0;
    int rightWays =totalWays(v,x+1,y);
    int downWays =totalWays(v,x,y+1);
    return rightWays+downWays;
}

int main(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<vector<int> >v(n,vector<int>(m,0));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin >> v[i][j];
    //     }
    // }
    cout<<totalWays(v,x,y)<<endl;
}