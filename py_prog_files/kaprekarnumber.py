def kaprekar(num):

	sqr = num * num 
	temp = num 
	Sum =0 
	var1=0
	var2=0
	var3=1

	while (temp!=0):
		var3 = var3*10
		temp = int(temp/10)
	var1=sqr%var3
	var2=int(sqr/var3)  # Float mai answer nhi aane ke liye 
	Sum = var1+var2
	return Sum 


num = int(input("Enter any Number"))

Sum = kaprekar(num)

if (Sum==num):
	print("It is a kapreka number ")
else:
	print("It is not a kapreka number")

