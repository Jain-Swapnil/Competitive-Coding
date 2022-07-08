#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int pa,pb,qa,qb;
	    
	    cin>>pa;
	    cin>>pb;
        cin>>qa;
        cin>>qb;
        
        int pmax=max(pa, pb);
        int qmax= max(qa,qb);
        
        if(pmax>qmax)
        {
            cout<<"Q"<<endl;
        }
        else if(pmax<qmax)
        {
            cout<<"P"<<endl;
        }
        else if(pmax=qmax)
        {
            cout<<"TIE"<<endl;
        }
        
	}
	return 0;
}
