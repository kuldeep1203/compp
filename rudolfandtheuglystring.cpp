// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back      
// #define tp3 1000
// #define tp5 100000
// #define tp6 1000000
// #define tp9 1000000000
// #define inf 100000000000000000
// #define mod 1000000007
// #define ff first
// #define ss second


// typedef vector<ll> vll;
// typedef pair<ll, ll> pll;
// typedef vector<pll> vpll;
// typedef map<ll,ll> mll;
// typedef stack<ll> sll;
// typedef stack<pll> spll;
// typedef greater<ll> gll;
// typedef priority_queue<ll,vll,gll> pqmin;
// typedef priority_queue<ll> pqmax;




// /**          HINTS/NOTES                 **/
// //when a problem statement says to find the end result of some
// //process, or to find when something occurs, it’s usually sufficient to simulate the process.
// //binary exponentiation - use pow()function for finding powers does it much faster 
// //A bitmask is an integer whose binary 
// //representation is used to represent a subset. 









// ll int gcd_(ll int a,ll int b){ //eculidean algo for finding gcd 
//     while(a){
//         ll t =a;
//         a=b%a;
//         b=t;
//     }
//     return b;
// }
// ll int lcm__(ll int gcd,ll int a,ll int b){
//     ll int t = (a*b);
//     ll int g =gcd_(a,b);
//     return t/g;
//     //gcd * lcm = a*b;
//     //min(x^a,x^b) for every prime factor = gcd(a,b)
//     //max(x^a,x^b) for every prime factor = lcm(a,b)
// }


// void debug(int a){
//     cout<<a;
// }



// void fun(){
//     int n;
//     cin>>n;
//     string a;
//     string b ="map";
//     string c="pie";
//     cin>>a;
//     if(n<3){
//         cout<<0;
//     }
//     else{
//         for(int i=0;i<n;i++){
//             if(a[i] =='m'){
//                 while(true){
//                     if
//                 }

//             }
//         }
//     }

// };


// int main(){
//     // freopen("problemname.in", "r", stdin);
// 	// // the following line creates/overwrites the output file
// 	// freopen("problemname.out", "w", stdout);
//     int test_cases;
//     cin>>test_cases;
//     while(test_cases--){
//         fun();
//         cout<<"\n";

//     }


//     return 0;

// }
#include <iostream>
#include <string>
using namespace std;

int minRemovalsToMakeBeautiful(string s) {
    int n = s.length();
    int removals = 0;
    for (int i = 0; i < n; ) {
        if (i + 2 < n && (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map")) {
            removals++;
            i += 3; // Skip to the next character after "pie" or "map"
        } else {
            i++; // Move to the next character
        }
    }
    return removals;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minRemovalsToMakeBeautiful(s) << endl;
    }
    return 0;
}
