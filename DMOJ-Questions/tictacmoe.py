import sys
input = sys.stdin.readline
board0 = input()
board1 = input()
board2 = input()
o_wins = False
x_wins = False
#I love brute force
if board0[0] == board0[1] == board0[2]:
    if board0[0] == "O":
        o_wins = True
    else:
        x_wins = True

if board1[0] == board1[1] == board1[2]:
    if board1[0] == "O":
        o_wins = True
    else:
        x_wins = True


if board2[0] == board2[1] == board2[2]:
    if board2[0] == "O":
        o_wins = True
    else:
        x_wins = True

if board0[0] == board1[0] == board2[0]:
    if board0[0] == "O":
        o_wins = True
    else:
        x_wins = True
if board0[1] == board1[1] == board2[1]:
    if board0[1] == "O":
        o_wins = True
    else:
        x_wins = True
if board0[2] == board1[2] == board2[2]:
    if board0[2] == "O":
        o_wins = True
    else:
        x_wins = True
if board0[0] == board1[1] == board2[2]:
    if board0[0] == "O":
        o_wins = True
    else:
        x_wins = True
if board0[2] == board1[1] == board2[0]:
    if board0[2] == "O":
        o_wins = True
    else:
        x_wins = True

if o_wins and x_wins:
    print("Error, redo")
elif o_wins and not x_wins:
    print("Griffy")
elif x_wins and not o_wins:
    print("Timothy")
elif not o_wins and not x_wins:
    print("Tie")
