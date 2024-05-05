#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int x;
        std::cin >> x;

        // Selecting y as x - 1 would maximize gcd(x, y) + y
        int y = x - 1;
        std::cout << y << std::endl;
    }

    return 0;
}
