import sys
input = sys.stdin.readline

n = int(input())
min_x = 101
max_x = 0
min_y = 101
max_y = 0
while n:
    info = input().split(",")
    x = int(info[0])
    y = int(info[1])
    max_x = max(x, max_x)
    max_y = max(y, max_y)
    min_x = min(x, min_x)
    min_y = min(y, min_y)
    n-= 1

print(str((min_x - 1)) + "," + str((min_y-1)))
print(str((max_x+1)) + "," + str((max_y+1)))
    