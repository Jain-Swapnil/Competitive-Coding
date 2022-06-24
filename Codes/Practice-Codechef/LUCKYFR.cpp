#include <iostream>
using namespace std;

int main() {
    long t;
    cin>>t;
   
	while(t--)
	{
	 long long a,count;
	   count=0;
	   cin>>a;
	   while(a!=0)
	   {
	       if(a%10==4)
	       {
	           
	           count++;
	       }
	      // cout<<count<<" "<<a<<endl;
	       
	       a=a/10;
	   }
	
	    cout<<count<<endl;
	}
	
	return 0;
}
