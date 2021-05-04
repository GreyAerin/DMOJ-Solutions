import sys
input = sys.stdin.readline

def runLengthEncoding(string):
    output = ""
    count = 0
    prev = ""
    for i in string:
        if i != "":
            if prev == "":
                prev = i
                count = 0
            if i == prev:
                count+=1
            elif count > 0:
                output += str(count) + " " +  prev + " "
                prev = i
                count = 1
            else:
                prev = i
                count =1
    output += str(count) + " " + prev + " "
    return output


n = int(input())
out = []
for i in range(n):
    x = input().strip()
    out.append(runLengthEncoding(x))

for i in out:
    print(i)
