import math
factor = [0 for i in xrange(10000)]

def factorization(N):
    for i in xrange(2, N+1):
        if N < i:
            break
        while N % i == 0:
            factor[i] += 1
            N /= i

for i in xrange(10):
    N = int(raw_input())
    factorization(N)

res = 1
for i in xrange(len(factor)):
    res *= factor[i] + 1

print res % 10
