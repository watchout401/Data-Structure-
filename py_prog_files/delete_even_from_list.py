def delete_starting_evens(lst):
	lst1 =[]
	num1 = 0 
	i=0
	length = len(lst)
	for num in lst:
		if(num%2 != 0):
			num1=i+1
			break
		else:
			i = i+1
	for num1 in range(length):
		lst1 = lst[num1]		
	return lst1

print(delete_starting_evens([4,8,10,11,12,15]))
print(delete_starting_evens([4, 8, 10]))