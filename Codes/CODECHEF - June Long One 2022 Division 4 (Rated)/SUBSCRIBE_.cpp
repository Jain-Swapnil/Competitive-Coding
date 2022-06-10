#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    int rem=0;
	    int a=0;
	    cin>>n;
	    cin>>x;
	    a=n/6;
	    rem=n%6;
	    if(rem>0)
	    {
	    cout<<a*x+x<<endl;
	    }
	    else
	    {
	        cout<<a*x<<endl;
	    }
	    }
}
