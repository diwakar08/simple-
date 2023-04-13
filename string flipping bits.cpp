#include"bits/stdc++.h"
using namespace std;
#define int             long long int
#define endl            "\n"
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define mpr             make_pair
#define py              cout<<"YES\n"
#define pn              cout<<"NO\n"
#define pi              3.141592653589793238
#define pll             pair<int,int>
#define all(v)          v.begin(),v.end()
#define umap            unordered_map<int,int>
#define omap            map<int,int>
#define vec             vector<int>
#define fl(i,n)         for(int i=0;i<n;i++)
#define mod             1000000007
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for(auto &it:v)
    cin>>it;
    return istream;
}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
// bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){ if(a.first<b.first) return true;else if(a.first!=b.first) return false;return (a.second < b.second);}
// string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
// string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
// int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
// int lcm(int a,int b){return (a/gcd(a,b))*b;}
// int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
/*======================================================================================*/
// bit flipping
void dsc(int t)
{
    int n,k;
    cin>>n>>k;
    string s,initial;
    cin>>s;
    initial=s;
    int k1=k;
    if(k%2)
    {
        int ones=0;
        fl(i,n)
        {
            if(s[i]=='1')
            ones++;
        }
        if(ones>=k)
        {
            int index=0;
            while(k)
            {
                if(s[index]=='1')
                {
                    k--;
                }
                else
                s[index]='1';
                index++;
            }
            for(int i=index;i<n;i++)
            {
                if(s[i]=='1')
                s[i]='0';
                else
                s[i]='1';
            }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                s[i]='1';
            }
            if(ones%2==0)
            {
                s[n-1]='0';
            }
        }
        cout<<s<<endl;
        fl(i,n)
        {
            if(i==n-1)
            cout<<k1<<endl;
            else if(initial[i]=='1'&&k1>0)
            {
                k1--;cout<<1<<" ";
            }
            else
            cout<<0<<" ";


        }
    }
    else
    {
        int zeroes=0;
        fl(i,n)
        if(s[i]=='0')
        zeroes++;
        if(k<=zeroes)
        {
            int index=0;
            while(k)
            {
                if(s[index]=='0')
                {
                    s[index]='1';
                    k--;
                }
                index++;
            }
        }
        else
        {
            fl(i,n)
            s[i]='1';
            if(zeroes%2)
            s[n-1]='0';
        }
        cout<<s<<endl;
        fl(i,n)
        {
            if(i==n-1)
            cout<<k1<<endl;
            else if(initial[i]=='0'&&k1>0)
            {
                k1--;cout<<1<<" ";
            }
            else
            cout<<0<<" ";


        }
    }
}

/*======================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--)
    {
        // cout<<"Case #"<<tt-t<<": ";
        dsc(tt-t);
    }
}