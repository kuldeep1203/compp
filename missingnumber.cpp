#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back


void debug(int a){
    cout<<a;
}



void fun(){
    return;
};


int main(){
    ll int test_cases;
    cin>>test_cases;
    ll int sum = (test_cases*(test_cases+1))/2;
    // debug(sum);
    ll int b=0;
    for(ll int i=0; i<test_cases-1; i++){
        
        cin>>b;
        sum-=b;
    }
    cout<<sum;
    // while(test_cases--){
    //     fun();
    // }


    return 0;

}