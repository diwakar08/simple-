import os,sys
from io import BytesIO, IOBase
import threading
 
if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip
 
def ii():  return int(input())
def si():  return input()
def mi():  return map(int,input().strip().split(" "))
def msi():return input().strip().split(" ") # if variable is single then it will be list and if variable and values are same it will assigne them the value as string else through an error
def li():  return list(mi())
 
def dmain():
    sys.setrecursionlimit(1000000)
    threading.stack_size(1024000)  
    thread = threading.Thread(target=main)
    thread.start()
    
from math import log,sqrt,factorial,cos,tan,sin,radians,floor,pow,pi
#from collections import deque, Counter, OrderedDict,defaultdict
#from heapq import nsmallest, nlargest, heapify,heappop ,heappush, heapreplace
#from bisect import bisect,bisect_left,bisect_right,insort,insort_left,insort_right
#from decimal import *
#import threading
#from itertools import permutations
#Copy 2D list  m = [x[:] for x in mark] .. Avoid Using Deepcopy
 
abc='abcdefghijklmnopqrstuvwxyz'
abd={'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7, 'i': 8, 'j': 9, 'k': 10, 'l': 11, 'm': 12, 'n': 13, 'o': 14, 'p': 15, 'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21, 'w': 22, 'x': 23, 'y': 24, 'z': 25}
mod=1000000007
vow=['a','e','i','o','u']

 
def getKey(item): return item[0] # returns first index element of an itme
def sort2(l):return sorted(l, key=getKey) # returns new sorted list
def d2(n,num):return [[num for _ in range(n)] for _ in range(n)]
def ntl(n):return [int(i) for i in str(n)] # 1234 -> [1,2,3,4]
def powerMod(x,y,p):
    res = 1
    x %= p
    while y > 0:
        if y&1:
            res = (res*x)%p
        y = y>>1
        x = (x*x)%p
    return res
def gcd(x, y):
    while y:
        x, y = y, x % y
    return x
def ceil(x,y):
    if x%y==0:
        return x//y
    else:
        return x//y+1
def isPrime(n): # Check Prime Number or not 
    if (n <= 1) : return False
    if (n <= 3) : return True
    if (n % 2 == 0 or n % 3 == 0) : return False
    i = 5
    while i ** 2 <= n: 
        if (n % i == 0 or n % (i + 2) == 0) : 
            return False
        i += 6
    return True

def read():
    sys.stdin  = open('input.txt', 'r')  
    sys.stdout = open('output.txt', 'w') 


BUFSIZE = 8192
 
 
class FastIO(IOBase):
    newlines = 0
 
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None
 
    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()
 
    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()
 
    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)
 
 
class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")
 
 
def print(*args, **kwargs):
    """Prints the values to a stream, or to sys.stdout by default."""
    sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
    at_start = True
    for x in args:
        if not at_start:
            file.write(sep)
        file.write(str(x))
        at_start = False
    file.write(kwargs.pop("end", "\n"))
    if kwargs.pop("flush", False):
        file.flush()
 
 
if sys.version_info[0] < 3:
    sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
    sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
 
input = lambda: sys.stdin.readline().rstrip("\r\n")
 


# Code starts here
def main():
    no_dict = {'0':'zero','1':'one', '2':'two','3':'three','4':'four','5':'five','6':'six','7':'seven','8':'eight','9':'nine',}
    word_dict = {'zero': '0', 'one': '1', 'two': '2', 'three': '3', 'our': '4', 'five': '5', 'six': '6', 'seven': '7', 'eight': '8', 'nine': '9'}
    s = msi()
    result=''
    temp_var = 0
    for _ in s:
        if _ in word_dict:
            if temp_var == 0:
                result+=word_dict[_]
            else:
                result+= word_dict[_]*temp_var
                temp_var =0
        else:
            if _ == 'double':
                temp_var+=2
            else:
                temp_var+=3
    print(result)

    return 0


if __name__ == "__main__":
    #read()
    main()
    #dmain()