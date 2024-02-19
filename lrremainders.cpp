#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void fun() {
   
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    cin >> s;
    int l = count(s.begin(), s.end(), 'L');
    int r = l;
    vector<int> ans(n);
    int num = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'L') {
        num = num * a[--l] % m;
      } else {
        num = num * a[r++] % m;
      }
      ans[i] = num;
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " \n"[i == n - 1];
    }
  
  
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        fun();
        cout << "\n";
    }
    return 0;
}
