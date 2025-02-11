#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n =0;
    cin>>n;
    string s,ans;
    while(n--){
        cin>>s;
        if(s.size()<=10) cout<<s<<'\n';
        else{
            int count = s.size() - 2; 
            string ct = to_string(count);  
            ans = s[0] + ct + s[s.size() - 1];
            cout<<ans<<"\n";
        }
    }

    return 0;
}