#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define va vector<int>
#define vs vector<char>

#define pb push_back

/**          HINTS/NOTES                 **/
//when a problem statement says to find the end result of some
//process, or to find when something occurs, it’s usually sufficient to simulate the process.
//binary exponentiation - use pow()function for finding powers does it much faster 
//A bitmask is an integer whose binary 
//representation is used to represent a subset. 









ll int gcd_(ll int a,ll int b){ //eculidean algo for finding gcd 




    while(a){
        ll t =a;
        a=b%a;
        b=t;
    }
    return b;
}
ll int lcm__(ll int gcd,ll int a,ll int b){
    ll int t = (a*b);
    ll int g =gcd_(a,b);
    return t/g;
    //gcd * lcm = a*b;
    //min(x^a,x^b) for every prime factor = gcd(a,b)
    //max(x^a,x^b) for every prime factor = lcm(a,b)
}


void debug(int a){
    cout<<a;
}

bool issafe(int i,int j,vector<vector<char>>chessboard){
    if(i==0){
        return true;
    }
    for(int k=0;k<i;k++){
        if(chessboard[k][j]=='Q') return false;
    }

    for(int row = i-1,col=j-1;row>=0 && col>=0;row--,col--){
        if(chessboard[row][col]=='Q') return false;
    }
     for(int row = i-1,col=j+1;row>=0 && col<8;row--,col++){
        if(chessboard[row][col]=='Q') return false;
    }

    return true;


}


void place(int& ans,vector<vector<char>>chessboard,int i,int count){
    if(count==8){
        ans++;
        return;
    }
    if(i>=8){
        return;
    }
    
    for(int j=0;j<8;j++){
        if(issafe(i,j,chessboard) && chessboard[i][j]!='*'){
            chessboard[i][j]='Q';
            count++;
            place(ans,chessboard,i+1,count);
            chessboard[i][j]='.';
            count--;
        }
        

    }


};


int main(){
    // freopen("problemname.in", "r", stdin);
	// // the following line creates/overwrites the output file
	// freopen("problemname.out", "w", stdout);
    // int test_cases;
    // cin>>test_cases; 
    vector<vector<char>>chessboard;
    for(int i=0;i<8;i++){
        vector<char>row;
        for(int j=0;j<8;j++){
            char b;
            cin>>b;
            row.push_back(b);
        }
        chessboard.push_back(row);
        row.clear();
    }
    int ans =0;
    place(ans,chessboard,0,0);

    // for(int i=0;i<chessboard.size();i++){
    //     for(int j=0;j<chessboard.size();j++){
    //         cout<<chessboard[i][j];
    //     }
    //     cout<<"\n";
    // }
   
    cout<<ans;

    return 0;

}