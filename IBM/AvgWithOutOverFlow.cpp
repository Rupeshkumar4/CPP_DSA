#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int average = (num1 / 2) + (num2 / 2) + ((num1 % 2 + num2 % 2) / 2);

    cout << "Average: " << average << endl;

    return 0;
}
