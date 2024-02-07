#include <iostream>
#include <vector>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<char> a(n, '.'); // Corrected vector initialization

    int p = 0, m = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == '+') {
            p++;
        } else {
            m++;
        }
    }

    cout << abs(m - p) << endl;
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases){
        fun();
        test_cases--; 
    }
}
