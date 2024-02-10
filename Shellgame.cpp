#include <bits/stdc++.h>
#include<algorithm>
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



void fun(){

};


int main(){
    freopen("shell.in", "r", stdin);
	// the following line creates/overwrites the output file
	
    int test_cases;
    cin>>test_cases;
    int a,b,g,ans=0;
    vector<int>count(3,0);
    while(test_cases--){
        cin>>a>>b>>g;
        swap(count[a-1],count[b-1]);
        count[g-1]+=1;
        ans = max(ans,count[g-1]);



        
    }
    freopen("shell.out", "w", stdout);
    cout<<ans;

    return 0;

}