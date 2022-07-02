#include <iostream>
using namespace std;
int sort(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return sort(arr, n - 1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,sum=0,a,check=0;
	    cin>>n>>x;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n-1;i++){
	        if(arr[i]>arr[i+1])
	            {
	                sum=arr[i]+arr[i+1];
	                if(sum>x)
	                {
	                    check=1;
	                    break;
	                }
	                else{
	                    a=arr[i];
	                    arr[i]=arr[i+1];
	                    arr[i+1]=a;
	                }
	            }
	        }
	       if(check==1)
	       {
	        cout<<"NO"<<endl;
	       }
	       else{
	       cout<<"YES"<<endl;
	       }
	}
	return 0;
}
