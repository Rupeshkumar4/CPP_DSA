#include<iostream>
using namespace std;
string MoveHyphen (string s, int n)
{
  string str="";
  for(int i = 0; i < n; i++){
    if(s[i]=='-') {
        str = '-' + str;
        }
    else{
        str = str + s[i];
    }
  }
  return str;
}
int main ()
{
  string s;
  cin >> s;
  int n = s.size ();
  cout << MoveHyphen (s, n);
  return 0;
}