import sys
input = sys.stdin.readline

s = input().split(" ")
t = int(s[0])
n = int(s[1])
sum = 0
add = 1
while add < t and add < n:
    add += add
    sum += 1

sum += int((t-add+n-1)/n)

print(sum)
