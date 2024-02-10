#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back


void debug(int a){
    cout<<a;
}



// void fun(){

// };


int main(){
    int test_cases;
    cin>>test_cases;
    if(test_cases==2 || test_cases==3){
        cout<<"NO SOLUTION";

    }
    else if (test_cases == 4) cout << "2 4 1 3\n";
    else if(test_cases == 5) cout <<" 2 4 1 3 5";
    else if(test_cases==1){
        cout<<1;
    }
    else{
        for(int i=1; i<=test_cases; i=i+2){cout<<i<<" ";}
        for(int i=2; i<=test_cases;i= i+2){cout<<i<<" ";}
    }

    return 0;

}