import sys 
n=len(sys.argv)
print("total number of arguments",n)
print("first argument",sys.argv[0])
sum=0
try:
    for i in range(1,n):
        sum=sum+int(sys.argv[i])
except:
    print("invalid value error occured...")
    print("the sum of all elements ",sum)
