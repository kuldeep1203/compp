#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back


void debug(int a){
    cout<<a;
}

// void  rec(int a,vector<ll int>&b ){
//     if(a == 1){
//         b.pb(a);
//         return;
//     }
    
//     else if(a%2==0) {
//         b.pb(a);
//         rec(a/2,b);
//     }
//     else{
//         b.pb(a);
//         rec(a*3 + 1,b);
//     }

// }

void fun(){
    ll int n;
    cin>>n;
    // vector<ll int>b;
    // rec(n,b);
    // for(int i=0;i<b.size();i++){
    //     cout<<b[i]<<" ";
    // }
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            cout<<n/2<<" ";
            n=n/2;
        }
        else if(n%2==1){
            n=n*3+1 ;
            cout<<n<<" ";
        }
    }
    // cout<<1<<" ";
};


int main(){
    int test_cases=1;
    // cin>>test_cases;
    while(test_cases--){
        fun();
    }

    return 0;

}