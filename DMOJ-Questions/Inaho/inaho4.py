import sys
import math
input = sys.stdin.readline

dimensions = int(input())
curr, dest = [], []
distance = 0.0

curr = input().split(" ")
dest = input().split(" ")
for i in range(0, dimensions):
    distance += (float(dest[i]) - float(curr[i])) ** 2
print((distance) ** (1/2))
