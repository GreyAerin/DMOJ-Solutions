import sys
input = sys.stdin.readline
s1 = input()
s2 = input()
s1 = s1.lower().replace(" ", "")
s2 = s2.lower().replace(" ", "")
if sorted(s1) == sorted(s2):
    print("Is an anagram.")
else:
    print("Is not an anagram.")