#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int count=0;
	int p[1000];
	for(int i=0; i<4;i++)
	{
	    cin>>p[i];
	}
	for(int i=0;i<4;i++)
	{
	    if(p[i]>=10)
	    {
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
