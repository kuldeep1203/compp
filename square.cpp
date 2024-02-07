#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[4], y[4];

        // Input coordinates
        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        // Calculate the square of the distance between two adjacent corners
        int side_length = max(abs(x[0] - x[1]), abs(y[0] - y[1]));
        int area = side_length * side_length;

        // Output the result
        cout << area << endl;
    }

    return 0;
}

