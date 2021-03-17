import random

def play():
    user = input("'r' for rock, 'p' for papaer, 's' for scissors")
    computer = random.choice('r', 'p', 's'])

    if user == computer:
        return 'tie'

def is_win(player, opponent):
    if (player == 'r' and opponent == 's') or (player )