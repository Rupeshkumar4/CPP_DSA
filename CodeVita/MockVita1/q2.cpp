#include <iostream>
#include <string>
#include <vector>
using namespace std;

int orderConfirmOTP(int orderID) {
    int ans = 1;
    while (orderID > 0) {
        int ld = orderID % 10;
        ans *= ld;
        orderID /= 10;
    }
    return ans;
}

int main() {
    int orderID;
    cin >> orderID;
    
    int result = orderConfirmOTP(orderID);
    cout << result << endl;
    
    return 0;
}
