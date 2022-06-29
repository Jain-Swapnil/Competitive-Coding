#include <iostream>
using namespace std;

void sum(int arr[]  , int n)
{
    int add=0;
    for(int i=0;i<n;i++)
    {
        add=add+arr[i];
    }
    if(add%2==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sum(arr,n);
	    
	}
	return 0;
}
