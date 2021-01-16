def perfectnum(Number):

	Sum = 0

	for i in range(1, Number):
		if(Number % i == 0):
			Sum = Sum + i
	return Sum 




Number = int(input(" Please Enter any Number: "))

Sum = perfectnum(Number)

if (Sum == Number):
    print(" %d is a Perfect Number" %Number)
else:
    print(" %d is not a Perfect Number" %Number)