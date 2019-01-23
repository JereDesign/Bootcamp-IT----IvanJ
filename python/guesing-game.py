import random

ran = random.randint(1, 9)
player = ""

while (player != "exit") or (player == ran):
    print("Uesite jedan broj od 1 do 9: ")
    player = int(input())

    if player > ran:
        print("Prevelik broj")
    elif player < ran:
        print("Premali broj")
    elif player == ran:
        print("Tocno")
        break
