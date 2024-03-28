#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

vector<pair<string, string>> songs;
int minRemovals = INT_MAX;

// bool isValid(const vector<pair<string, string>>& playlist) {
//     unordered_map<string, int> genreCount, writerCount;
//     for (int i = 0; i < playlist.size(); ++i) {
//         string genre = playlist[i].first;
//         string writer = playlist[i].second;
//         if (genreCount[genre] > writerCount[writer]) {
//             writerCount[writer]++;
//         } else {
//             genreCount[genre]++;
//         }
//         if (genreCount[genre] + writerCount[writer] != i + 1) {
//             return false;
//         }
//     }
//     return true;
// }

void backtrack(int idx, vector<pair<string, string>>& playlist, int removals) {
    if (idx == songs.size()) {
        if (isValid(playlist)) {
            minRemovals = min(minRemovals, removals);
        }
        return;
    }

    // Don't add the current song
    backtrack(idx + 1, playlist, removals);

    // Add the current song
    playlist.push_back(songs[idx]);
    if (!isValid(playlist)) {
        playlist.pop_back();
        return;
    }
    backtrack(idx + 1, playlist, removals);
    playlist.pop_back();

    // Remove the current song
    backtrack(idx + 1, playlist, removals + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        songs.clear();
        for (int i = 0; i < n; ++i) {
            string genre, writer;
            cin >> genre >> writer;
            songs.push_back({genre, writer});
        }

        minRemovals = INT_MAX;
        vector<pair<string, string>> playlist;
        backtrack(0, playlist, 0);
        cout << minRemovals << endl;
    }

    return 0;
}





