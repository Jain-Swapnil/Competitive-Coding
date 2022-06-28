#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    string a;
    cin>>n;
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        if(a[i-1]==a[i])
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
