#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    int q=1;
	    long int arr[10000000];
	    cin>>n;
	    p=n;
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    arr[n-i]=p;
                    p=p-1;
                }
                else
                {
                    arr[n-i]=q;
                    q=q+1;
                    
                }
                
            }
            
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2!=0)
                {
                    arr[n-i]=q;
                    q=q+1;
                   
                }
                else
                {
                    arr[n-i]=p;
                    p=p-1;
                    
                }
                
            }
            
        }
        arr[n]=n;
        for(int i=1;i<n+1;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}
