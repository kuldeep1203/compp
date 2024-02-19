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



void fun(vector<vector<int>>cow,vector<vector<int>>ac,int ans,int count,int m,int n,int c,int a){
    if(c==n){
        ans = min (ans,count);
        return ;
    }
    if(a>m){
        return;
    }
    
    
};


int main(){
    freopen("problemname.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("problemname.out", "w", stdout);
    int n,m;
    vector<vector<int>>cow;
    vector<vector<int>>ac;
    for(int i=0;i<3;i++){
        vector<int>t(3);
        for(int j=0;j<3;j++){
            
            cin>>t[i];

        }
        cow.push_back(t);
        t.clear();
        
    }
    for(int i=0;i<4;i++){
         vector<int>t(4);
        for(int j=0;j<4;j++){
           
            cin>>t[i];

        }
        ac.push_back(t);
        t.clear();
        
    }
    fun(cow,ac,0,0,m,n,0,0);
   


    return 0;

}