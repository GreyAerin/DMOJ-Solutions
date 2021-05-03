import sys
input = sys.stdin.readline

m = int(input())
n = int(input())
k = int(input())
rows = [0]*m
cols = [0]*n
count = 0

for i in range(k):
    s = input().split(" ")
    x = s[0]
    y = int(s[1])
    if(x == "R"):
        rows[y-1]+=1
    else:
        cols[y-1]+=1

for i in range(0, m):
    for j in range(0, n):
        if rows[i] % 2 == 1 and cols[j] %2 == 0:
            count+=1
        elif rows[i] % 2 == 0 and cols[j] % 2 == 1:
            count+=1
print(count)
