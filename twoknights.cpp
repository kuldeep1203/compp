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
    ll int k;
    cin >> k;
    for (ll int n = 1; n <= k; n++)
    {
        cout << n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << endl;
    }
    return 0;

    return 0;

}