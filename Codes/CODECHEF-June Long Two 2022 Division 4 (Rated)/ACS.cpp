#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int rem=a/100;
	    int mod=a%100;
	    if(mod>10-rem)
	    {
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<rem+mod<<endl;
	    }
	}
	return 0;
}
