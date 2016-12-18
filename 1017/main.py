N = int(raw_input())

Q = [[0 for i in xrange(N+1)] for j in xrange(N+1)]

for i in xrange(5,N+1):
    if i % 2 == 0:
        for j in xrange(1, i/2):
            Q[i][j] += 1
            for k in xrange(j+1, (i-1)/2 + 1):
                Q[i][j] += Q[i-j][k]
    else:
        for j in xrange(1, i/2 + 1):
            Q[i][j] += 1
            for k in xrange(j+1, (i-1)/2):
                Q[i][j] += Q[i-j][k]

print sum(Q[N][0:(N/2+1)])

