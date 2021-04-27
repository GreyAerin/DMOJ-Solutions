speed_limit = int(input())
current_speed = int(input())

if speed_limit >= current_speed:
    print("Congratulations, you are within the speed limit!")
elif current_speed-speed_limit > 0 and current_speed - speed_limit <= 20:
    print("You are speeding and your fine is $100")
elif current_speed-speed_limit > 20 and current_speed - speed_limit <= 30:
    print("You are speed and your fine is $270")
elif current_speed - speed_limit >= 31:
    print("You are speeding and your fine is $500")