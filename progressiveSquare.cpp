#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool canConstructProgressiveSquare(int n, int c, int d, vector<int>& arr) {
    int a_11 = arr[0];

    // Check if the elements satisfy the rules
    int mi = INT_MAX;
    unordered_map<int, int>mp;
    for(int i = 0; i < n*n; i++) {
        mi=min(mi,arr[i]);//gives the strting value
        mp[arr[i]]++;
    }
    int f = mi,row;
    for(int i=0;i<n;i++) {
        f = mi+i*c;
        row = f;
        if(!mp[row]){
            return false;
        }
        for(int j = 0; j < n; j++) {
            row = f+j*d;
            if(!mp[row]){
                return false;
            }
            mp[row]--;
        }

    }
    return true;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> arr(n * n);
        for (int i = 0; i < n * n; i++) {
            cin >> arr[i];
        }

        if (canConstructProgressiveSquare(n, c, d, arr)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}





