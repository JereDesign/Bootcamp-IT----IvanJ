
print("Izbor: 1.Kamen 2.Skare 3.Papir")
print("Igrac 1:")
player1 =  int(input())
print("Igrac 2:")
player2 =  int(input())

if ((player1 == 1) and (player2 == 2)) or ((player1 == 2) and (player2 == 3)) or ((player1 == 3) and (player2 == 1)):
	print("Igrac 1 je pobijedio")
if ((player1 == 2) and (player2 == 1)) or ((player1 == 3) and (player2 == 2)) or ((player1 == 1) and (player2 == 3)):
	print("Igrac 2 je pobijedio")
elif ((player1 == 1) and (player2 == 1)) or ((player1 == 2) and (player2 == 2)) or ((player1 == 3) and (player2 == 3)):
	print("Nerijeseno!")
else:
	print("Krivi unos")

