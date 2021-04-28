small_treats = int(input())
medium_treats = int(input())
large_treats = int(input())

happy_number = small_treats + (2 * medium_treats) + (3 * large_treats)

if happy_number >= 10:
    print("happy")
else:
    print("sad")
