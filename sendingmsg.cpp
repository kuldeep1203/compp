#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, f, a, b;
        std::cin >> n >> f >> a >> b;

        int total_cost = 0;
        int prev_m = 0;

        for (int i = 0; i < n; ++i) {
            int m;
            std::cin >> m;

            total_cost += std::min(a * (m - prev_m), b);
            prev_m = m;
        }

        std::cout << (f > total_cost ? "YES" : "NO") << std::endl;
    }

    return 0;
}

