#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,total;
	    cin>>n>>k;
	   int days=n/5;
	    if(n%5>0)
	    {
	        total=days+1;
	    }
	    else if(n%5==0)
	    {
	        total=days;
	    }
	    int total1=k/5;
	   int ans;
	    if(k%5==0)
	        ans=total-total1;
	   else
	    ans=total-total1-1;
	   cout<<ans<<endl;
	    
	    
	}
	return 0;
}
