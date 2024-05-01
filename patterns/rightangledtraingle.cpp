#include<bits/stdc++.h>

using namespace std;

void fun(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout<<"*";
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