

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
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else{
        vector<int>dp(n+1,0);
        dp[1]=1;
        for(int i=2;i<n+1;i++){
            dp[i]=dp[i-1]+dp[i-2] + 1;
        }
        cout<<dp[n]<<endl;
    }
    
   
}