first missing positive
[1 2  3  1 2 3 ]    [2 -1]   [-2 -1]   start=0 x
for(int i=0;i<n;i++)
{
    if(arr[i]>0)
    {
        arr[start]=arr[i];
        start++;
    }
}
3
min=1
max=3=n+1
1 2 3 0 -3 -4
[1 3 2 4 7 ]   [-1 -3 -2 -4 -5]  n+1; 
 
[2 1 4 5 3 98 ]  [2 -1 4 5 3 7 ]  [-2 -1 4 5 3 7]  [-2 -1 4 -5 3 7]  [-2 -1 4 -5 -3 7] [-2 -1 -4 -5 -3 7]