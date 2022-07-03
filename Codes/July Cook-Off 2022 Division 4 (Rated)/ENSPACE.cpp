#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n>=a+2*b)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
