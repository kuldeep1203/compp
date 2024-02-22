

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

// void fun() {
//     int n,x,y;
//     cin>>n>>x>>y;
//     int A=0,B=0,C=0;
//     int ans = 0;
//     char a=0;
//     for(int i=0;i<n;i++){
//         cin>>a;
//         if(a=='A'){
//             A++;
//         }
//         else if(a=='B'){B++;}          
//         else if(a=='C'){C++;}
//     }
//     cout<<A<<B;
//     if(A>x){ans+=x;x=0;}
//     else if(A<=x){ans+=A;x-=A;}
    
//     if(B>y){ans+=y;y=0;}
//     else{ans+=B;y-=B;}

//     if(C>(x+y)){ ans+=(x+y);cout<<ans<<endl;}
//     else{ans+=C; cout<<ans<<endl;}
// }

int main() {
    long long int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else{
        vector<long long int>dp(n+1,0);
        dp[0]=1;
        for(int i =1;i<=n;i++){
            for(int j=1;j<=6;j++){
                if(i-j>=0){
                    dp[i]+=dp[i-j];
                }
            }
            dp[i]%=1000000007;
        }
        cout<<dp[n]<<"\n";
    }
    
   
}