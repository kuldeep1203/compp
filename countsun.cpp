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

    int n;
    cin>>n;
    vector<int>a(n+1,0),ans(n,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    //prefix sum
   
    sort(a.begin(), a.end());
    for(int j=1;j<=n;j++){ 
        int sum=0;
        for(int k=j;k<=n;k++){
            sum+=a[k];
            if(sum>n){
                break;
            }
            ans[sum-1]++;

        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }





};


int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        fun();
    }

    return 0;

}