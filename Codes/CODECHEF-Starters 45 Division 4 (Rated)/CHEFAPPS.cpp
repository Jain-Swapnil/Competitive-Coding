#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,n;
	    cin>>a>>b>>c>>d;
	    if((b+c+d)<=a)
	    {
	        cout<<0<<endl;
	    }
	    else{
	        int n=b+c;
	        int p=a-b-c;
	        if(b>c)
	        {
	            if((p+b-d)<=a && (p+b-d)>=0)
	            {
	                cout<<1<<endl;
	            }
	            else if((p+b+c-d)<=a && (p+b+c-d)>0){
	                cout<<2<<endl;
	            }
	        }
	        else
	        {
	            if(p+c-d<=a && p+c-d>=0)
	            {
	                cout<<1<<endl;
	            }
	             else if((p+b+c-d)<=a && (p+b+c-d)>=0){
	                cout<<2<<endl;
	            }
	        }
	    }
	}
	return 0;
}
