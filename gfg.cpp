#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    cout<<arr.size()<<endl;
    string subArr;
    n=arr.size();
    for (int i=0;i<=n;i++)
    {      subArr=arr[i];
        for (int j=i+1;j<=n;j++)
        {
            cout<<subArr<<" ";
            subArr=subArr+arr[j];
            cout<<endl;
        }
    }
    return 0;
}