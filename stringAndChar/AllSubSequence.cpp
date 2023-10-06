#include <iostream>
#include <string>

using namespace std;

//Time 2^n

void generateSubsequences(string input, string output, int index) {
    if (index == input.size()) {
        cout << output << endl;
        return;
    }

    // Include the current character
    generateSubsequences(input, output + input[index], index + 1);

    // Exclude the current character
    generateSubsequences(input, output, index + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = "";
    generateSubsequences(input, output, 0);

    return 0;
}
