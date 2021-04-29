import sys
input = sys.stdin.readline
height_a = int(input())
height_b = int(input())
height_c = int(input())
height_d = int(input())

if height_a == height_b and height_b == height_c and height_c == height_d:
    print("Fish At Constant Depth")
elif height_a < height_b and height_b < height_c and height_c < height_d:
    print("Fish Rising")
elif height_a > height_b and height_b > height_c and height_c > height_d:
    print("Fish Diving")
else:
    print("No Fish")
