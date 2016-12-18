N = int(raw_input())

upper, lower = 10**N, 10**(N-1)

count = 0

def check(i, j):
    f = 0
    while j % 2 == 0 and f < N:
        j /= 2
        f += 1
    f = 0
    while j % 5 == 0 and f < N:
        j /= 5
        f += 1
    return i % j == 0

for i in xrange(lower, upper):
    for j in xrange(lower, upper):
        if j % i == 0 and check(i, j):
            count += 1

print count
