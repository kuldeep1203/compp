#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back

void debug(int a) {
    cout << a;
}

void fun() {
    int n, l = 0, r = 0, flag = 0;
    char s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == 'B' && flag == 0) {
            l = i;
            r=i;
            flag = 1;
        } else if (s == 'B' && flag == 1) {
            r = max(r, i);
        }
    }
    cout << (r - l + 1) << "\n";
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        fun();
    }
    return 0;
}
