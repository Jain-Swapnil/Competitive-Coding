#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int count=0,n;
    cin>>n>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='A')
        {
            count++;
        }
    }
    if(count>(n-count))
    {
        cout<<"Anton"<<endl;
    }
    else if(count==(n-count))
    {
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
}
