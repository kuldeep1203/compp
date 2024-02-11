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
    ll int n;
    cin>>n;
    vector<int>a(n),k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>st;

    for(auto e:a){
        st.insert(e);
    }
    for(auto e :st){
        k.push_back(e+n);
    }
    int ans = 0,count =0;
    sort(k.rbegin(),k.rend());

    for(auto e : st){
        count++;
        while(k.size() && k.back()<=e){
            k.pop_back();
            count--;
        }
        ans = max(ans,count);
    }

    
   
    
    
        
       


        
    
    

   
   
    
    // int max_freq = 0;
    // for (auto& p : freq) {
    //     max_freq = max(max_freq, p.second);
    // }
   
    
    
    


    
    
   


}


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