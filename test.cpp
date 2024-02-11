#include <bits/stdc++.h>
using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> b(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < n; j++) {
            b[i][j] = abs(a[i] - (j + 1)); // Fill the 2D array b
        }
    }

    unordered_map<int, unordered_set<int>> diff_cols; // Store columns with the same difference
    int max_freq = 1;

    for (int j = 0; j < n; j++) {
        unordered_map<int, int> count; // Count occurrences of differences for each column
        for (int i = 0; i < n; i++) {
            count[b[i][j]]++; // Count occurrences of differences in column j
            max_freq = max(max_freq, count[b[i][j]]); // Update max frequency
        }
        for (auto& p : count) {
            if (p.second > 1) {
                diff_cols[p.first].insert(j); // Record columns with the same difference
            }
        }
    }

    // Find the maximum number of columns with the same difference
    for (auto& s : diff_cols) {
        max_freq = max(max_freq, (int)s.second.size());
    }

    cout << max_freq << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        fun();
    }

    return 0;
}


