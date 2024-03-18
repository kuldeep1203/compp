#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back      
#define tp3 1000
#define tp5 100000
#define tp6 1000000
#define tp9 1000000000
#define inf 100000000000000000
#define mod 1000000007
#define ff first
#define ss second


typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef map<ll,ll> mll;
typedef stack<ll> sll;
typedef stack<pll> spll;
typedef greater<ll> gll;
typedef priority_queue<ll,vll,gll> pqmin;
typedef priority_queue<ll> pqmax;




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



// vector<vector<int>> createAdjacencyMatrix(int n, const vector<vector<int>>& edges) {
//     // Initialize the adjacency matrix with all zeros
//     vector<vector<int>> adj(n, vector<int>(n, 0));

//     // Update the adjacency matrix based on the input edges
//     for (int j = 0;j<edges.size();j++) {
//         int u = edges[j][0];
//         int v = edges[][1];
//         // Since it's an undirected graph, mark both (u, v) and (v, u) as connected
//         adj[u][v] = 1;
//         adj[v][u] = 1;
//     }

//     return adj;
// }



int main() {
    int n, m;
    cin >> n >> m; 
    vector<vector<int>> edges(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }
    for(int i = 0; i < m; i++) {
        cout<<edges[i][0]<< edges[i][1];
        cout<<"\n";    
        }
    // Create the adjacency matrix
    vector<vector<int>> adj(n,vector<int>(n,0));
     for (int j = 0;j<edges.size();j++) {
        int u = edges[j][0];
        int v = edges[j][1];
        // Since it's an undirected graph, mark both (u, v) and (v, u) as connected
        adj[u-1][v-1] = 1;
        adj[v-1][u-1] = 1;
    }

    for(int i=0;i<adj.size();i++)
    {
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}



