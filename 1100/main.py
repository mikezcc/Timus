N=int(raw_input())
A=[]
for i in range(N):
    Id, M = raw_input().split()
    Id, M = int(Id), int(M)
    A.append([Id, M])

while True:
    swapped = False
    for i in range(1,N):
        if A[i-1][1] < A[i][1]:
            A[i-1], A[i] = A[i], A[i-1]
            swapped = True
    N -= 1
    if not swapped:
        break

for i in range (len(A)):
    print A[i][0], A[i][1]

