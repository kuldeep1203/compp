#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define tp3 1000
#define tp5 100000
#define tp6 1000000
#define tp9 1000000000
#define inf 100000000000000000
#define mod 1000000007
#define ff first
#define ss second

typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef map<ll,ll> mll;
typedef stack<ll> sll;
typedef stack<pll> spll;
typedef greater<ll> gll;
typedef priority_queue<ll,vll,gll> pqmin;
typedef priority_queue<ll> pqmax;

ll gcd_(ll a, ll b) { // Euclidean algorithm for finding gcd
    while (a) {
        ll t = a;
        a = b % a;
        b = t;
    }
    return b;
}

ll lcm__(ll gcd, ll a, ll b) {
    ll t = (a * b);
    ll g = gcd_(a, b);
    return t / g;
    // gcd * lcm = a * b;
    // min(x^a, x^b) for every prime factor = gcd(a, b)
    // max(x^a, x^b) for every prime factor = lcm(a, b)
}

void debug(int a) {
    cout << a;
}

void fun() {
    int v1, v2, k;
    cin >> v1 >> v2 >> k;
    vll a(v1), b(v2);
    for(int i = 0; i < v1; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < v2; i++) {
        cin >> b[i];
    }
    int count = 0;
    for(int i = 0; i < v1; i++) {
        for(int j = 0; j < v2; j++) {
            if(a[i] + b[j] <= k) {
                count++;
            }
        }
    }
    cout << count;
};

int main() {
    // freopen("problemname.in", "r", stdin);
	// the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        fun();
        cout << "\n";
    }
    return 0;
}
