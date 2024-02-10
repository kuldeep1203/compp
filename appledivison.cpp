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



void fun(ll int&ans,ll int g1,ll int g2,int index,vector<int> n){
    if(index==n.size()){
        ans = min(ans,abs(g1-g2));
        return;
    }
    g1+=n[index];
    fun(ans,g1,g2,index+1,n);
    g1-=n[index];
    g2+=n[index];
    fun(ans,g1,g2,index+1,n);


};


int main(){
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    int test_cases;
    cin>>test_cases;
    ll int ans=INT_MAX;
    vector<int>n(test_cases);
    for(int i=0; i<test_cases; i++){
        cin>>n[i];
    }
    fun(ans,0,0,0,n);
    cout<<ans;


    return 0;

}