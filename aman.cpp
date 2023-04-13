#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,k;
    cin>>n>>k;
    if(k==0)
    {
        cout<<0<<endl;
    }
    else
    {
        long long ans=0,x=1,pre=0,count=1;
        while(x*k<=n+1)
        {
            ans+=((x*k)-pre)*count++;
            pre=x*k;
            x*=k;
        }
        ans+=((n+1)-x)*count;
        cout<<ans<<endl;
    }
}

