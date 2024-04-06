#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void fun() {
    int n;
    cin >> n;
    vll a(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    int j = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(a[i] - j);
        j++;
    }
    cout << ans << "\n";
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        fun();
    }
    return 0;
}