#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void fun() {
    int n,m;
    cin>>n>>m;
    vector<int>a(n,0);
    vector<int>b(m,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    
    long long s = 0;
    
    int l1=0,l2=n-1,h1=0,h2=m-1;
   
    while(l1<=l2){
        
        if(abs(a[l1]-b[h1])>=abs(a[l2]-b[h2])){
            
            s+=abs(a[l1]-b[h1]);
            l1++;
            h1++;
        } 
        else{
           
            s+=abs(a[l2]-b[h2]);
            l2--;
            h2--;
        }   
    }
    cout<<s<<endl;

    
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases) {
        fun();
        test_cases--;
    }

    return 0;
}