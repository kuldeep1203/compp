#include <iostream>
#include <vector>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<int> a(n, 0); // Corrected vector initialization
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        if(a[i]==a[i+1]){
            cout<<"NO"<<endl;
            i++;
        }
        else if()
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases){
        fun();
        test_cases--; 
    }
}