
#include<string>
#include<bits/stdc++.h>

using namespace std;

void backspaceCompare(string s) {
        int k=0;
        for(int i = 0 ; i <s.size();i++){
            if(s[i]=='#'){
                s.erase(i-1,i);
                i= max(0,i-2);
            
            }
                
               

        }
        cout<<s;
    
    
}


int main(){
    string s,t;
    cin>>s;
    // 
    backspaceCompare(s);
    // cout<<ans;
}