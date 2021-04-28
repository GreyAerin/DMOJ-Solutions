import sys
input = sys.stdin.readline
people_to_infect = int(sys.stdin.readline())
infected_on_day_zero = int(sys.stdin.readline())
r_num = int(sys.stdin.readline())
infected = infected_on_day_zero
days = 0
while infected <= people_to_infect:
    days= days + 1
    infected_on_day_zero = infected_on_day_zero * r_num
    infected = infected_on_day_zero + infected

print(days)
    