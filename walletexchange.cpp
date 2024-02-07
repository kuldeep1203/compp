#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void fun(){
    int  alice,bob;
    cin>>alice>>bob;
    if((alice+bob)%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
}
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases){
        fun();
        test_cases--;
    }
}