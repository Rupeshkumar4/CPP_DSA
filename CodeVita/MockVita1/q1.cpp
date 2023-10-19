#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(long long num) {
    if (num < 2) {
        return false;
    }
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

long long find_smallest_prime(const vector<long long>& numbers) {
    long long q = *min_element(numbers.begin(), numbers.end());

    for (long long p = q; p < 10000000000LL; p += q) {
        bool is_valid = true;
        for (long long num : numbers) {
            if (num != q && p % num != q) {
                is_valid = false;
                break;
            }
        }
        if (is_valid && is_prime(p)) {
            return p;
        }
    }
    
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<long long> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    long long result = find_smallest_prime(numbers);

    if (result == -1) {
        cout << "None" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
