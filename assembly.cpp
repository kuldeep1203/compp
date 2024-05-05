#include <iostream>
#include <vector>

using namespace std;

// Function to find array a for each test case
vector<int> find_array(int n, vector<int>& x) {
    // Initialize the array with the first element
    vector<int> a = {1};
    
    // Iterate through the elements of x to determine the rest of the array
    for (int i = 1; i < n; ++i) {
        // Calculate ai based on the given condition
        int ai = (x[i - 1] * 1LL * (1LL * a[i - 1] % 1000000007) + 1) % 1000000007;
        a.push_back(ai);
    }
    
    return a;
}

int main() {
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--) {
        int n;
        cin >> n;

        // Input the elements x2, ..., xn for the current test case
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        // Find the array a for the current test case
        vector<int> result = find_array(n, x);

        // Output the array a for the current test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
