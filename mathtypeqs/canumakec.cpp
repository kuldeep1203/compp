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

// bool isPrime(int n ){
//     if(n==1) return false;
//     if(n==2) return false;
//     for(int i = 2 ; i*i<n ; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

//Bezouts theorem  - 
//if a and b are integers, not both zero, then there exist integers x and y such that ax+by = gcd(a,b)
//if a and b are coprime, then there exist integers x and y such that ax+by = 1


void fun(){
    int a,b,c;
    cin>>a>>b>>c;
    int g = gcd_(a,b);
    if(c%g==0){
        cout<<"Yes";
        return;

    }
    else{
        cout<<"No";
        return;
    }

};



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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