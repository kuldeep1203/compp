#include <iostream>
#include <string>
using namespace std;

bool isBinaryDecimal(int n) {
    string str = to_string(n);
    for (char c : str) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}

bool backtrack(int n) {
    if (n == 0) {
        return true;
    }
    if (isBinaryDecimal(n)) {
        return true;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && isBinaryDecimal(i) && backtrack(n / i)) {
            return true;
        }
    }
    return false;
}

void fun() {
    int n;
    cin >> n;
    if (backtrack(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        fun();
    }
    return 0;
}
