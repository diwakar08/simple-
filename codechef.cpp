#include<bits/stdc++.h>
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
bool sorta(const pair<int,int> &a,const pair<int,int> &b){ if(a.first<b.first) return true;else if(a.first!=b.first) return false;return (a.second < b.second);}
string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) a[i]&='_';  return a;}
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) a[i]|=' ';  return a;}
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
// int powermod(int x, int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
/*======================================================================================*/

void dsc(int t)
{
    string s;
    cin>>s;
    int start=s[0];
    int n=s.size();
    int last=s[n-1];
    vector<pair<int,int>> v;
    fl(i,n)
    {
        v.pb({s[i],i+1});
    }
    sort(all(v),sorta);
    int i1=-1,i2=-1;
    fl(i,n)
    {
        if(i1==-1)
        {
            if(v[i].first==start)
            {
                // cout<<i<<endl;
                i1=i;
            }
        }
        if(i<i1 || i2==-1)
        {
            if(v[i].first==last)
            {
                i2=i;
            }
        }
        
    }
    // cout<<i1<<" "<<i2<<endl;
    cout<<abs(v[i1].first-v[ i2].first)<<" ";
    if(start==last)
    cout<<1<<endl;
    else
    cout<<(abs(i1-i2)+1)<<endl;
    if(i1<=i2)
    {
         for(int i=i1;i<=i2;i++)
         {
             cout<<v[i].second<<" ";
         }
    }
    else
    {
        for(int i=i1;i>=i2;i--)
        {
            cout<<v[i].second<<" ";
        }
    }
    cout<<endl;
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
