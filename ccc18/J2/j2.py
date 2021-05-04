import sys
input = sys.stdin.readline

n = int(input())
count = 0
l1 = input()
l2 = input()

for i in range(n):
    if l1[i] == l2[i] and l1[i] == "C":
        count +=1

print(count)
