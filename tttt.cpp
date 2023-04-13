#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n2,n3,n4;
        cin>>n2>>n3>>n4;
        ll ans=0;
        
        ll flag=1;
    if(n2==n3 && n3==n4)
        {
            ll sum=2*n2+3*n3+4*n4;
            ll x=sum/10;
            cout<<x<<"\n";
            continue;
        }
        ll mn=min(n2,n3);
        mn=min(mn,n4);
        if(mn>9)
        {
            ll x=mn/10;
            ll sum1;
            sum1=90*x;
            sum1/=10;
            ans+=sum1;
            n2-=(x*10);
            n3-=(x*10);
            n4-=(x*10);

        }
    while(flag==1)
    {
        flag=0;
        
        if(n2>0 && n4>1)
        {
            ll x,y;
            x=n4/2;
            y=n2;
            y=min(x,y);
            ans+=y;
            n4-=2*y;
            n2-=y;
            flag=1;
        }
        if(n4>0 && n3>1)
        {
            ll x,y;
            x=n3/2;
            y=n4;
            y=min(x,y);
            ans+=y;
            n4-=y;
            n3-=2*y;
            flag=1;
        }
        if(n2>1 && n3>1)
        {
            ll x,y;
            x=n2/2;
            y=n3/2;
            y=min(x,y);
            ans+=y;
            n2-=2*y;
            n3-=2*y;
            flag=1;
        }
        
        if(n2>2 && n4>0)
        {
            ll x,y;
            x=n2/3;
            y=n4;
            y=min(x,y);
            ans+=y;
            n2-=3*y;
            n4-=y;
        }
        //cout<<n2<<" "<<n3<<" "<<n4<<endl;
    }
        if(n2>5)
        {
            ans+=n2/5;
            n2%=5;
            flag=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}