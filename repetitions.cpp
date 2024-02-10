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
    // int test_cases;
    // cin>>test_cases;
    // while(test_cases--){
    //     fun();
    // }
    string n;
    char current;
    cin>>n;
    ll int count=0,ans=0;
    current = n[0];
    count=1;
    for(ll int i=1; i<n.size();i++){
        if(n[i] == current){
            count++;
        
        }
        else{
            ans=max(ans,count);
            count=1;
            current = n[i];
        }
       
    }
    ans=max(ans,count);
    cout<<ans<<"";
    return 0;

}