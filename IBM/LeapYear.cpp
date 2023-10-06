#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //Leap years
    if(n%400==0){
        cout << "Leap years" << endl;
    }else if(n%100!=0){
        if(n%4==0){
            cout << "Leap years" << endl;
        }else{
            cout << " Not Leap years" << endl;
        }
    }
    else{
            cout << " Not Leap years" << endl;
        }


    return 0;
}