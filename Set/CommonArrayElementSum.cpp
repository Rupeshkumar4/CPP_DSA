#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<int>v1(n),v2(m);

    cout<<"Enter values of vector1 "<<endl;
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
    cout<<"Enter values of vector2 "<<endl;
    for(int i=0;i<m;i++){
        cin >> v2[i];
    }

    int sum = 0;;
    set<int>s;

    for(auto ele:v1){
        s.insert(ele);
    }

    for(auto ele:v2){
        if(s.find(ele) != s.end()){
            sum += ele;
        }
    }
    cout<<sum<<endl;
}