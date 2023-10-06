#include <iostream>
using namespace std;
int operationChoices(int c, int a, int b)
{
    if(c==1){
        return a+b;
    }
    else if(c==2){
        return a-b;
    }
    else if(c==3){
        return a*b;
    }
    else if(c==4){
        return a/b;
    }
    return 0;
}

int main()
{
    int x, y, z;
    int result;
    cin >> x;
    cin >> y;
    cin >> z;
    result = operationChoices(x, y, z);
    cout << result;
    return 0;
}