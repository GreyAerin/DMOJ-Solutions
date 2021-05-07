import sys
input = sys.stdin.readline

q = int(input())
n = int(input())
dmoj = list(map(int, input().split()))
peg = list(map(int, input().split()))
speed = 0
dmoj.sort()
peg.sort()

if q == 2:
    peg.reverse()
for i, j in zip(dmoj, peg):
    speed += max(i, j)
print (speed)
