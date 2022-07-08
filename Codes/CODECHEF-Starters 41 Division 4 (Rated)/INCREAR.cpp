#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
long int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    int ans=0;
	    cin>>x;
	    cin>>y;
	    
	    if(x>y)
	    {
	        if(x%2==0)
	        {
	            if(y%2==0)
	            {
	                ans=abs(x-y)/2;
	            }
	            else
	            {
	                ans=((abs(x-y)+1)/2)+1;
	            }
	        }
	        else
	        {
	            if(y%2==0)
	            {
	                ans=((abs(x-y)+1)/2)+1;
	            }
	            else
	            {
	                ans=(abs(x-y)/2);
	            }
	        }
	          
	    }
	    
	    else
	    {
	       ans=abs(x-y); 
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
