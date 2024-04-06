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



void fun(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int breakpoint=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            breakpoint=i;
            break;
        }
    }
     if (breakpoint == -1 || breakpoint + 2 >= n){
        // if array is sorted already
        // or breakpoint exists at n-2 location
        {
            cout << "YES" << endl;
            
        }
     } 
     long long lowerLimit = a[breakpoint] - a[breakpoint + 1]; // lower limit
        long long upperLimit = -1;                                // intially -1
 
        if (breakpoint + 2 < n)
            upperLimit = a[breakpoint + 2] - a[breakpoint + 1]; // if possible now define this
 
        long long i = breakpoint; // start point
 
        while (i < n - 1)
        {
            if (a[i] > a[i + 1])
            {
                lowerLimit = max(lowerLimit, a[i] - a[i + 1]);
                if (i + 2 < n)
                    upperLimit = min(upperLimit, a[i + 2] - a[i + 1]);
                i += 2;
            }
            else
            {
                i++;
            }
        }
 
        if (lowerLimit <= upperLimit)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    

};


int main(){
  
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        fun();
        cout<<"\n";
    }


    return 0;

}