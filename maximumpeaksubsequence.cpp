#include <iostream>
#include <vector>

using namespace std;

int check(vector<int>b,int m){
    for(int i=1;i<b.size()-1;i++){
        if(b[i]>b[i-1] && b[i]>b[i+1]){
            m++;
        }
    }
    return m;
}

void recur(vector<int>&a, vector<int>b,vector<int>c,int i,int k,int& ma){
    if(b.size()>k){

        return;
    }
    if(b.size()==k){
        int l =check(b,0);
        if(l>=ma){
            ma=l;
            a=b;
        }
        
        return;
        
    }
    if(i==c.size()){
        return;
    }
    b.push_back(c[i]);
    recur(a,b,c,i+1,k,ma);
    b.pop_back();
    recur(a,b,c,i+1,k,ma);

}

void fun() {
    int p,k;
    int ma=0;
    cin>>p>>k;
    vector<int>c(p,0);
    for(int i =0 ;i<p;i++){
        cin>>c[i];
    }

    vector<int>a,b;
    recur(a,b,c,0,k,ma);
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }    
    cout<<endl;
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases){
        fun();
        test_cases--; 
    }
}