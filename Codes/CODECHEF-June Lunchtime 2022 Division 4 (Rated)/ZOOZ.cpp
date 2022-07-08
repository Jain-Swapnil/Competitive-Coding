#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	string a="";
	if(n%2==0)
	{
	    int s=(n/2)-1;
	    for(int i=0;i<s;i++)
	    {
	        a=a+"1";
	    }
	    a=a+"00";
	    for(int i=0;i<s;i++)
	    {
	        a=a+"1";
	    }
	    a=a;
	    cout<<a<<endl;
	}
	else
	{

	    for(int i=0;i<n/2;i++)
	    {
	        a=a+"01";
	    }
	    a=a+"0";
	    cout<<a<<endl;
	}}
	return 0;
}
