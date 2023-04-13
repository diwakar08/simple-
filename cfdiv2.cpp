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
void print(vec v){for(int i=0;i<v.size();i++) cout<<v[i]<<" "; cout<<endl;}

/*======================================================================================*/
//question name - 
// C++ function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y);
 
// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
int modInverse(int b, int m)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x%m + m) % m;
}
 
// Function to compute a/b under modulo m
int modDivide(int a, int b, int m)
{
    a = a % m;
    int inv = modInverse(b, m);
    return (inv * a) % m;
}
 
// C function for extended Euclidean Algorithm (used to
// find modular inverse.
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

void dsc(int t)
{
    int n;
    cin>>n;
    int n1;
    int ans=0;
    int a=(((n*(n+1))%mod)*(2*n+1));
    ans=modDivide(a,6,mod);
    n1=n-1;
    ans%=mod;
    a=(2*n1)%mod;
    ans+=a;
    ans%=mod;
    int b1=4*((n1*(n1-1))%mod);
    ans+=modDivide(b1,2,mod);
    ans%=mod;
    int c1=2*((((n1*(n1-1))%mod)*(n1-2))%mod);
    ans+=modDivide(c1,6,mod);
    ans%=mod;
    // ans+=(+(4*((n1*(n1-1))/2))+(2*((n1*(n1-1)*(n1-2))/6)));
    // cout<<ans<<endl;
    cout<<(ans*2022)%mod<<endl;
}
/*======================================================================================*/
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t=1;
    cin>>t;
    int tt=t;
    while(t--)
    {
        dsc(tt-t);
    }
}