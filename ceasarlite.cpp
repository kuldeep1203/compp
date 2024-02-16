#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll int gcd(ll int a, ll int b) {
    while (a) {
        ll int t = a;
        a = b % a;
        b = t;
    }
    return b;
}

ll int lcm(ll int a, ll int b) {
    ll int t = (a * b);
    ll int g = gcd(a, b);
    return t / g;
}

void re(char a, char b, int i, vector<int>& ans) {
    if (a == b) {
        ans[i] = 0;
        return;
    } else {
      
        int va = a;
        while (true) {
            va += 3;
            if (va > 90) {
                va=va%26;
                if(va%b==0){
                    
                    ans[i]=va;
                    break;
                }
            }
            
            
        }
    }
}

void fun() {
    int n;
    cin >> n;
    vector<char> a(n), b(n);
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        re(a[i], b[i], i, ans);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    // freopen("problemname.in", "r", stdin);
    // freopen("problemname.out", "w", stdout);
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        fun();
        cout << "\n";
    }
    return 0;
}
