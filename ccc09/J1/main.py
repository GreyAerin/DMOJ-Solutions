import sys
input = sys.stdin.readline

starting_sum = 91
dig11 = int(input())
dig12 = int(input())
dig13 = int(input())

final_sum =starting_sum + dig11 + dig12 * 3 +dig13
print("The 1-3-sum is "+ str(final_sum))