#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int x,y,z;
	    long int ans=0;
	    long int c=0;
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    c=5*x+10*y;
	    ans=c/z;
	    
	    cout<<ans<<endl;
	}
	return 0;
}
