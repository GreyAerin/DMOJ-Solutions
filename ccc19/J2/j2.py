import sys
input = sys.stdin.readline

def decompress(compressed):
    output = ""
    for i in range(int(compressed[0])):
        output += (compressed[1].strip())

    return output

n = int(input())
out = []
for i in range(n):
    x = input().split(" ")
    out.append(decompress(x))

for i in out:
    print(i)
