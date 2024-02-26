#include <iostream>
using namespace std;

int main(){
    int x=0,y=0;
    cout<<"Total number of Move"<<endl;
    int move;
    cin >> move;
    int cnt=0;
    int step=10;
    while(move){
        if(cnt==0){
            x+=step;
            step+=10;
            cnt=1;
        }else if(cnt==1){
            y+=step;
            step+=10;
            cnt=2;
        }else if(cnt==2){
            x-=step;
            step+=10;
            cnt=3;
        }else if(cnt==3){
            y-=step;
            step+=10;
            cnt=0;
        }
        move--;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}