#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,ans;
        cin>>p>>q;
        ans=(p+q)%4;
        if(ans==1  ||ans==0)
        {
            cout<<"ALICE"<<endl;
        }
        else if(ans==2 || ans==3)
        {
            cout<<"BOB"<<endl;
        }
    }

    return 0;
}
