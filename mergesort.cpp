#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    int l=low,h=mid+1;
    int a[high-low];
    int x=0;
    while(low<=mid || h<=high)
    {
        if((arr[low]<=arr[h] || h>high)&&low<=mid)
        a[x++]=arr[low++];
        else
        a[x++]=arr[h++];
    }
    x=0;
    for(int i=l;i<=high;i++)
    {
        arr[i]=a[x++];
    }
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // int a[n];
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}