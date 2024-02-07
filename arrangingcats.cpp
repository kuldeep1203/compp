#include <iostream>
#include <vector>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<char> a(n, '0'), b(n, '0');  // Initialize vectors with '0'

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int l = 0, m = 0;  // Initialize l and m to 0

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && a[i] == '1') {
            l++;
        } else if (a[i] != b[i] && a[i] == '0') {
            m++;
        }
    }

    cout << max(l, m) << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases) {
        fun();
        test_cases--;
    }

    return 0;
}

