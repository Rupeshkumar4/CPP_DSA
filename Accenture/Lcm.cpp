#include<iostream>
using namespace std;

int Lcm(int n, int m){
    int maxi = max(n, m);
    int mini = min(n, m);
    int i = maxi;
    
    while(true){
        if(i % mini == 0){
            return i;
        }
        i += maxi; // Update i by adding the original value of maxi
    }
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << Lcm(n, m) << endl;
    return 0;
}
