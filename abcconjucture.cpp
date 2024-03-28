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
    ll int n;
    string a,b;
    cin>>n;
    cin>>a>>b;
    vector<pair<pair<char,char>,int>>v;
    vector<int>v1(3,0);
    if(a==b){cout<<"yes";}
    else{
        for(int i=0;i<n;i++){
        if(a[i]=='a' && v1[0]==0){
           
            v1[0]=1;
            v.push_back({{a[i],b[i]},i});
        }
        if(a[i]=='b' && v1[0]==1){
            
            v1[1]=1;
            int j = i ;
            while(j<n){
                if(a[i]=='c' && v1[1]==1){
        
                    v1[2]=1;
                    v.push_back({{a[i],b[i]},i});
                    if(v[0].first.first == v[1].first.second && v[0].first.second==v[1].first.first){
                        a[v[0].second]='c';
                        a[v[1].second]='a';
                        v.clear();
                        v1[0]=v1[1]=v1[2]=0;
                    }else{
                        v.erase(v.begin()+1);
                        j++;
                    }
                    
                    

                }
            }
         
        }
        
        }
        if(a==b){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
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