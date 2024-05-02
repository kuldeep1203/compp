
#include<bits/stdc++.h>

using namespace std;

void backspaceCompare(string s) {
        for(int i = 0 ; i <s.size();i++){
            if(s[i]=='#'){
                if(i<=s.size()-1){
                    s.erase(i-1,i+1);
                    
                }
                else{
                    s.erase(i-1,s.size());
                }
                

            }
            cout<<s<<" "<<i<<"\n";

        }
        // for(int j =0 ;j<t.size();j++){
        //     if(t[j]=='#'){
        //         if(j!=t.size()-1){
        //             t.erase(j-1,j+1);
        //         }
        //         else{
        //             t.erase(j-1,t.size());
        //         }
                
        //     }
        // }
        // cout<<s<<" "<<t;
        // return s == t;
    
}


int main(){
    string s,t;
    cin>>s;
    // 
    backspaceCompare(s);
    // cout<<ans;
}