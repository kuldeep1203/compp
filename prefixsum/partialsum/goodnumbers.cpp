#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back      
#define tp6 1000000
#define inf 100000000000000000
#define mod 1000000007
#define ff first
#define ss second

void debug(int a){
    cout<<a;
}

void fun(){
    int n=0, k=0, q=0, li, ri, ans=0, mr = INT_MIN;
    cin >> n >> k >> q;
    vector<int> arr(tp6, 0), pf(tp6, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> li >> ri;
        arr[li - 1] += 1;
        arr[ri] -= 1;
        mr = max(mr, ri);
    }

    for (int i = 1; i <= mr; i++) {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i <= mr; i++) {
        pf[i] = (arr[i] >= k) ? 1 : 0;
    }

    for (int i = 1; i <= mr; i++) {
        pf[i] += pf[i - 1];
    }

    for (int i = 0; i < q; i++) {
        cin >> li >> ri;
        li--; ri--;
        if (li == 0) {
            ans = pf[ri];
        } else {
            ans = pf[ri] - pf[li - 1];
        }
        cout << ans << "\n";
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int test_cases = 1;
    while(test_cases--){
        fun();
        cout << "\n";
    }

    return 0;
}
