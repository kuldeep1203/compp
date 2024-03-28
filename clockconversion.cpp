#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Parse hours and minutes
        int hours = stoi(s.substr(0, 2));
        int minutes = stoi(s.substr(3, 2));

        // Determine whether it's AM or PM
        string period = (hours < 12) ? "AM" : "PM";

        // Convert to 12-hour format
        if (hours == 0) {
            hours = 12;
        } else if (hours > 12) {
            hours -= 12;
        }

        // Output the result
        printf("%02d:%02d %s\n", hours, minutes, period.c_str());
    }

    return 0;
}
