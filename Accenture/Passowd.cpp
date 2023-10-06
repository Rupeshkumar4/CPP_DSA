#include <iostream>
using namespace std;
int CheckPassword(char str[], int n)
{   int num=0,cap=0,spac=0,slash=0;
    if(n<=3) return 0;
    if(str[0]>='0' && str[0]<='9') return 0;
    for(int i=0; i<n; i++){
        if(str[i]>='0' && str[i]<='9') num++;
        else if(str[i]>='A' && str[i]<='B') cap++;
        else if(str[i]==' ') spac++;
        else if(str[i]=='/') slash++;
    }
    if(spac>=1 || slash>=1) return 0;
    if(cap==0) return 0;
    if(num==0) return 0;
    return 1;
}
int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    char *c = &s[0];
    cout << CheckPassword(c, len);
}