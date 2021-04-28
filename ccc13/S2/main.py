import sys
from collections import deque
input = sys.stdin.readline

max_weight = int(input())
car_num = int(input())
car_weights = deque()
weight_on_bridge = deque()
car_counter = 0
for i in range(car_num):
    car_weights.append(int(input()))
for weight in car_weights:
    weight_on_bridge.append(weight)
    if len(weight_on_bridge) > 4:
        weight_on_bridge.popleft()
    if sum(weight_on_bridge) <= max_weight:
        car_counter+=1
    else:
        break;
print(car_counter)
