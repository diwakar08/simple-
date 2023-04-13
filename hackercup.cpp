#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,tt;
    cin>>t;
    tt=t;
    while(t--)
    {
        cout<<"Case #"<<tt-t<<": ";
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ll ans=0,sum=0,count1=0,count2=0,count=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll k=0;k<=(n-i);k++)
            {
                ll x=k+i-1;
                ll flag=0;
                    count=0;
                for(ll j=k;j<=x;j++)
                {
                    cout<<s[j]<<" ";                        
                }
                cout<<endl;
                sum+=count;
            }
        }
        //cout<<sum<<endl;
        }
    }    
    return 0;
}