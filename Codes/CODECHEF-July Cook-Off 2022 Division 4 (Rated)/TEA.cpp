#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{ 
	    int x,y,z;
	    cin>>x>>y>>z; 
	    
	    if(x%y==0)
	    { int a=x/y;
	    if(a!=0)
	     cout<<a*z<<endl;
	     else
	     cout<<z<<endl;
	    } 
	    else
	    {
	        int b=x/y+1;
	        cout<<b*z<<endl;
	    } 
	    
	    }
}
