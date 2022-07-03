#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(z%y==0)
	    {
	        cout<<(z/y)*x<<endl;
	    }
	    else if(z/y<1)
	    {
	        cout<<floor((z/y)*x)+z<<endl;
	    }
	    else
	    {
	        cout<<floor((z/y)*x)+z+1<<endl;
	    }

	}

    	return 0;
}
