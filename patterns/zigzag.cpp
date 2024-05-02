#include<bits/stdc++.h>

using namespace std;

void fun(){
    int n,m;
    cin>>n>>m; 
    bool  side   =  false; 
    //n-length m -width
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<m;j++){
            if(i%2==0) cout<<"#";
            else {
                if(!side && j==m-1 && flag == false){
                    cout<<"#";
                    side =true;
                    flag =true;
                }
                else if(side && j==0 && flag==false){
                    cout<<"#";
                    side=false;
                    flag =true;
                }
                else{
                    cout<<".";
                }


            }
        }
        cout<<"\n";
    }

}


int main(){
    int test_cases = 1;
    // cin>>test_cases;
    while(test_cases--){
        fun();

        cout<<"\n";
    }
}