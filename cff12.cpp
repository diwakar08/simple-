#include<bits/stdc++.h>
using namespace std;
#define int             long long int
#define ll              long long
#define endl            "\n"
#define pb              push_back
#define ppb             pop_back
#define pf              push_front
#define ppf             pop_front
#define mpr             make_pair
#define py              cout<<"YES\n"
#define pn              cout<<"NO\n"
#define pi              3.141592653589793238
#define pll             pair<ll,ll>
#define all(v)          v.begin(),v.end()
#define umap            unordered_map<ll,ll>
#define omap            map<ll,ll>
#define vec             vector<ll>
#define fl(i,n)         for(int i=0;i<n;i++)
#define mod             1000000007
template <typename T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for(auto &it:v)
    cin>>it;
    return istream;
}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
void print(vec arr){for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<endl;}
/*==========================================================================================*/
void dsc()
{
    int n,d;
    cin>>n>>d;
    vec v(n);
    cin>>v;
    sort(all(v));
    int  ans=0;
    int x=n;
    int ok=0;
    for(int i=n-1;i>=0;i--)
    {
        if(x>0&&v[i]>d)
        {
            ans++;
            x--;
        }
        else if(x>1)
        {
            int p=d+v[i];
            p=p/v[i];
            if(x>=p)
            {
                ans++;
                x-=p;
            }
            else 
            ok=1;
        }
        // gfgf
        else
        ok=1;
        if(ok)
        break;
    }
    cout<<ans<<endl;
}
/*==========================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    // cin>>t;
    // int tt=t;
    while(t--)
    {
        // cout<<"Case #"<<tt-t<<": ";
        dsc();
    }
}