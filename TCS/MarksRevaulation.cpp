#include <iostream>
#include<vector>
#include <map>
using namespace std;

int main(){
    vector<int>marks;
    marks.push_back(5);
    marks.push_back(5);
    marks.push_back(15);
    marks.push_back(4);
    map<int,int>ev;
    ev.insert({1,4});
    ev.insert({3,2});

    int before=0;

    for(int i=1; i<marks.size();i++){
        if(marks[i]!= marks[i-1]){
            before++;
        }
    }
    cout << "before: " << before << endl;
    for(auto it:ev){
        marks[it.first] = it.second;
    }
    int after=0;
    for(int i=1; i<marks.size();i++){
        if(marks[i]!= marks[i-1]){
            after++;
        }
    }
    
    for(int i=0;i<marks.size();i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    cout << "after: " << after << endl;
    return 0;
}