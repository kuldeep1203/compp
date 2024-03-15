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




/**          HINTS/NOTES                 **/
//when a problem statement says to find the end result of some
//process, or to find when something occurs, it’s usually sufficient to simulate the process.
//binary exponentiation - use pow()function for finding powers does it much faster 
//A bitmask is an integer whose binary 
//representation is used to represent a subset. 









ll int gcd_(ll int a,ll int b){ //eculidean algo for finding gcd 
    while(a){
        ll t =a;
        a=b%a;
        b=t;
    }
    return b;
}
ll int lcm__(ll int gcd,ll int a,ll int b){
    ll int t = (a*b);
    ll int g =gcd_(a,b);
    return t/g;
    //gcd * lcm = a*b;
    //min(x^a,x^b) for every prime factor = gcd(a,b)
    //max(x^a,x^b) for every prime factor = lcm(a,b)
}


void debug(int a){
    cout<<a;
}



void fun() {
    int n, m, x;
    cin >> n >> m >> x;

    vector<pair<int, char>> a(m);
    set<int> ans;
    vector<int> visited(n + 1, 0); // Initialize visited with size n + 1 and fill with zeros

    for (int i = 0; i < m; i++) {
        cin >> a[i].first >> a[i].second;
    }

    ans.insert(x);
    visited[x] = 1;

    for (int i = 0; i < m; i++) {
        if (a[i].second == '0') {
            x = (x + a[i].first) % n; // Taking modulo n to loop back if necessary
            if (x == 0) x = n; // Ensure x is n instead of 0
            ans.insert(x);
            visited[x] = 1;
        } else if (a[i].second == '1') {
            x = (x - a[i].first + n) % n; // Ensure x stays positive
            if (x == 0) x = n; // Ensure x is n instead of 0
            ans.insert(x);
            visited[x] = 1;
        } else {
            int cw = (x + a[i].first) % n;
            if (cw == 0) cw = n; // Ensure cw is n instead of 0
            if (!visited[cw]) {
                ans.insert(cw);
                visited[cw] = 1;
                x = cw;
            } else {
                int ccw = (x - a[i].first + n) % n; // Ensure x stays positive
                if (ccw == 0) ccw = n; // Ensure ccw is n instead of 0
                if (!visited[ccw]) {
                    ans.insert(ccw);
                    visited[ccw] = 1;
                    x = ccw;
                }
            }
        }
    }

    cout << ans.size() << "\n";
    for (int position : ans) {
        cout << position << " ";
    }
    cout << endl;
}



int main(){
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        fun();
        cout<<"\n";
    }


    return 0;

}