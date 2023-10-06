#include <iostream>
#include<vector>
using namespace std;

int main(){
    int number;
    int profit;
    int percent;
    cin>>number>>profit>>percent;

    while (number>1){
        profit=round((profit*percent)/100);
        number--;
    }
    cout<<profit<<endl;
    return 0;
}