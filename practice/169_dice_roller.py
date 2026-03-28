import random
print("Roll the dice (y/n) ? ")
ans = (input())
if(ans == "Y" or ans  == "y"):
    die1=random.randint(1,6)
    die2=random.randint(1,6)
    print(f'({die1},{die2})')
else:
    print("invalid input !")
