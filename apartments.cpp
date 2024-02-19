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
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>applicants(n);
    vector<int>apartments(m);
    for(int i=0;i<n;i++){
        cin>>applicants[i];

    }
    for(int i=0;i<m;i++){
        cin>>apartments[i];
    }
    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++){
        while (j < m && apartments[j] < applicants[i] - k) {
            j++;
        }
        if (j < m && abs(apartments[j] - applicants[i]) <= k) {
            ans++;
            j++;
        }
    }
    cout<<ans;
   


    return 0;

}