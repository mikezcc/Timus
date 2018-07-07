from sys import stdin, stdout
import math

try:
    inf = open('input.txt')
except IOError:
    inf = stdin

[N, K]  = [int(x) for x in inf.readline().split(' ')];
hrs     = 0;
while( 1 << hrs < K and 1 << hrs < N ):
    hrs += 1
if 1 << hrs < N :
    hrs += ( N - (1 << hrs) - 1 ) // K + 1
print(hrs)
