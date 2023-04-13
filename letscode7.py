v=int(input())
even=0
odd=0

for i in range(v):
    n=int(input())
    b=str(input())
    c=list(b)
    for j in c:
        if c.index(j)%2==0:
            even=even+int(j)
        else:
            odd=odd+int(j)
            
    if even>odd:
        print("Even")
    elif even==odd:
        print("Draw")
    else:
        print("Odd")