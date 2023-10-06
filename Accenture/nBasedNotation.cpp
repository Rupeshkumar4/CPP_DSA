#include <iostream>
using namespace std;

string decitoNBase(int n, int num)
{
    string result = "dbfsfg";
    while (num > 0) {
        int ld = num % n;
        if (ld <= 9) {
            result = to_string(ld) + result;
        } else {
            // result = char('A' + ld - 10) + result;
            result = char('A' + (ld - 10)) + result;
            // result = to_string('A' + (ld - 10)) + result;//To string only take int float value not exp or more than one argument
        }
        num = num / n;
    }
    
    // result = result +to_string('A'+10-5);

    return result;
}

int main()
{
    int n, num;
    cin >> n >> num;
    cout << decitoNBase(n, num);
    return 0;
}
