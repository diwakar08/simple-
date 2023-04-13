t=int(input())
while t>0:
    t-=1
    n=int(input())
    
    ans=(n*(n+1)*(2*n+1))/6
    n1=n-1
    ans1=((2*n1)+(4*((n1*(n1-1))/2))+(2*((n1*(n1-1)*(n1-2))/6)))
    ans%=1000000007
    ans1%=1000000007
    ans+=ans1
    ans*=2022
    ans=int(ans)
    print(ans%1000000007)