#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            cout<<"element found at "<<i<<" index";
            p=1;
        }
        if(p==1)
        break;
    }
    if(p==0)
    cout<<"element not found\n";

    return 0;
}