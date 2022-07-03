#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x%3==0)
	    {
	        cout<<0<<endl;
	    }else
	    {
	        cout<<abs(x-(((x/3)+1)*3))<<endl;
	    }
	}
	return 0;
}
