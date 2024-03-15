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


// typedef vector<ll int> vlli;
// typedef pair<ll, ll> pll;
// typedef vector<pll> vpll;
// typedef map<ll,ll> mll;
// typedef stack<ll> sll;
// typedef stack<pll> spll;
// typedef greater<ll> gll;
// typedef priority_queue<ll,vlli,gll> pqmin;
// typedef priority_queue<ll> pqmax;




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



void fun(){
    int n,b=0;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
      
        
    }
    if(n==1){cout<<1;}
    else{
        for(int i=0;i<n;i++){

      
      
                b+=(a[i])/2;
           
        }
        cout<<b;
    }
    

};


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