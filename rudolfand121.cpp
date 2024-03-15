#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool canMakeAllZero(vector<int>& arr, int n) {
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<=arr[i+1] && arr[i]>=2*arr[i-1]){
            arr[i+1]-=arr[i-1];
            arr[i]-=2*arr[i-1];
            arr[i-1]=0;
        }

    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            return false;
        
        }
    }
    return true;

    

    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        if(canMakeAllZero(arr, n)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
        cout<<"\n";
    }
    return 0;
}
