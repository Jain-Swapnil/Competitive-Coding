#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,c;
	    cin>>x;
	    cin>>y;
	    c=x-y;
	    if(x>=y)
	    {
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
