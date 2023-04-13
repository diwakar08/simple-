#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        while(n%4==0)
        {
            count++;
            n/=4;
        }
        // cout<<count<<endl;
        int a=0,b=0;
        bool ok=false;
        for(int i=0;i<=sqrt(n);i++)
        {
            int square=i*i;
            int sqr_root=sqrt(n-square);
            if(sqr_root*sqr_root==(n-square))
            {
                a=i;
                b=sqr_root;
                ok=true;
                break;
                
            }
            
        }
        // cout<<a<<" "<<b<<endl;
        if(!ok)
        {
            cout<<-1<<endl;
            continue;
        }
        int power=pow(2,count);
        a*=power;
        b*=power;
        cout<<a<<" "<<b<<endl;
        // cout<<a*a+b*b<<endl;
    }
}