import sys
input = sys.stdin.readline

n = int(input())
p1 = input().split()
p2 = input().split()
i = 0
flag = False
while i < n:
    if p1[i] != p2[p1.index(p2[i])] or p1.index(p2[i]) == i:
        print("bad")
        flag = True
        break
if not flag:
    print("good")
