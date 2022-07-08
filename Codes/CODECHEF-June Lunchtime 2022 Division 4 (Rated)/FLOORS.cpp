#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
a=a-1;
b=b-1;

/*
if(a==b+1 || b==a+1){
    cout<<1<<endl;
}*/
if((a/10)==(b/10))
{
    cout<<0<<endl;
}

else{
cout<<abs((b/10)-(a/10))<<endl;
}
}

	return 0;
}
