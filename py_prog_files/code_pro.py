alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

off_set = 3

original_massage = "Hello"
encr_massage = ""

original_massage = original_massage.upper()
#print(original_massage)

for character in original_massage:
	if character in alpha:
		original_position = alpha.find(character)
		new_pos = original_position + off_set
		if new_pos > len(alpha)-1:
			new_pos = original_position+off_set-len(alpha)
		new_character  = alpha[new_pos]
	else: 
		new_character = character
	encr_massage = encr_massage + new_character
print(encr_massage)