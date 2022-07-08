#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x;
	    cin>>y;
	        if(x<=y && y<=x+200)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	}
	return 0;
}
