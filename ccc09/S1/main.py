import sys
import math
input = sys.stdin.readline

lower_bound = int(input())
upper_bound = int(input())

count = 0
for i in range(1, 22):
    n = i ** 6
    if (n <= upper_bound) and (n >= lower_bound):
        count+=1
#Thank god for calculators and their power functions, only 21 6th powers between 1 and a 10 ** 8
print(count)