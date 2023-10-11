#include <iostream>
#include <string>
using namespace std;

bool areParenthesesBalanced(const string& expression) {
    int balance = 0;

    for (char c : expression) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }

        if (balance < 0) {
            // Unbalanced: too many closing parentheses without opening ones
            return false;
        }
    }

    return balance == 0;
}

int main() {
    string input;
    cout << "Enter an expression with parentheses: ";
    cin >> input;

    if (areParenthesesBalanced(input)) {
        cout << "Parentheses are balanced.\n";
    } else {
        cout << "Parentheses are not balanced.\n";
    }

    return 0;
}
