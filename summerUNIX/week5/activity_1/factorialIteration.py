# This function implements a factorial function in python

#!/usr/bin/python

def factorial(num):
	if(num < 0):	
		print('The factorial function only accepts nonnegative arguments.')
	 	return -1
	value = 1
	while (num > 1):
		value = value * num
		num -= 1
	return value

num = int(raw_input('Enter a number: '))
print factorial(num)

