#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string c;
	    cin>>n;
	    cin>>c;
	    for(int i=0;i<n;i++)
	    {
	        if(c[i]=='A')
	        {
	            c[i]='T';
	        }
	         else if(c[i]=='T')
	        {
	            c[i]='A';
	        }
	         else if(c[i]=='G')
	        {
	            c[i]='C';
	        }
	         else if(c[i]=='C')
	        {
	            c[i]='G';
	        }
	        
	    }
	   cout<<c<<endl;
	}
	return 0;
}
