#include <iostream>
using namespace std;

int main() {
    int n1 = 3521, n2 = 2452, n3 = 1352;
    int ans = 0;
    int cnt = 1;
    while (n1 > 0 && n2 > 0 && n3 > 0) {
        if (cnt == 1) {
            ans = max(n1 % 10, max(n2 % 10, n3 % 10));
            cnt++;
            // n1 = n1 / 10, n2 = n2 / 10, n3 = n3 / 10;
        } else if (cnt == 2) {
            ans = min(n1 % 10, min(n2 % 10, n3 % 10)) * 10 + ans;
            cnt++;
            // n1 = n1 / 10, n2 = n2 / 10, n3 = n3 / 10;
        } else if (cnt == 3) {
            ans = max(n1 % 10, max(n2 % 10, n3 % 10)) * 100 + ans;
            cnt++;
            // n1 = n1 / 10, n2 = n2 / 10, n3 = n3 / 10;
        } else if (cnt == 4) {
            ans = min(n1 % 10, min(n2 % 10, n3 % 10)) * 1000 + ans;
            cnt++;
            // n1 = n1 / 10, n2 = n2 / 10, n3 = n3 / 10;
        }
        n1 = n1 / 10, n2 = n2 / 10, n3 = n3 / 10;
    }
    cout << ans << endl;
    return 0;
}
