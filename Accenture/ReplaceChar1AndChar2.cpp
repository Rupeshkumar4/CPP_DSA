#include <iostream>
#include <cstring>
using namespace std;
void ReplaceCharacter(char str[], int n, char ch1, char ch2)
{
    for(int i = 0; i < n; i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
        else if(str[i]==ch2){
            str[i]=ch1;
        }
    }
    cout<<str<<endl;
}

int main()
{
    char a[100];
    char b, c;
    int len;

    cin >> a;
    cin >> b;
    cin >> c;

    len = std::strlen(a);
    ReplaceCharacter(a, len, b, c);

    return 0;
}