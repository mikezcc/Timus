N = int(raw_input())
syl=[0]*18
syl[0],syl[1]=2,3
for i in range(N):
    if syl[i] != 0:
        print syl[i]
    else:
        syl[i] = syl[i-1] * (syl[i-1] - 1) + 1
        print syl[i]
