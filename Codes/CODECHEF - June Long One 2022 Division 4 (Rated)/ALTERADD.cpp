#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b;
	       c=b-a;
	       if(c%3==1 || c%3==0)
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
