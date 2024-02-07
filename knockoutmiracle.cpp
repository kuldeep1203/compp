#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void fun(){
   int n;
   cin>>n;
   int u,v;
   unordered_map<int,vector<int>>mp;
   for(int i=0;i<2*n+2;i++){
        cin>>u>>v;
        if(u>n && u>v){
            mp[u].push_back(v);
        }
        else{
            mp[v].push_back(u);
        }
   }
}
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases){
        fun();
        test_cases--;
    }
}