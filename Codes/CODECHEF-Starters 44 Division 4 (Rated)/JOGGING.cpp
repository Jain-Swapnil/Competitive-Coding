#include <iostream>
#include<vector>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	    vector<long long int> arr;
	    arr.push_back(1);
	    for(int i=0;i<10000000;i++)
	    {
	        int s=arr.size();
	        arr.push_back(((arr[s-1])*2)%1000000007);
	    }
	while(t--)
	{
	    	long long int a,b;
	    cin>>a>>b;
	    cout<<(arr[a-1]*b)%1000000007<<endl;
	    
	}
	
	
	return 0;
}
