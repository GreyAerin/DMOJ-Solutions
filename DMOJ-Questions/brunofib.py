import sys
import math
input = sys.stdin.readline

def isFib(n):
    s1 = (5*n*n + 4)
    s2 = (5*n*n - 4)

    return s1 == (int(math.sqrt(s1)) * int(math.sqrt(s1))) or s2 == (int(math.sqrt(s2)) * int(math.sqrt(s2)))


n = int(input())
s = input()
flag = True
phi = (1 + math.sqrt(5))/2;


for i in range(1, n+1):
    if s[i-1] == "A" and not isFib(i):
        print("Bruno, GO TO SLEEP")
        flag = False
        break
    if isFib(i) and not s[i-1] == "A":
        print("Bruno, GO TO SLEEP")
        flag = False
        break

if flag:
    print("That's quite the observation!")
