#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the vale of number"<<endl;
    cin>>n;
    int num = 1;
    for (int i = 1; i <= n; i++) {
        int temp = num;
        for (int j = 1; j <= i; j++) {
            cout << temp << " ";
            temp += (n - j);
        }
        num++;
        cout << endl;
    }

    cout<<endl;
}