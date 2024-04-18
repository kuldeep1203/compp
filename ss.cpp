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


vector<string> find_palindromic_cyclic_substrings(string s) {
    int n = s.length();
    vector<string> palindromes;
    for (int length = 2; length <= n; ++length) {
        for (int start = 0; start < n; ++start) {
            int end = (start + length - 1) % n;
            string substr = s.substr(start, end - start + 1) + s.substr(0, start);
            string reversed_substr = substr;
            reverse(reversed_substr.begin(), reversed_substr.end());
            if (substr == reversed_substr) {
                palindromes.push_back(substr);
            }
        }
    }
    return palindromes;
}

string palindromic_substrings(int n, string s) {
    vector<string> palindromes = find_palindromic_cyclic_substrings(s);
    if (palindromes.empty()) {
        return "Bob";
    }
    
    vector<string> even_palindromes;
    for (const string& p : palindromes) {
        if (p.length() % 2 == 0) {
            even_palindromes.push_back(p);
        }
    }
    
    if (n % 2 == 1 || !even_palindromes.empty()) {
        return "Alice";
    } else {
        return "Bob";
    }
}
void fun(){
    int n;
    cin >> n; // Length of the string
    string s;
    cin >> s; 
    if(s.size()==1){
        cout<<"BOB";
        return;
    }
    string  b = s;
    reverse(s.begin(),s.end());
    else if(s == b){
        cout<<"BOB";
        return;
    }
    else{
         cout << palindromic_substrings(n, b)
         return;
    }
};


int main(){
    freopen("problemname.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("problemname.out", "w", stdout);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        fun();
        cout<<"\n";
    }


    return 0;

}