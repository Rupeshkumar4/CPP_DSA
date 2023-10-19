#include <iostream>
using namespace std;

void printResult(string number) {
    int level = 0;
    
    while (number.size() > 1) {
        int sum = 0;
        
        for (int i = 0; i < number.size(); i++) {
            sum += number[i] - '0'; 
        }
        
        number = to_string(sum); 
        level++;
    }
    
    cout << "Super Digit: " << number << endl;
    cout << "Level: " << level << endl;
}

int main() {
    string number;
    cout << "Enter a long integer: ";
    cin >> number;
    printResult(number);
    
    return 0;
}
