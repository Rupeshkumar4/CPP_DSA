#include<iostream>
using namespace std;

int main(){

    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter pair(x1,y1)"<<endl;
    cin>>x1>>y1;

    cout<<"Enter pair(x2,y2)"<<endl;
    cin>>x2>>y2;

    cout<<"Enter pair(x3,y3)"<<endl;
    cin>>x3>>y3;

    float dist1 =sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    float dist2 =sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    float dist3 =sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    float distSum = dist1+dist2+dist3;

    cout<<distSum<<endl;

    return 0;
}