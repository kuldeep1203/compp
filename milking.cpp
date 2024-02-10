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



void fun(){

};


int main(){
    freopen("mixmilk.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("mixmilk.out", "w", stdout);
    vector<ll int>capacity(3,0),contain(3,0);
    for(int i=0;i<3;i++){
        cin>>capacity[i]>>contain[i];
    }
    int pour=1,in=0,ne=1;
    while(pour<=100){
         ll int amount_to_pour = min(contain[in], capacity[ne] - contain[ne]);
        contain[in] -= amount_to_pour;
        contain[ne] += amount_to_pour;
    
    // Update indices for next iteration
        in = (in + 1) % 3;
        ne = (ne + 1) % 3;
    
        pour++;
    }

    for(int i=0;i<3;i++){
        cout<<contain[i]<<"\n";
     }


    return 0;

}