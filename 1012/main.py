N = int(raw_input())
K = int(raw_input())

res = [[0 for i in xrange(2)] for j in xrange(N)]

res[0][0], res[0][1] = 0, K-1

for i in xrange(1,N):
    res[i][0] = res[i-1][1]
    res[i][1] = (res[i-1][0] + res[i-1][1]) * (K-1)

print res[N-1][0] + res[N-1][1]
    
