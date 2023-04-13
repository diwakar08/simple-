# def newtonsqrt(n):
#     approx=0.5*n
#     better=0.5*(approx+(n/approx))
#     while better !=approx:
#         approx=better
#         better=0.5*(approx+(n/approx))
#         return approx
# print(newtonsqrt(64))
def squareRoot(n, l) :
    x = n
    count = 0
    while (1) :
        count += 1
        root = 0.5 * (x + (n / x))
        if (abs(root - x) < l) :
            break
        x = root
 
    return root
 

n = 81
l = 0.000001
print(squareRoot(n, l))