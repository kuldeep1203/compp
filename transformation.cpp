#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back

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
int decimalToBinary(int N) //logn 
{ 
    // To store the binary number 
    unsigned ll B_Number = 0; 
    int cnt = 0; 
    while (N != 0) { 
        int rem = N % 2; 
        unsigned ll c = pow(10, cnt); 
        B_Number += rem * c; 
        N /= 2; 
        // Count used to store exponent value 
        cnt++; 
    } 
    return B_Number; 
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



ll find_minimum_difference(ll n) {
    ll increment = 0;
    ll location = 0;
    for (ll i = 31; i >= 0; i--) {
        if (n & (1LL << i)) {
            if (location == 0) {
                location = i;
            }
            if (increment == 0 || increment == 2) {
                increment++;
            }
        } else {
            if (increment == 1) {
                increment = 2;
            }
        }
    }
    if (increment != 3) {
        return 0;
    }
    ll temp = 0;
    ll ans = LLONG_MAX;
    for (ll i = location; i >= 0; i--) {
        temp += pow(2, i);
        if (temp < n) {
            continue;
        }
        ans = min(ans, temp - n);
    }
    return ans;
}


int main(){
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        ll n;
        cin >> n;
        ll min_difference = find_minimum_difference(n);
        cout << min_difference;
        cout<<"\n";
    }
   


    return 0;

}