#include <iostream>
#include <vector>

using namespace std;

void fun() {
    int n,x,y;
    cin>>n>>x>>y;
    int A=0,B=0,C=0;
    int ans = 0;
    char a=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=='A'){
            A++;
        }
        else if(a=='B'){B++;}          
        else if(a=='C'){C++;}
    }
    cout<<A<<B;
    if(A>x){ans+=x;x=0;}
    else if(A<=x){ans+=A;x-=A;}
    
    if(B>y){ans+=y;y=0;}
    else{ans+=B;y-=B;}

    if(C>(x+y)){ ans+=(x+y);cout<<ans<<endl;}
    else{ans+=C; cout<<ans<<endl;}
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases){
        fun();
        test_cases--; 
    }
}