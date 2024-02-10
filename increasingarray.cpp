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

};


int main(){
    int test_cases;
    cin>>test_cases;
    ll ans=0;
    vector<int>a(test_cases,0);
    for(int i=0;i<test_cases;i++){
        cin>>a[i];
    }
    for(int i=1;i<test_cases;i++){
        if(a[i]<a[i-1]){
            ans+=a[i-1]-a[i];
            a[i]+=a[i-1]-a[i];
        }
    }
    cout<<ans;

    return 0;

}