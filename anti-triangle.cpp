#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long l;
	    cin>>l;
	    
	    long long count=0;
	    long long last=1;
	    if(l&1)
	    {
	        for(int i=1;i<=(l+1)/2 && count<n;i++)
	        {
	            cout<<i<<" ";
	            last=i;
	            count++;
	        }
	    }
	    else
	    {
	        for(int i=1;i<=(l)/2 && count<n;i++)
	        {
	            cout<<i<<" ";
	            last=i;
	            count++;
	        }
	    }
	    
	    while(count<n)
	    {
	       count++;
	       last+=l;
	       cout<<last<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}