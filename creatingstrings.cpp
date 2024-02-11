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

int char_count[26];

void fun(string a,int& count,vector<string>&ans,string test){
    if(test.size()==a.size()){
        count++;
        ans.push_back(test);
        return;
    }
    for (int i = 0; i < 26; i++) {
		// For all available characters
		if (char_count[i] > 0) {
			// Add it to the current string and continue the search
			char_count[i]--;
			fun(a,count,ans,test + (char)('a' + i));
			char_count[i]++;
		}
	}
    


};


int main(){
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    string a;
    cin>>a;
    for (char c : a) { char_count[c - 'a']++; }//increase count of each character
    int count=0;
    vector<string>ans;
    string t;
    fun(a,count,ans,t);
    

    cout<<count<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;

}