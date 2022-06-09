#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long int a;
	    long int b;
	    long int c,d;
	    long int count=0;
	    cin>>a;
	    cin>>b;
	    while(1)
	    {
	    if(a%3==0 || b%3==0)
	    {
	        cout<<count<<endl;
	        break;
	    }
	    else
	    {
	        
	        if(a>b)
	        {
	            a=abs(a-b);
	            count++;
	            
	        }
	        else
	        {
	             b=abs(a-b);
	            count++;
	        }
	    }}
	}
	return 0;
}
