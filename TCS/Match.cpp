#include <iostream>
#include <string>
#include <vector>
#
using namespace std;

int main(){
    int team;
    cout<<"Total teams"<<endl;
    cin >> team;
    int match=(team*(team-1))/2;
    unordered_map<char,int>ump;
    while(match>0){
        string str;
        cout<<"Enter team"<<endl;
        cin >> str;
        char team1=str[0];
        char team2=str[1];
        int team1Score=(str[3])-'0';
        int team2Score=(str[5])-'0';

        if(team1Score>team2Score){
            ump[team1]+=3;
        }else if(team1Score<team2Score){
            ump[team2]+=3;
        }
        match--;
    }
    int MaxScore=0;
    char WinTeam;
    for(auto it:ump){
        if(it.second>MaxScore){
            WinTeam=it.first;
            MaxScore=it.second;
        }
    }
    cout<<"MaxScore: "<<MaxScore<<endl;
    cout<<"WinTeam: "<<WinTeam<<endl;
    return 0;
}