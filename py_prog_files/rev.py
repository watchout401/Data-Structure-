def rev(num):
	Reverse = 0
	while(num > 0):
		Reminder = num %10
		Reverse = (Reverse *10) + Reminder
		num = num //10

	return Reverse


num = int(input("Enter any Number: "))

 
print(rev(num))