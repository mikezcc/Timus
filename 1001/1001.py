from sys import stdin, stdout
from math import sqrt

try:
    inf = open('input.txt')
except IOError:
    inf = stdi
#inf = stdin
stdout.write('\n'.join(['%.4f' % sqrt(float(t)) for t in reversed(inf.read().split())]))
