#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back

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
    int test_cases;
    cin>>test_cases;
    vector<ll int>a(test_cases,0);
    for(ll int i=0;i<test_cases;i++){
        cin>>a[i];
    }
    ll int b=0;
    // sort(a.begin(),a.end());
    for(ll int i=0;i<test_cases;i++){
        for(ll int j=a.size()-1;j<test_cases;j--){
            if(i!=j){
                b =max(b,gcd_(a[i],a[j]));
            }
        }
    }
    cout<<b;
    


    return 0;

}