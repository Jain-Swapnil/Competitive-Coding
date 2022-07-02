#include<iostream>
using namespace std;
int main()
{
    int a,b,n,total=0,max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        total=total-a;
        total=total+b;
        if(total>max)
        {
        max=total;
        }
    }
    cout<<max<<endl;
}
