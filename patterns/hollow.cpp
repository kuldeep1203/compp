#include<bits/stdc++.h>

using namespace std;

void fun(){
    int n,m;
    cin>>n>>m; //n-length m -width
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i==0||i==n-1)||(j==0||j==m-1)) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

}


int main(){
    int test_cases = 0;
    cin>>test_cases;
    while(test_cases--){
        fun();

        cout<<"\n";
    }
}