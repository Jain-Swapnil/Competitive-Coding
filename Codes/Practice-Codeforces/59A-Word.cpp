#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	string a;
    int count=0,n;
    cin>>a;
    n=a.length();
	for (int i = 0; i <n; i++)
  	{
  		if(islower(a[i]))
          {
              count++;
          }
  	}  	
    if(count>=(n-count))
    {
        for (int i = 0; i <n; i++)
  	    {
  		a[i] = tolower(a[i]);
  	    }  
    }
    else{
        for (int i = 0; i <n; i++)
  	    {
  		a[i] = toupper(a[i]);
  	    }  
    }
	cout<<a<<endl;
		
 	return 0;
}
