alphabet = input("Enter the string")
data = alphabet.split() #split string into a list
n=len(data)
for i in range(n):
	if i%2==0:
		temp=data[i]
		print(temp[::-1])
	else:
		print(data[i])
