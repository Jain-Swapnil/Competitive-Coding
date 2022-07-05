#include<iostream>
using namespace std;
int main()
{
    long long int a,count=0,count1=0,count2=-1;
    cin>>a;
    while(a>0)
    {
        if(a%10==4 || a%10==7)
        {
            count++;
        }
        a=a/10;
    }
    while(count>0)
    {
        count2=0;
        if(count%10==4 || count%10==7)
        {
            count1++;
        }
        count=count/10;
        count2++;
    }
    if(count2==count1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
